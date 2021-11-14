

#include<bits/stdc++.h>
using namespace std;

int get_val(char c){
    int r=1,y=2,b=4;
    if(c=='Y'){
        return y;
    }
    else if(c=='R'){
        return r;
    }
    else if(c=='B'){
        return b;
    }
    else if(c=='O'){
        return r+y;
    }
    else if(c=='P'){
        return r+b;
    }
    else if (c=='G'){
        return y+b;
    }
    else if(c=='A'){
        return r+y+b;
    }
    return 0;
}

int main(){
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int n;
        cin>>n;
        string p;
        cin>>p;
        int ans = 1;
        // unordered_map<char,int> m;
        //U
        //R+Y=O
        //R+B=P
        //Y+B=G
        //R+Y+B=A
        // char G = 'G';
        // char Y = 'Y';
        // map<int,pair<int,int,int>>
        // map<int,int> rgb;
        vector<int> rgb(p.length(),0);

        char prev = p[0];
        rgb[0]=get_val(prev);
        bool r=false,b=false,y=false;

        for(int i=1;i<p.length();i++){
            rgb[i]=get_val(p[i]);

            /*
            if(p[i]!=prev){
                if( p[i]=='G'){
                    int llp = 1;
                }
                else{
                    ans++;
                }
                

            }
            prev = p[i];
            */
        }
        int ansi =0;
        for(int i=0;i<p.length();i++){
            if(rgb[i]%2==1){
                if(r==true){
                    r=true;
                }
                else{
                    ansi++;
                    r=true;
                }

                // r=true;
            }
            else{
                r=false;
            }
            if(rgb[i]&(1<<1)){
                if(y!=true){
                    ansi++;
                    y=true;
                }
            }
            else{
                y=false;
            }
            if(rgb[i]&(1<<2)){
                if(b!=true){
                    ansi++;
                    b=true;
                }
            }
            else{
                b=false;
            }

        }
        /*
        if(prev == 'G'){
            ans++;
        }
        */

        // int ans = 0;
        cout<<"Case #"<<t<<": "<<ansi<<"\n";
    }
}



