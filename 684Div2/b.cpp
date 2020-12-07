#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
       ll n,k,ans=0;
       cin>>n>>k;
       vector<ll> arr;
       for(ll i=0;i<n*k;i++){
           ll ele;
           cin>>ele;
           arr.push_back(ele);
       }
       for(ll i=n+ceil(n/2)-1;i<arr.size();i+=2*ceil(n/2)-2){
           ans+=arr[i];
           cout<<arr[i]<<" ";
       }
       cout<<endl;
       cout<<ans<<endl;
        
    }
    
    
    return 0;
}
