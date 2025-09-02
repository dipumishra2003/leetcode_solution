class Solution {
public:
    bool check(int i, int j, vector<string> Board, int n){
        //left diag
        int row=i; int col=j;
        while(row>-1&&col>-1){
            if(Board[row][col] == 'Q')
            return 0;
            col--;
            row--;
        }
        //right diag
        row=i, col=j;
        while(row>-1&&col<n){
            if(Board[row][col] == 'Q')
            return 0;
            col++;
            row--;
        }

        return 1;
    }

    void find(int row, int n, vector<vector<string>>& ans, vector<string>& Board, vector<bool> column){
        //base case
        if(row==n){
            ans.push_back(Board);
            return;
        }
        //for all col
        for(int i=0; i<n; i++){
            if(column[i]==0 && check(row,i,Board,n)){
                Board[row][i] = 'Q';
                column[i] = 1;
                find(row+1,n,ans,Board,column);
                Board[row][i] = '.';
                column[i] = 0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> Board(n);
        for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        Board[i].push_back('.');

        vector<bool> column(n,0);

        find(0,n,ans,Board,column);

        return ans;
    }
};