#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low =  0 ;
        int mid = 0 ; 
        int high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
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

    sol.sortColors(arr);

    for(int i = 0 ; i < N ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}