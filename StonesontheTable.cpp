
//https://codeforces.com/problemset/problem/266/A
//ranveerrajput

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    string s;
    ll count=0;
    cin>>s;
     for(int i=1;i<s.size();i++){
         if(s[i]==s[i-1]) count++;
     }

     cout<<count<<endl;






    return 0;
}
