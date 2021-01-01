//https://codeforces.com/problemset/problem/404/A
//ranveer

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ele;
            cin>>ele;
            arr[i][j]=ele;
        }
    }
    
    char fir=arr[0][0];
    char sec=arr[0][1];
    if(fir==sec) cout<<"NO"<<endl;
    else{
    int f=0;
    for(int i=0,k=n-1;i<n && k>=0;i++,k--){
        for(int j=0;j<n;j++){
            if(i==j && arr[i][j]==fir) continue;
            else if(i!=j && j!=k && arr[i][j]==sec) continue;
            else if(i!=j && j==k && arr[i][j]==fir) continue;
            else{
                f=1;
                break;
            }
            
        }
        if(f==1) break;
    }
    if(f==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    
    
    return 0;
}