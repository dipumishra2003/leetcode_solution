class Solution {
public:

    void per(vector<int>& nums, vector<vector<int>>& res, vector<int> temp, vector<bool>visited){
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(visited[i] == 0){
                visited[i]=1;
                temp.push_back(nums[i]);
                per(nums,res,temp,visited);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<bool> visited(nums.size(),0);
        per(nums, res, temp, visited);
        return res;
    }
};