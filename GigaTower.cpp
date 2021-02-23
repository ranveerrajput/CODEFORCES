// https://codeforces.com/contest/488/problem/A
// ranveerrajput

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isEightPresent(ll n){
   string a = to_string(n);
   for(ll i=0;i<a.size();i++){
       if(a[i]=='8'){
           return 1;
       }
   }
   return 0;
} 

int main(){
    ll n;
    cin>>n;
    ll dummy=n;
    bool ans;
    while(1){
        dummy=dummy+1;
        ans = isEightPresent(dummy);
        if(ans==1) {
            cout<<abs(n-dummy)<<endl;
            break;
        }
        
        
    }
  
    return 0;
}