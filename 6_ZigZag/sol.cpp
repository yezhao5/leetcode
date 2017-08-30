ass Solution {
public:
    string convert(string s, int numRows) {
        string re = "";
        int n=numRows;
        int j = n-2;
        int done = 0;
        if(n==0) return s;
        if(n==1) return s;
        for(int i = 0; i<s.size(); i++){
            if(done==0){
                if(done==i%(2*n-2)){
                   re.push_back(s[i]);
                //cout<<"add "<<s[i]<<endl;
                }
            }
        }
        done++;
        while(done < n-1){
            for(int i = 0; i<s.size(); i++){
                if(done==i%(2*n-2)){
                    re.push_back(s[i]);
                    //cout<<"add b"<<s[i]<<endl;
                    if((i+((n-done-1)*2))<s.size()){
                        re.push_back(s[i+(n-done-1)*2]);
                        //cout<<"add h,value is"<<i+(n-done-1)*2<<endl;
                    }
                }  
            }
            done++;
        }
                 for(int i = 0; i<s.size(); i++){
                    if(done==i%(2*n-2)){
                        re.push_back(s[i]);
                        //cout<<"add c"<<s[i]<<endl;
                    }
                }
       
        
        return re;
    }
};
