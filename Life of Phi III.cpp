
#include<bits/stdc++.h>
using namespace std;
long int mark[1000006], pi[1000006];
unsigned long long int sum[1000003];
#define n 1000005
int main()
{

    pi[1]=1;
    mark[1]=1;

    for(int i=1;i<=n;i++) pi[i]=i;
    for(int i=2;i<=n;i++){
        if(mark[i]!=1){
            for(int j=i;j<=n;j+=i){
                mark[j]=1;
                pi[j]=(pi[j]/i)*(i-1);
            }
        }
    }
    sum[0]=0;
    sum[1]= 0;
    sum[2]=pi[2]+sum[1];
    for(int i=3;i<=1000000;i++){
        sum[i]=sum[i-1]+pi[i];
    }
    long long int num,t,a,b,s;
    cin>>t;
    while(t--){
           cin>>a>>b;
           if(a>b) {
            int temp=a;
            a=b;
            b=temp;
           }
           cout<<sum[b]-sum[a-1]<<endl;
    }
    return 0;
}
