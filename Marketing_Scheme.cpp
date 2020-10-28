#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll l,r;
        cin>>l>>r;
        if(r>=2*l) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}