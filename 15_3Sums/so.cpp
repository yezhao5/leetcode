class Solution {
public:
    static bool myfunction (vector<int> a,vector<int> b) { 
        if (a[0]!= b[0]){
           return a[0]<b[0];
       }
        if (a[1]!= b[1]){
           return a[1]<b[1];
       }
        if (a[2]!= b[2]){
           return a[2]<b[2];
       }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=0;
        vector<vector<int>> tore;
        for (; i< nums.size(); i++){
            for (j=i+1; j< nums.size(); j++){
                for (k=j+1; k<nums.size(); k++){
                    if ((nums[i]+nums[j]+nums[k])==0){
                        vector<int> add;
                        //cout<< nums[i]<<" + "<<nums[j]<<" + "<<nums[k]<<endl;
                        add.push_back(nums[i]);
                        add.push_back(nums[j]);
                        add.push_back(nums[k]);
                        std::sort (add.begin(), add.begin()+3); 
                        std::vector<vector<int>>::iterator it;
                        it = find (tore.begin(), tore.end(), add);
                        if (it == tore.end()){
                            tore.push_back(add);
                        }
                    }
                }
            }
        }
        std::sort (tore.begin(), tore.end(), myfunction);
        return tore;
    }
};
