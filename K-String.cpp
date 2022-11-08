
 #include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int n, k, a[26];
	memset(a,0,sizeof(a));
	cin>>n>>k>>str;
	set<char> st;
	for(int i=0;i<n;i++) {
        a[str[i]-'a']++;
        st.insert(str[i]);
	}
	sort(a,a+26);
	int sum =0;
	if(st.size()>=k)
	for(int i=0;i<26-k;i++)sum+=a[i];
	else sum= k- st.size();
	cout<<sum<<endl;

	return 0;
}
