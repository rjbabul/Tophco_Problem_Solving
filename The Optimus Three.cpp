#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,x,y,z;
    while(cin>>num){
       z=num/2;
       num-=z;
       x=num/2;
       y=num-x;

        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}
