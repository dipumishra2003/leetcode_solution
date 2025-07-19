class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        leftmax[0] = 0;
        rightmax[n-1] = 0;
        int sum = 0;

        for(int i=1; i<n; i++){
            leftmax[i] = max(leftmax[i-1],height[i-1]);
        }
        for(int i=n-2; i>=0; i--){
            rightmax[i] = max(rightmax[i+1], height[i+1]);
        }

        for(int i=1; i<n-1; i++){
            int minheight= min(leftmax[i],rightmax[i]);
            if(minheight>height[i]){
                sum = sum + (minheight-height[i]);
            }
        }
        return sum;
    }
};