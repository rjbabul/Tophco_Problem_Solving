#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int num;
    while(cin>>num){
        cin>>str;
        int c=0;
        for(int i=1;i<num;i++){
            if(str[i]== str[i-1]) c++;
        }
        if( c>=1) cout<<"Change needed"<<endl;
        else cout<<"No change needed"<<endl;
    }

    return 0;
}
