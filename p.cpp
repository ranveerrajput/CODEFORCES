#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    k--;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);

    }
    auto it=lower_bound((arr.begin()+k),arr.end(),arr[k]);
    cout<<*arr.begin()<<endl;
    cout<<it-arr.begin()<<endl;
    cout<<*(arr.begin()+k);
   
    return 0;
}
