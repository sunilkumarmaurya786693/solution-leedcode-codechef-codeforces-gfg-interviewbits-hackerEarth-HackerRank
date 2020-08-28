#include <bits/stdc++.h>
#define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;

int main()
{
    SPEED;
    #ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);   
    #endif
    int t;
    cin>>t;
    while(t--)
    {
      string s,p;
      cin>>s>>p;
      int arr1[26]={0};
      int arr2[26]={0};
      for(int i=0;i<s.size();i++)
      {
          arr1[s[i]-'a']++;
          arr2[s[i]-'a']++;
      }
      for(int i=0;i<p.size();i++)
      {
          arr1[p[i]-'a']--;
          arr2[p[i]-'a']--;
      }
      int index=p[0]-'a';
      string ans1="",ans2="";
      for(int i=0;i<=index;i++)
      {
           while(arr1[i])
           {
               ans1.push_back((char)('a'+i));
               arr1[i]--;
               
           }
      }
      ans1=ans1+p;
      for(int i=index+1;i<26;i++)
      {
          while(arr1[i])
           {
               ans1.push_back((char)('a'+i));
               arr1[i]--;
           }
      }

      for(int i=0;i<index;i++)
      {
           while(arr2[i])
           {
               ans2.push_back((char)('a'+i));
               arr2[i]--;
               
           }
      }
      ans2=ans2+p;
      for(int i=index;i<26;i++)
      {
          while(arr2[i])
           {
               ans2.push_back((char)('a'+i));
               arr2[i]--;
           }
      }
      cout<<min(ans1,ans2)<<"\n";
    }
    return 0;
}
