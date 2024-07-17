//Remove Duplicates from Sorted Array
#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int j = 1; 
        for(int i = 1 ; i < arr.size() ; i++){
            if(arr[i] != arr[i-1]){
                arr[j] = arr[i];
                j++;
            }
        }
        return j;
    }
};


int main(){
    int N ; 
    cin >> N ; 
    vector<int> arr(N);

    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    Solution sol ;
    int len = sol.removeDuplicates(arr);
    cout << len ;
    return 0;
}