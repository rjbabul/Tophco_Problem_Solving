
#include <iostream>
#include <string>

using namespace std;

int main() {
	string A;
	cin >> A;
	A[0]= A[0]-32;
	cout<<A[0];
	for(int i=1;i<A.length();i++){
		if(A[i]=='s')cout<<"$";
		else if(A[i]=='i') cout<<"!";
		else if(A[i]=='o')cout<<"()";
		else cout<<A[i];
	}

	cout<<"."<<endl;

	return 0;
}
