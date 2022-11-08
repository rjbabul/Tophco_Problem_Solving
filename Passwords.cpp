#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str){
        int a=0,b=0,c=0,f=0;
        for(int i=0;i<str.length();i++){
            if(str[i]>='a' && str[i]<='z')a++;
            else if(str[i]>='A' && str[i]<='Z')b++;
            else c++;
            if(a>0 && b>0 && c>0){
                a=b=c=0;
                f++;
            }

        }
        cout<<f<<endl;
    }
    return 0;
}
