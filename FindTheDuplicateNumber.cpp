// Find the Duplcate Number

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);

        slow = 0;

        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;

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
    int DuplicateNumber = sol.findDuplicate(arr);
    cout << DuplicateNumber ; 
    return 0;

}