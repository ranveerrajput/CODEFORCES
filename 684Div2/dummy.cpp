#include<bits/stdc++.h>
using namespace std;



int main(){
    string str;
    cin>>str;
    sort(str.begin(), str.end()); 
    if(str[0]=='0'){
        int index;
         for(int i=0;i<str.length();i++){
            if(str[i]!='0'){
                index=i;
                break;
            }
        }
        for(int i=index;i>0;i--){
            char temp= str[i];
            str[i]=str[i-1];
            str[i-1]=temp;

        }

    }
    cout<<str<<endl;

   

    return 0;
}


