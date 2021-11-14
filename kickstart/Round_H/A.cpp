

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        string s,f;
        cin>>s>>f;
        int ans = 0;
        // unordered_map<char,int> m;
        vector<int> al(26,0);
        for(int i=0;i<f.length();i++){
            // m[s[i]]++;
            al[f[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            int mini = 26;
            int alpha_num = s[i]-'a';
            for(int i=0;i<26;i++){
                if(al[i]>0){
                    mini = min(mini,min(abs(i-alpha_num),26-abs(i-alpha_num)));
                }

            }
            ans+=mini;
            /*
            if(m.find(s[i])==m.end()){
                int dif1 = 
            }
            */
        }
        // int ans = 0;
        cout<<"Case #"<<t<<": "<<ans<<"\n";
    }
}



