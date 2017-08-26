class Solution {
public:
  vector<int> twoSum (vector<int>& nums, int target){
    for (int index_a = 0; index_a< nums.size(); index_a++){
      for (int index_b = index_a+1; index_b< nums.size(); index_b++){
        if (nums[index_a] + nums[index_b] == target) {
          vector <int> re;
	  re.push_back (index_a);
	  re.push_back (index_b);
	  return re;
}}}}}; 

//java: int[] a = {index_a, index_b}
