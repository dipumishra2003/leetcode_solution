class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        if(num%2 != 0){
            num--;
            steps++;
        }
        while(num != 0){
            if(num%2 != 0){
                num--;
                steps++;
            }
            else{
                num=num/2;
                steps++;
            }
        }
        return steps;
    }
};