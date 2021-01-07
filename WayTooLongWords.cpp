// https://codeforces.com/problemset/problem/71/A
// ranveerrajput


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        ll l=s.size();
        ll t=l-2;
        string a=to_string(t);
        string ans=s[0]+a+s[l-1];
        if(l>10){
            cout<<ans<<endl;
        }
        else cout<<s<<endl;
    }



    return 0;
}