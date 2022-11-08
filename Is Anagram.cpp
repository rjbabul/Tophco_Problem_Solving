
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char str[10000],st[10000];
    while(cin>>str>>st){

   for(int i=0;i<strlen(str);i++){
        for(int j=0;j < strlen(str)-i-1;j++){
              if(str[j]>str[j+1]){
                char temp= str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
              }
        }
   }
   for(int i=0;i<strlen(st);i++){
        for(int j=0;j < strlen(st)-i-1;j++){
              if(st[j]>st[j+1]){
                char temp= st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
              }
        }
   }
   if(strcmp(str, st)==0) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;

    }
    return 0;
}
