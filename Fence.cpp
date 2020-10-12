//submitted SUCCESSFULLY
    
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ntc;
    cin>>ntc;
    while(ntc--){
        vector<int> v;
        int a,b,c;
        cin>>a>>b>>c;
       // vector<int>::iterator m;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        int m=v.back();

        
        cout<<m+1<<endl;
    }
    return 0;
}