/*
*
*Problem Link : https://codeforces.com/contest/456/problem/C
*Platform: codeforces
*Status: correct
*Author: Mayukh Chakrabarti
*
*/

#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false)
#define boost cin.tie(NULL)
#define booster cout.tie(NULL)
#define endl "\n"
typedef long long int lld;

#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;

using namespace std;

int main(){
	
	speed;
	boost;
	
	//Taking inputs starts
	lld N;
	cin>>N;
	lld ar[N];
	F(ar,N);
	//Taking inputs ends
	
	map<lld,lld> mp;
	for(lld i=0; i<N ; i++)
		mp[ar[i]]++;
	
	//storing the elements without duplicates in seq vector
	vector<lld> seq;
	for(auto it= mp.begin(); it != mp.end(); it++)
		seq.push_back(it->first);
	
	
	//forming dp array
	lld n= seq.size();
	lld dp[n+1];
	
	dp[0]= seq[0]*mp[seq[0]];
	lld ans= dp[0];
	
	if(1<n){
		dp[1]= seq[1]*mp[seq[1]];
		if(seq[0]+1 != seq[1])
			dp[1]+= dp[0];
		
		dp[1]= max(dp[0],dp[1]);	
	}
	
	for(int i=2; i<n ; i++){
		
		dp[i]= seq[i]*mp[seq[i]];
		
		if(seq[i-1]+1==seq[i])
			dp[i]= max(dp[i] + dp[i-2] , dp[i-1]);
		else
			dp[i]+= dp[i-1]; 
	}
	
	cout<<dp[n-1];
	
	return 0;
}


