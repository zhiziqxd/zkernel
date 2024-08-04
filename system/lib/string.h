#ifndef string_H
#define string_H
string operator +(string a,string b);//声明
const int npos=-1e9+1;
class string{
    public:
    int len;
    char str[10000010];
    int size(){
        return len;
    }
    int length(){
        return len;
    }
    string substr(string str,int st,int end){
        string ans;
        for(int i=st;i<=end;i++){
            ans.str[len]=str.str[i];
            ans.len++;
        }
        return ans;
    }
    bool empty(){
        if(len==0){
            return false;
        }
        else{
            return true;
        }
    }
    int find(string str){
        for(int i=0;i<len-str.size();i++){
            bool flag=true;
            int k=0;
            for(int j=i;j<i+str.size()-1;j++){
                if(str.str[j]!=str[k]){
                    flag=false;
                    break;
                }
                k++;
            }
            if(flag){
                return i;
            }
        }
        return npos;
    }
};
friend string operator +(string a,string b){
    for(int i=0;i<b.lenght();i++){
        a[len]=b[i];
        a.len++;
    }
    return a;
}
#endif