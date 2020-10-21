/* Check whether a number belongs to fibonacci series or not.*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a;cin>>n;
	while(n--){
		cin>>a;
		if( (ceil(sqrt(5*a*a - 4 )) == floor(sqrt(5*a*a -4))) || (ceil(sqrt(5*a*a + 4 )) == floor(sqrt(5*a*a + 4))) ){cout <<"Yes"<<endl;}
		else{cout<<"No"<<endl;}
	}
	return 0;
}
