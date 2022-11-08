
#include<bits/stdc++.h>
using namespace std;

  int main() {
     long long int n;
     while(cin>>n){
            int c=0;
            while(n){
                if(n&1)c++;
                n=n>>1;
            }
            for(int i=0;i<c;i++){
                n|=1;
                n=n<<1;
            }
             n=n>>1;
             cout<<n<<endl;

     }

    return 0;
}
