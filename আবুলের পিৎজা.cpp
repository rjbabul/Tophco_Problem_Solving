
#include<bits/stdc++.h>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{

    int t;
    double a,pi,ans;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a;
        pi= acos(-1);
        //cout<<pi<<endl;

         printf("Case %d: %0.3f\n",i, a/pi);
    }
    return 0;
}
