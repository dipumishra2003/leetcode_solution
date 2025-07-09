class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());

        int start = 1;
        int end = position[n-1] - position[0];
        int ans;

        while(start<=end){
            int mid = start + (end - start)/2;
            int count = 1;
            int pos = position[0];

            for(int i=1; i<n; i++){
                if(pos + mid <= position[i]){
                    count++;
                    pos = position[i];
                }
            }

            if(count<m){
                end = mid - 1;
            }
            else{
                ans = mid;
                start = mid + 1;
            }
        }

        return ans;
    }
};