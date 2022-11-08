
#include<bits/stdc++.h>
using namespace std;
int main()
{
   double a, b;
   while(cin>>a>>b){
        a= (a*60-b*11)/2 <= 180?(a*60-b*11)/2:360-(a*60-b*11)/2 ;
    cout<<a<<endl;
   }
    return 0;
}
