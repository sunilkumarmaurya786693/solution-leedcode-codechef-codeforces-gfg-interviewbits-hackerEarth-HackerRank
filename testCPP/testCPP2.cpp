#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;
int main()
{
//use double quote
freopen('i.txt', 'r', stdin);
return 0;
}
using namespace std;
vector<vector<int> > graph;
void runner(int p){
    int k=0;
    for(int i=0;i<p;i++){
        k++;
    }
}
void getInput(string s, int index){
    runner(10);
    int x=1000;
    //__gcd(101, 3);
    int i=0;
    int n=s.size();
    s=s+" ";
    runner(10);
    vector<int>p;
    while(i<n){
        string temp="";
        // int k=0;
        while(i<n && s[i]!=' '){
            temp.push_back(s[i]);
            i=i+1;
        }
        i=i+1;
        int k=0;
        k=stoi(temp);
        p.push_back(k);
    }
    runner(10);
    graph.push_back(p);
     //__gcd(101, 3); 
}

int main()
{
    //__gcd(101, 3);
    // freopen("i.txt", "r", stdin);
    vector<int>x;
    runner(10);
    graph.push_back(x);
int n;
cin>>n;
cin.clear(); 
cin.ignore(INT_MAX,'\n'); 
//__gcd(101, 3);
for(int i=0;i<n;i++){
    string p;
    getline(cin,p);
    getInput(p,i+1);
}
runner(10);
int yy=graph.size();
for(int i=0;i<yy;i++){
    int yy1=graph[i].size();
    for(int j=0;j<yy;j++){
        // cout<<graph[i][j]<<" ";
    }
    // cout<<"\n";
}
runner(10);
//__gcd(101, 3);
int start;
int FinalAns;
cin>>start>>FinalAns;
// cout<<FinalAns<<"--->";
// vector<bool>vis(n+1,false);
bool vis[101]={0};

queue<pair<int,int> >queue1;//x,count
pair<int,int>temp1=make_pair(start,0);
queue1.push(temp1);
int distance=-1;
//__gcd(101, 3);
while(queue1.empty()==false){
    int x=queue1.size();
    // for(int j=0;j<x;j++){
    //     cout<<j<<" -->";
    // }
    while(x>0){
        x=x-1;
        runner(10);
        pair<int,int>front = queue1.front();
        queue1.pop();
        int x=front.first;
        int count=front.second;
        // cout<<x<<" "<<count<<"\n";
        vis[x]=1;
        if(x==FinalAns){
            distance=count;
            break;
        }
        int j=0;
        int yyy=graph[x].size();
        while(j<yyy){
            if(!vis[graph[x][j]]){
                    // pair<int,int>xyz=
                queue1.push(make_pair(graph[x][j],count+1));
            }
            j++;
        }
    }
}
runner(10);
//__gcd(101, 3);
cout<<distance<<"\n";
//__gcd(101, 3);
return 0;
}