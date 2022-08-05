#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;
long numberOfWays(string book) {
    int n=book.size();
    long long int count=0;
    vector<int>store;
    for(int i=0;i<n;){
        char c = book[i];
        int count=0;
        while(i<n && book[i]==c){
            count++;
            i++;            
        }
        store.push_back(count);
    }
    int m=store.size();
    vector<int>evenSum(m+1,0);
    vector<int>oddSum(m+1,0);
    for(int i=m-1;i>=0;i--){
        oddSum[i] = oddSum[i+1];
        evenSum[i] = evenSum[i+1];
        if(i%2){
            oddSum[i] += store[i];
        }else{
            evenSum[i] += store[i];
        }
    }
    for(int i=0;i<m;i++){
        int a=store[i];
        for(int j=i+1;j+1<m;j=j+2){
            int b=store[j];
            int c = i%2 ? oddSum[j+1] : evenSum[j+1];
            count = count+ a*b*c;
        }
    }
    return count;
}
int main()
{
    string s;
    cin>>s;
 numberOfWays(s);
return 0;
}