//we just have to check for the elements other than diagonal are equal or notl

#include<bits/stdc++.h>
using namespace std;

int main(){
    int ntc;
    cin>>ntc;
    while(ntc--){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> v;
        pair<int,int> p;
        for(int i=0;i<2*n;i++){
            int f,s;
            cin>>f>>s;
            
            v.push_back(make_pair(f,s));
        }
        if((m*m)%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            bool a=false;
            for(int i=0;i<2*n;i+=2){
                if( v[i].second==v[i+1].first ){
                    a=true;    
                    break;

                } 
            }
            if(a==true) cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }

            }
        

    }
    return 0;

}