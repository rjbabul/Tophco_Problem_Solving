
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char ch;
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,str);
        ch=str[0];
        cout<<str[0];
        for(int i=1; i< str.length(); i++)
        {
            if(ch!=str[i])
                cout<<str[i];
                ch=str[i];
        }
        cout<<endl;
    }
    return 0;
}
