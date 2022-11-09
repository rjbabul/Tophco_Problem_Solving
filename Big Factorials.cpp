#include<bits/stdc++.h>
using namespace std;
struct
{
    string str;

}fact[10004];

int main()
{

    fact[0].str= "1000";
    fact[1].str="1000";
    string st;
    for(int n=2;n<103;n++)
    {
        st= fact[n-1].str;
        int r,c=0;
        for(int i=0;i<4;i++)
        {
            r= (st[i]-'0')*n+c;
            fact[n].str+= (r%10)+'0';
            c= r/10;

        }


    }
    int n;
    while(cin>>n)
    {
        if(n>19)
        {
            cout<<0<<endl;
            continue;
        }
        st= fact[n].str;
        reverse(st.begin(), st.end());
        int i=0;
        while(i<4 && st[i]=='0')i++;

        cout<<st.substr(i, 4-i)<<endl;
    }
    return 0;
}
