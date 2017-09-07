class Solution {
public:
    int myAtoi(string str) {
        int start = 0;
        int re = 0;
        int neg=1;
        //cout<<"line7"<<endl;
        vector<int> array;
        for(int i=0; i< str.size();i++){
            //cout<<"line 10, i is "<<i<<endl;
            if( white (str[i]) ){
                if(start==0){
                    continue;
                }else{
                    break;
                }
            }else if(str[i]=='+'){
                //cout<<"plus scanned"<<endl;
                if(start==0){
                    neg=1;
                    //cout<<"plus caught"<<endl;
                    start = 1;
                }else{
                    break;
                }
            }else if(str[i]=='-'){
                //cout<<"minus scanned"<<endl;
                if(start==0){
                    //cout<<"minus caught"<<endl;
                    start = 1;
                    neg=-1;
                }else{
                    break;
                }
            }else if (isInt(str[i])){
                start = 1;
                //cout<<"insert "<<str[i]<<endl;
                array.push_back(str[i]-48);
                //cout<<"actually add is "<<array.back()<<endl;
            }else{
                break;
            }
        }
        //cout<<"array length is "<<array.size()<<endl;
        int count = 1;
        int i = array.size()-1;
        while (i>=0){
            //cout<<"enter while"<<endl;
            if(array[i]!=0 && (array[i]*count)/array[i]!= count) {
                
                if(neg==1) return INT_MAX;
                return INT_MIN;
            }
            if(neg==1){
                if((INT_MAX - re)<array[i]*count) {
                    cout<<"here"<<endl;
                    return INT_MAX;
                }
            }else {
                if((INT_MAX - re)<array[i]*count) {
                    cout<<"here s"<<endl;
                    cout<<"left is "<<INT_MAX-1 - re<<endl;
                    cout<<"right is "<<array[i]*count<<endl;
                    cout<<"INT MIN"<< INT_MIN<<endl;
                    return INT_MIN;
                }
            }
            //cout<<"re was "<<re<<endl;
            //cout<<"part to add is "<<array[i]<<endl;
            //cout<<"count is "<<count<<endl;
            re = re + array[i]*count;
            cout<<"re is now "<<re<<endl;
            count  = count *10;
            i--;
        }
        re = re*neg;
        return re;
    }
    
    bool white(char a){
        switch (a){
            case ' ': return true;
                break;
            case '\t': return true;
                break;
            case '\n': return true;
                break; 
            case '\v': return true;
                break;
            case '\f': return true;
                break;
            case '\r': return true;
                break;
            default:
                return false;
        }
        return false;
    }
    
    bool isInt(char a){
        if (a>=48 && a<=57 ){
            return true;
        }
        return false;
    }
};
