class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int temp = x;
        vector<int> array;
        int i = 0;
        while(temp!=0){
            //cout<<"enter 1st while"<<endl;
            array.push_back(temp%10);
            //cout<<"push "<<temp%10<<endl;
            temp = temp/10;
            i++;
        }
        if(array.size()==1) return true;
        int a = 0;
        int z = i-1;
        while (a < z){
            //cout<<"enter 2nd while"<<endl;
            if (array[a] != array [z]) {
                return false;
            }
            a++;
            z--;
            
        }
        return true;
    }
};
