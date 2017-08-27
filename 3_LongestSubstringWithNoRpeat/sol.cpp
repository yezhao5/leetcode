class Solution {
public:
  int length(string s){
    int max;
    for (int i = 0; i< s.size()l i++){
      std::unordered_set <char> hash;
      int j;
      for (j = i; j<s.size(); j++){
	if (hash.find(s[j])==hash.end()){
	  hash.insert(s[j]);
	    if((j-i+1)>max){
	      max = j-i+1;
	    }
        }else break;
      }
      if (j == s.size()-1) break;
    }
    if (max==0) return 1;
    return max;
  }
}
