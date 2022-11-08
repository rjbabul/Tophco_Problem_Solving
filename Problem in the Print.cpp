
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    while(getline(cin,str)){
        if(str=="the end.")break;

        for(int i=0;i<str.length();i++) if(str[i]=='b')cout<<'6'; else if(str[i]== 'g') cout<<'9';
        else if( str[i]=='l')cout<<'1';else if(str[i]=='o')cout<<'0';else if(str[i]=='s')cout<<'5';  else if(str[i]=='z')cout<<'2';
        else if(str[i]=='6')cout<<'b'; else if(str[i]== '9') cout<<'g';
        else if( str[i]=='1')cout<<'l';else if(str[i]=='0')cout<<'o';else if(str[i]=='5')cout<<'s';  else if(str[i]=='2')cout<<'z'; else cout<<str[i];
        cout<<endl;
    }



    return 0;
}
