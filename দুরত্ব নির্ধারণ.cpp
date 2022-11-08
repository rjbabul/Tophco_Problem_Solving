#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{

    int t;
    float a,b,c,d,ans;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c>>d;
        ans = ((c-a)*(c-a) ) + ((d-b)*(d-b));
         ans= sqrt(ans);
         printf("Case %d: %0.4f\n",i, ans);
    }
    return 0;
}
