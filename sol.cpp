class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        vector <int> re;
        while(i<nums1.size()||j<nums2.size()){
            if(i<nums1.size()&&j<nums2.size()){
                if (nums1[i]<nums2[j]){
                    //cout<<"i is "<<i<<" add nums "<<nums1[i]<<endl;
                    re.push_back(nums1[i]);
                    i++;
                }else{
                    //cout<<"j is "<<j<<" add nums "<<nums2[j]<<endl;
                    re.push_back(nums2[j]);
                    j++;
                }
            }else if(i<nums1.size()){
                //cout<<"i is "<<i<<" add nums "<<nums1[i]<<endl;
                re.push_back(nums1[i]);
                i++;
            }else{
                //cout<<"j is "<<j<<" add nums "<<nums2[j]<<endl;
                re.push_back(nums2[j]);
                j++;
            }
        }
        int me = nums1.size()+nums2.size();
        if(me%2 ==1){
            me = me/2;
            return re[me];
        }else{
            me = me/2;
            return (re[me]+re[me-1])/2.0000;
        }
    }
};
