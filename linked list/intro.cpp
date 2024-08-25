// tell me about linked list
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct linkedListNode
{
    int data;
    linkedListNode* next;

    public:
    linkedListNode(int newData, linkedListNode* newNext){  // A constructor a constructor is a special member function of a class that is automatically called when an object of that class is created The primary purpose of a constructor is to initialize the object's members (attributes) to appropriate values, ensuring the object starts in a valid state
        data = newData;
        next = newNext;
    }
    linkedListNode(int newData){  // A constructor a constructor is a special member function of a class that is automatically called when an object of that class is created The primary purpose of a constructor is to initialize the object's members (attributes) to appropriate values, ensuring the object starts in a valid state
        data = newData;
       
    }
};
void linkedListTraversal(linkedListNode* head){
    linkedListNode* currentNode = head;
    while (currentNode !=nullptr)
    {
         cout<<currentNode->data<<" ";
         currentNode = currentNode->next;
    }
    
}

linkedListNode* convertArray2LinkedList(vector<int> arr){
    linkedListNode* head = new linkedListNode(arr[0]);
    linkedListNode* mover = head;
    for (int i = 0; i < arr.size(); i++)
    {
        linkedListNode*temp = new linkedListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main()
{
    vector<int> arrList = {2,5,76,876,545,22,1};
    // linkedListNode* head = new linkedListNode(arrList[5],nullptr);

    
    return 0;
}