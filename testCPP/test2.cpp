//41 reverse string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<"\n";
    return 0;
}
