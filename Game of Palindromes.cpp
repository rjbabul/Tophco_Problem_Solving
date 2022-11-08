
#include<bits/stdc++.h>
using namespace std;
 int lps[1001][1001];
 float fndpal(string str){

     int n= str.length(), c=0;

     memset(lps,0,sizeof(lps));
     for(int i=0;i<n;i++){
                    lps[i][i]=1;
                    c++;
     }
     for(int i=n-1;i>=0;i--){
        for(int j=i+1;j<n;j++){

            if((str[i]==str[j] && lps[i+1][j-1]==1)|| (j-i==1 && str[i]==str[j]) ){
                c++;
                lps[i][j]=1;

            }
        }
     }
     return c;
 }

int main()
{
    string str;
    int t;
    cin>>t;
    while(t-- && cin>>str){
       float nps=fndpal(str);
       float n = str.length();
       float nss = (n*(n+1))/2;

      // cout<<setprecision(3)<<nps/nss<<endl;
       printf("%.3f\n",nps/nss);
    }

    return 0;
}
