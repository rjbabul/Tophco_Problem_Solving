
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int num, a[100006],sum1=0,sum2=0;
   cin>>num;
   for(int i=0;i<num;i++)cin>>a[i];
   for(int i=0;i<num;i++) {
    if(a[i]<=0) break;
    sum1+= a[i];
   }
   for(int i=num-1;i>=0;i--) {
    if(a[i]<=0) break;
    sum2+= a[i];
   }
   if(sum1>sum2) cout<<sum1+sum2<<endl;
   else cout<<sum2<<endl;

    return 0;
}
