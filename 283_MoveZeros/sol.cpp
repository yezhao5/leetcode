class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for(int num: nums){
            if(num != 0 ) nums[index++] = num;
        }
        while(index < nums.size()){
            nums[index++] = 0;
        }
    }
};
