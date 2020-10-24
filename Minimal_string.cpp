#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    getline(cin,s);
    vector<int> freq(26,0);
    for(ll i=0;i<s.length();i++){
        freq[int(s[i]%97)]++;
    }
    int point;
    for(ll  i=0;i<26;i++){
        if(freq[i]>0){
            point=i;
            break;
    }
    }
    stack<char> t;
    string  u;
     for(ll i=0;i<s.length();i++){
         t.push(s[i]);
         if(point==int(t.top())%97){
              freq[int(t.top())%97]--;
                char temp;
                temp=t.top();
                t.pop();
                u+=temp;



              if(freq[point]==0){
                  while(!freq[point]>0){
                      point++;
                  }

              }

                 
                  
              
         }   

     }
     while(!t.empty()){
         char temp;
         temp=t.top();
         u+=temp;
         t.pop();
     }
    
    cout<<u<<endl;




    return 0;
}