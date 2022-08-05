#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;
long long int m=1000000007;

int main()
{
intl arr[100002]={0};
arr[1]=1;
arr[2]=2;
for(intl i=3;i<100002;i++){
    arr[i]=(arr[i-1]%m+arr[i-2]%m)%m;
}
vector<int>countStore;
string s;
cin>>s;
intl ans=1;
for(int i=0;i<s.size();){
    int count=0;
    char c=s[i];
    if(c=='3' || c=='7'){
        while(i<s.size() && s[i]==c){
            count++;
            i++;
        }
        ans= (ans%m * arr[count]%m ) %m;
        countStore.push_back(count);
    }else{
        i++;
    }
}
cout<<ans<<"\n";
return 0;
}