// https://codeforces.com/contest/705/problem/A
// ranveerrajput

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin>>n;
    string ans;
    string mid="that";
    string end=" it";
    ll i=1;
    while(i<=n){
        if(i==1){
            ans+="I hate";
        }
        else if(i%2==0){
            ans+=" that I love";
        }
        else{
            ans+=" that I hate";
        }
        i++;
        
        
    }
    cout<<ans+end<<endl;
    
    return 0;
}