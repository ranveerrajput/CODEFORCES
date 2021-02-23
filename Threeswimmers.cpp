// https://codeforces.com/contest/1492/problem/A
// ranveerrajput

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        vector<ll> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        //ll res=1000000000000000000000;
        ll curr;
        ll ans;
        if(p<v[0]){
            cout<<v[0]-p<<endl;
        }
        else{
            vector<ll> f;
            for(ll i=0;i<v.size();i++){
                ll aa=p/v[i];
                ll bb=p%v[i];
                if(bb>0) bb=1;
                else bb=0;
                curr=((v[i]*(aa+bb))-p);
                f.push_back(curr);
                //cout<<v[i]*(aa+bb)<<" "<<(v[i]*(aa+bb))-p<<" "<<res<<endl;
                //res=min(res,curr);
            }
            ans=f[0];
            for(auto ele:f){
                if(ele<ans) ans=ele;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}