#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max = arr[0];
        // cout<<arr.size()<<endl;
        for(int i = 0; i <=arr.size()-1;i++){
            if(arr[i+1]> max)
                max = arr[i];
                
        }
        return max;
        
    } 
};
int main() {
        Solution ob;

    vector<int> arr = {1, 8, 7 ,56 ,90};

        cout << ob.largest(arr) << endl;
    
    return 0;
}