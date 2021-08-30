#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    string ips[n];
    
    for(int i=0;i<n;i++){
        cin>>ips[i];
        // cout<<ips[i]<<"\n";
    }

    int r;
    cin>>r;

    map<string, list<string>>mc;
    for(int i=0;i<r;i++){
        string domain;
        cin>>domain;
        // cout<<domain<<"\n";
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            string ip;
            cin>>ip;
            // cout<<ip<<"\n";
            mc[domain].push_back(ip);
        }
    }
    int q;
    cin>>q;
    map<string,vector<string>>ans;
    while(q--){
        string s;
        cin>>s;
        
        string domain="";
        string ms="";
        string ip="";
        int slash=0;
        int question=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='/'){
                slash++;
                continue;
            }
            if(s[i]=='?'){
                question++;
                continue;
            }
            
            if(slash==0){
                    domain.push_back(s[i]);
            }
            else if(slash!=0 && question==0){
                ms.push_back(s[i]);
            }
            else if(question==1 && s[i]!='=' && s[i]!='i' && s[i]!='p'){
                ip.push_back(s[i]);
            }
        }
        // cout<<s<<" "<<domain<<" "<<ms<<" "<<ip<<"\n";
        if(ms=="machine_down"){
            for(list<string>::iterator it= mc[domain].begin(); it!=mc[domain].end();it++){
                if(*it==ip){
                    mc[domain].erase(it);
                    break;
                }
            }
            // for(int i=0;i<mc[domain].size();i++){
            //     string x = mc[domain][i];
            //     if(x==ip){
            //         // mc[domain].erase(i);
            //         break;
            //     }
            // }
        }
        else if(ms=="machine_up"){
            mc[domain].push_front(ip);
        }else{
            // cout<<domain<<"-->\n";
            string ans_ip = mc[domain].front();
            // cout<<ans_ip<<"sddsf\n";
            mc[domain].pop_front();
            mc[domain].push_back(ans_ip);
            ans[ans_ip].push_back(s);
        }
    }
    for(int i=0;i<n;i++){
        string ip = ips[i];
        cout<<ip<<"\n";
        for(int j=0;j<ans[ip].size();j++){
            cout<<ans[ip][j]<<"\n";
        }
    }
       return 0;
}