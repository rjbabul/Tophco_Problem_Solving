#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n%4==0 && n%100!=0)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;

    }

    return 0;
}
