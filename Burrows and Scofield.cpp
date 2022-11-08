
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;

        string str,st;
        while(cin>>str>>st){
            int sum =0;
            for(int i=0;i<str.length();i++)if(str[i]>='0' && str[i]<='9')sum+= str[i]-'0';
            for(int i=0;i<st.length();i++)if(st[i]>='0' && st[i]<='9')sum+= st[i]-'0';
             cout<<"\""<<sum<<"\""<<endl;
        }


    return 0;
}
