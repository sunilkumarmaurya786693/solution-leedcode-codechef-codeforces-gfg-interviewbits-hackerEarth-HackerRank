//question link
#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;
bool checkPalindrome(int n){
    int temp=n;
    int sum=0;
    while(temp>0){
        sum=sum*10+temp%10;
        temp=temp/10;
    }
    return n==sum;
}
int solve(int n)
{
    int num1=-1;
    int num2=-1;
    int temp=n-1;
    while(temp>0){
        if(checkPalindrome(temp)){
            num1=temp;
            break;
        }
        temp--;
    }
    temp=n+1;
    while(temp<n+1000000){
        if(checkPalindrome(temp)){
            num2=temp;
            break;
        }
        temp++;
    }    
    return num1+num2;
}
int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int innum;
    cin>>innum;
    while(innum>0){
        int ans = solve(innum);
        bool check = checkPalindrome(ans);
        if(check){
            cout<<ans<<"\n";
            break;
        }
        innum--;
    }
    return 0;
}
