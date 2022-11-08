#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    for(int step =1; step<=t; step++)
    {
        cin>>n;
        int cnt=1;
        int ans =1,child=1;
        while(ans<n)
        {
            cnt++;
            child= child*2;

            ans+= child;
        }
        cout<<"Case "<<step<<": "<<cnt<<endl;
    }
    return 0;
}
