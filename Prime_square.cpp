#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin>>n;
        vector<vector<int>> a(n);
        for(int i=0;i<n;i++){
            a[i].resize(n,0);
        }
        for(int i=0;i<n;i++){
            a[i][i]=1;
            a[i][n-i-1]=1;
        }
        if(n%2){
            a[n/2-1][n/2]=1;
            a[n/2][n/2+1]=1;

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
                if(j==n-1) cout<<endl;
            }
        }
    }

       
    return 0;

}