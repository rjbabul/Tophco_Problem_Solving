
#include<bits/stdc++.h>
#include<string>
using namespace std;
string a=".***.*...**...*******...**...**...*";
    string b="****.*...**...*****.*...**...*****.";
    string c=".***.*...**....*....*....*...*.***.";
    string d="****.*...**...**...**...**...*****.";
    string i=".***...*....*....*....*....*...***.";
    string e="******....*....****.*....*....*****";
    string f="******....*....****.*....*....*....";
    string g=".***.*...**....*....*..***...*.***.";
    string h="*...**...**...*******...**...**...*";
    string j="..***...*....*....*....*.*..*..**..";
    string k="*...**..*.*.*..**...*.*..*..*.*...*";
    string l="*....*....*....*....*....*....*****";
    string m="*...***.***.*.**.*.**...**...**...*";
    string n="*...**...***..**.*.**..***...**...*";
    string o=".***.*...**...**...**...**...*.***.";
    string p="****.*...**...*****.*....*....*....";
    string q=".***.*...**...**...**.*.**..*..**.*";
    string r="****.*...**...*****.*.*..*..*.*...*";
    string s=".*****....*.....***.....*....*****.";
    string t="*****..*....*....*....*....*....*..";
    string u="*...**...**...**...**...**...*.***.";
    string v="*...**...**...**...*.*.*..*.*...*..";
    string w="*...**...**...**.*.**.*.**.*.*.*.*.";
    string x="*...**...*.*.*...*...*.*.*...**...*";
    string y="*...**...*.*.*...*....*....*....*..";
    string z="*****....*...*...*...*...*....*****";
string st;
 void   bal(string str[], int ll,int uu){
        string st;
        vector<string >vt;
    for(int ii=0;ii<7;ii++){
        for(int j=ll;j<uu;j++){
              st+= str[ii][j];
        }
    }
   // cout<<st<<endl;
         if(a==st) cout<<"A";
    else if(b==st) cout<<"B";
    else if(c==st) cout<<"C";
    else if(d==st) cout<<"D";
    else if(e==st) cout<<"E";
    else if(f==st) cout<<"F";
    else if(g==st) cout<<"G";
    else if(h==st) cout<<"H";
    else if(i==st) cout<<"I";
    else if(j==st) cout<<"J";
    else if(k==st) cout<<"K";
    else if(l==st) cout<<"L";
    else if(m==st) cout<<"M";
    else if(n==st) cout<<"N";
    else if(o==st) cout<<"O";
    else if(p==st) cout<<"P";
    else if(q==st) cout<<"Q";
    else if(r==st) cout<<"R";
    else if(s==st) cout<<"S";
    else if(t==st) cout<<"T";
    else if(u==st) cout<<"U";
    else if(v==st) cout<<"V";
    else if(w==st) cout<<"W";
    else if(x==st) cout<<"X";
    else if(y==st) cout<<"Y";
    else if(z==st) cout<<"Z";

   st.clear();

    }

int main()
{

    string str[1000],st;
    int ln;
    vector<string > vt;
    for(int i=0;i<7;i++){
            cin>>str[i];
            ln = str[i].length();
    }
    int k=0;
         while(k<ln)
         {
             bal(str,k,k+5);
             k+=6;

         }
         cout<<endl;

    return 0;
}
