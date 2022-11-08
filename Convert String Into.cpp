
#include<bits/stdc++.h>
using namespace std;
int lps(string str){
    int n = str.length();

    int lp[n][n];
    memset(lp,0,sizeof(lp));
    for(int i=0;i<n;i++)lp[i][i]=1;

    for(int st=2;st<=n;st++){

        for(int i=0;i<n-st+1;i++){
            int j= i+st-1;
            if(str[i]==str[j] && st==2) lp[i][j]=2;
            else if(str[i]==str[j]) lp[i][j]=2+lp[i+1][j-1];
            else lp[i][j]= max(lp[i+1][j],lp[i][j-1]);
        }
    }
    return lp[0][n-1];

}
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){

        string str;
        cin>>str;

        cout<<"Case "<<k<<": "<<str.length()-lps(str)<<endl;
    }
    return 0;
}
