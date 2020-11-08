#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin>>n;
        ll fact=1;
        for(ll i=1;i<=n;i++){
            fact=((fact%MOD)*(i/MOD))%MOD;
        }

        cout<<fact;
    }
    return 0;
}