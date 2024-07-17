//Steps by Knight
#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    bool isValid(int currentRow , int currentCol ,int N){
        if(currentRow >= 1 && currentRow <= N && currentCol >= 1 && currentCol <= N){
            return true;
        }
        return false;
    }
    int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int dr[] = {-2,-2,-1,-1,1,1,2,2};
	    int dc[] = {-1,1,-2,2,-2,2,-1,1};
	    vector<vector<int>> board(N+1,vector<int>(N+1,0));
	    queue<pair<pair<int,int>,int>> moves ;
	    int minSteps = INT_MAX;
	    
	    moves.push({{KnightPos[0],KnightPos[1]},0});
	    
	    board[KnightPos[0]][KnightPos[1]] = 1;
	    while(!moves.empty()){
	        pair<int,int> move = moves.front().first;
	        int noOfStep = moves.front().second;
	        moves.pop();
	        int row = move.first;
	        int col = move.second;
	        
	        if(row == TargetPos[0] && col == TargetPos[1]){
	            minSteps = min(minSteps,noOfStep);
	        }
	        for(int i = 0 ; i < 8 ; i++){
	            int currentRow = dr[i] + row;
	            int currentCol = dc[i] + col;
	            if(isValid(currentRow , currentCol , N) && board[currentRow][currentCol] == 0){
	                moves.push({{currentRow,currentCol},noOfStep+1});
	                board[currentRow][currentCol] = 1;
	            }
	        }
	    }
	    
	    return minSteps;
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;