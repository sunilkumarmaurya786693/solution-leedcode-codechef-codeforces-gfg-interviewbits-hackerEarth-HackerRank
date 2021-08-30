#include<iostream>
#include<vector>
using namespace std;

int main() {
    // freopen("i.txt", "r", stdin);   
    
    int n=4000;
    vector<char>ans;
    ans.push_back('1');
    for(int i=1;i<=n;i++){
        int rem=0;
        
        for(int j=0;j<ans.size();j++){
            int k=ans[j]-'0';
            rem = rem+ k*i;
            ans[j]=(char)(rem%10 + '0');
            rem=rem/10;
        }
        while(rem){
            ans.push_back((char)(rem%10 + '0'));
            rem=rem/10;
        }
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<"\n";
    int sum=0;
    for(int i=0;i<ans.size();i++){
        sum=sum+ans[i]-'0';
    }
    cout<<sum<<"\n";
    cout<<endl;
    
    return 0;
}

