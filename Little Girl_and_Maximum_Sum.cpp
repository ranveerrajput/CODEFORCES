#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n,0);
    vector<ll> num;
    for(ll i=0;i<n;i++){
        ll ele;
        cin>>ele;
        num.pb(ele);
    }
    for(ll i=0;i<q;i++){
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        v[l]=v[l]+1;
        if(r+1<n) v[r+1]-=1;
    }
    for(ll i=1;i<n;i++){
        v[i]=v[i]+v[i-1];
    }
    sort(num.begin(),num.end());
    sort(v.begin(),v.end());
    // for(int e:v) cout<<e<<" ";
    //  cout<<endl;
    //  for(int ele:num) cout<<ele<<" ";
    ll ans=0;
     for(int i=0;i<n;i++){
         ans=ans+v[i]*num[i];
     }
     cout<<ans<<endl;



return 0;
}