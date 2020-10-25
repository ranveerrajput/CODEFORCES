#include<bits/stdc++.h>
using  namespace std;

int main(){

    int ntc;
    cin>>ntc;
    while(ntc--){
        int n,m;
        cin>>n>>m;
        vector<int> v;
        long long sum=0;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
            sum=sum+v[i];

        }
        //cout<<sum<<endl;
        if(sum==m ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}