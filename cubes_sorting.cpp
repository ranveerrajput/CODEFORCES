#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
        while(t--){
            long long n,steps;
            cin>>n;
            long long a[n];
            for(long long i=0;i<n;i++){
                cin>>a[i];
                
            }

            //logic for bubble sort with o(n)
          //  long long m=a[0];
            for(long long i=0;i<n-1;i++){
                    long long flag=0;
                for(long long j=0;j<n-i-1;j++){
                        if(a[j]>a[j+1]){
                            long long temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                            flag=1;
                            steps++;
                        }

                }
                if(flag==0)
                        break;
            }
          //  cout<<steps;
        if(steps<=(n*(n-1))/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
        return 0;
}
