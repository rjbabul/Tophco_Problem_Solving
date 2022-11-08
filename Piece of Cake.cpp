#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double ab,ad,d,traignle, cc,pi,aa,ac,D,cd ;
    int t;
    cin>>t;
    while(t--){
        cin>>ab>>ad>>d;
        pi= acos(-1);
         aa=ab*ab;

        traignle=  cos ((d*pi)/180);
        cc=    (ab*ab) + (ad*ad)-(traignle*2*ab*ad);
        cd=sqrt(cc);

        D=((ad*ad)+ (cc) -(ab*ab))/(2*cd*ad);
        D= (acos(D)*180)/pi;

        D=180-D;
        traignle=  cos ((D*pi)/180);
        ac= (cd*cd) + (ad*ad)-(traignle*2*cd*ad);

       printf("%0.9lf\n", ac+aa);
    }
    return 0;
}
