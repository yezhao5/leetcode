class Solution {
    
public:
    int reverse(int x) {
        vector<int> reversed;
        int neg = 1;
        int low = 2147483648;
        unsigned int up = 2147483647;
        
        if(x<0){
            neg = -1;
            x=x*(-1);
        }
        
        while(x!=0){
            int a = x%10;
            reversed.push_back(a);
            
            x=x/10;
        }
        
        int count=1;
        for(int i = 1; i<reversed.size();i++){
            
            count = count*10;
        }
        
        unsigned int sum = 0;
        for(int j=0; j<reversed.size();j++){
            unsigned int a = count*reversed[j];
            //cout<<"a is "<<a<<endl;
            if(a/count!=reversed[j]){
                //cout<<"not okay"<<endl;
                return 0;
            }
            sum+=a;
            
            count = count/10;
        }
        //cout<<"sum is"<<sum<<endl;
        if(neg==1&&sum>up) return 0;
        if(neg==-1&&sum>low) return 0;
        sum = sum*neg;
       
        
        return sum;
       
    }
    
};
