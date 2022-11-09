#include<bits/stdc++.h>
using namespace std;

vector<int> vt[200005];
 bool visit[200005];
bool flag = false;
void backtrack(int s, int cnt)
{

    if(vt[s].size()==0)
    {
        if(cnt%2!=0) flag=true;
        return ;
    }

    for(int i =0;i<vt[s].size();i++)
    {

        int x = vt[s][i];
        if(visit[x]==0)
        {
            visit[x]=1;
            backtrack(vt[s][i], cnt+1);
            visit[x]=0;

         }

    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    int t;
    int  n, m, x,u,v;
    cin>>t;
    for(int st= 1;st<=t;st++)
    {

        memset(vt, 0 , sizeof(vt));
        memset(visit, 0, sizeof(visit));
        flag=false;
        cin>>n>>m>>x;
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            vt[u].push_back(v);
        }

        int cnt =0;
       backtrack(x, cnt);
       cout<<"Case "<<st<<": ";
       if(!flag)
       {
           cout<<"No"<<endl;
       }
       else cout<<"Yes"<<endl;
    }
    return 0;
}
