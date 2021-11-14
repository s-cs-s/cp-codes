
#include<bits/stdc++.h>
using namespace std;

void make_change(string s){
    char prev = s[0];
    string ans = "";

    for(int i=1;i<s.length();i++){
        if(prev+1 == (s[i]+1)-1){
            c = (char)((int)(s[i])+1);
            // s=s[:i-1]+c+s[i+1:] 
            ans += c;
            i--;
            s = ans ;  
            
            continue;
        }
        else{
            ans+=prev+s[i];
        }
        prev = s[i];
    }
    return s;
}

int main(){
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int ans = 0;
        cout<<"Case #"<<t<<": "<<ans<<"\n";
    }
}

