class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size () == 0) 
            return 0;
        int prev = nums[0];
        for (int i = 1; i < nums.size(); i++){
            if (nums[i]== prev){
                nums.erase(nums.begin()+i);
                i--;
            }else {
                prev = nums[i];
            }
            if (i==nums.size()) break;
            
        }
        return nums.size();
    }
};
