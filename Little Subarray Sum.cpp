
#include<bits/stdc++.h>
using namespace std;

  int main() {
      int n,a,b,sum[10000],x,aa[1000];
      while(cin>>n>>a>>b){
        memset(sum,0,sizeof(sum));
        cin>>aa[0];
        sum[0]=x;
        for(int i=1;i<n;i++){
            cin>>aa[i];
            sum[i]=sum[i-1]+aa[i];

        }
        cout<<sum[b]-sum[a]+aa[a]<<endl;
      }

    return 0;
}
Download
