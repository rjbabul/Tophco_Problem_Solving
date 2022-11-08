
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[] = {"friday", "saturday" ,"sunday","monday", "tuesday", "wednesday", "thursday"};
    map<string, int > mp;
    mp["friday"]=0 ; mp["saturday"]=1; mp["sunday"]=2;mp["monday"]=3;
    mp["tuesday"]=4; mp["wednesday"]=5;  mp["thursday"]=7;
    string st;

    long long int d1,d2,m1,m2, y1,y2, days;
    cin>>d1>>m1>>y1;
    cin>>st;
    cin>>d2>>m2>>y2;
    d1= (y1*365)+(m1*30)+d1;
    d2= (y2*365)+(m2*30)+d2;
    days= llabs(d2-d1)%7;
    if(d1>d2){
       if(mp[st]-days<0)cout<<str[7-days]<<endl;
       else cout<<str[ mp[st]-days];
    }
    else
    cout<<str[days%7]<<endl;
    return 0;
}
