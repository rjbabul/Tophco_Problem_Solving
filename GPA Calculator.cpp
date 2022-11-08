
#include<bits/stdc++.h>
using namespace std;

  int main() {
     int t, n;
     cin>>t;
     int ii=1;
     while(ii<=t && cin>>n){
            double sum=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }

     cout<<"Case "<<ii++<<": "<< setprecision(4)<<sum/(double)(n)<<endl;
     }

    return 0;
}
