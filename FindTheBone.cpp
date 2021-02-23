// https://codeforces.com/contest/796/problem/B
// ranveerrajput

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    unordered_map<ll,ll> mm;
    for(ll i=0;i<m;i++){
        ll ele;
        cin>>ele;
        mm.insert({ele,i});
    }
    ll bonePos=1;
    for(ll i=0;i<k;i++){
        ll start,end;
        cin>>start>>end;
        if(start==bonePos){
            //auto it =find(mm.begin(),mm.end(),bonePos);
            if(mm.find(bonePos)!=mm.end()){
                bonePos=start;
                break;
            }
            else{
                bonePos=end;
                //auto it =find(mm.begin(),mm.end(),bonePos);
                if(mm.find(bonePos)!=mm.end()){
                bonePos=end;
                break;
                }
            }
        }
        else if(end==bonePos){
            //auto it =find(mm.begin(),mm.end(),bonePos);
            if(mm.find(bonePos)!=mm.end()){
                bonePos=end;
                break;
            }
            else{
                bonePos=start;
                //auto it =find(mm.begin(),mm.end(),bonePos);
                if(mm.find(bonePos)!=mm.end()){
                bonePos=start;
                break;
                }
            }
            
        }
    }
    cout<<bonePos<<endl;
    return 0;
}