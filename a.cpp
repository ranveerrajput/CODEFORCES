
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,s,x;
    cin>>t>>s>>x;
    if(x/s==0 && t!=x) cout<<"NO"<<endl;
    else{
        if((s*(x/s)+t==x) || (s*(x/s)+t+1)==x || x==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;;

        
    }

    return 0;
}
