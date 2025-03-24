class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int n = meetings.size();

        sort(meetings.begin(), meetings.end());

        int end = 0;
        int res = 0;

        for(auto& meet : meetings){
            if(meet[0] > end){
                res += meet[0] - end - 1;
            }
            end = max(meet[1], end);
        }
        if(end<days){
            res += days-end;
        }

        return res;
    }
};