
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    while(cin>>num){
        for(int i=1; i<=num;i++){
            for(int j=1;j<=num-i;j++) cout<<" ";
            for(int k=1;k<=i;k++){
                cout<<"*";
                if(k<i) cout<<" ";
            }

        cout<<endl;
    }

    }
    return 0;
}
