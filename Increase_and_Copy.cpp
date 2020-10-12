#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin>>n;
        ll num=0;
        for(ll i=1;i*i<=n;i++){
             num=i;
        }

        ll ans=(num-1)+((n-num)/num);
        if(((n-num)%num)!=0) ans+=1;
       // cout<<num<<"num";
        cout<<ans<<endl;

    }
    return 0;

}