//http://codeforces.com/problemset/problem/214/A
//ranveer

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m,count=0;
    cin>>n>>m;
    for(ll i=0;i<=1000;i++){
        for(ll j=0;j<1000;j++){
            if((i*i)+j==n && (i+(j*j))==m) count++;
        }
    }
    cout<<count<<endl;



    return 0;
}