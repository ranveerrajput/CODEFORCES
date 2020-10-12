#include<bits/stdc++.h>
using namespace std;

int main(){
int ntc;
cin>>ntc;
while(ntc--){
    int n;
    cin>>n;
    int c1=0;
    int c2=0;
    int c3=0;
    c1=n/7;
    n=n/7+n%7;
    c2=n/5;
    n=n/5+n%5;
    c3=n/3;
    n=n/3+n%3;
    if(n>0) cout<<-1<<endl;
    else cout<<c3<<" "<<c2<<" "<<c1<<endl;
   
}
return 0;
}