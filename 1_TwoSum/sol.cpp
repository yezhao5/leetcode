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

//another O(n) solution 
    vector <int> twoSum (vector <int> & nums, int target){
       
    //<value , index>
    unordered_map <int, int> hash;
    vector<int> result;
    
    for(int i = 0; i< nums.size(); i ++){
        int toFind = target - nums[i];
        if (hash.find(toFind) == hash.end()){
            hash[nums[i]]= i;
        }else{
            result.push_back(hash[toFind]);
            result.push_back(i);
        }
    }
    
    return result;
    }
