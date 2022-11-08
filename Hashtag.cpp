
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str,st;
    int t;

    getline(cin, str);
        for(int i=0;i<str.length();i++){
           if(str[i]!=' ')st+=str[i];
        }
        cout<<st<<"\n";
    return 0;
}
