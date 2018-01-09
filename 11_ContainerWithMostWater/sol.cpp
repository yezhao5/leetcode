class Solution {
#include <math.h>
    public:
    int maxArea(vector<int>& height) {

        int size = height.size();
        if (size < 2) return 0;

        int left = 0, right = size-1, max = 0;
        while(left< right){
            max = fmax(max, (right-left)* fmin(height[left], height[right]));
            if(height[left] < height[right]){
                left ++;
            }else{
                right --;
            }
        }
        return max;
    }
};
