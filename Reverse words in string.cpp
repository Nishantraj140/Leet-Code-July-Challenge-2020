class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0,n=s.length();
        string ans="";
        while(i<n){
        while(i<n && s[i]==' '){
            i++;
        }
        if(i>=n)
        break;
        j=i+1;
        while(j<n && s[j]!=' '){
            j++;
        }
        string w = s.substr(i,j-i);
        if(ans.length()==0){
            ans=w;
        }
        else{
            ans=w+" "+ans;
        }
        i=j+1;
        }
        return ans;
    }
};