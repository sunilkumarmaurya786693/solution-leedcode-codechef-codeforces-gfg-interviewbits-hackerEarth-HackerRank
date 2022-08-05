#include <bits/stdc++.h>
using namespace std;
typedef long long int intl;
class st{
    public:
    int id;
    double percentage;
    vector<int>col;
    st(int id1, double percentage1, vector<int>col1){
        id=id1;
        percentage=percentage1;
        col=col1;
    }
    
};

int dashSplit(string s){
    string s2(find(s.begin(), s.end(), '-')+1,s.end());
    int k= stoi(s2);
    return k;
}
vector<int> commaSplit(string s){
    // cout<<s<<"--->";
    s=s+",";
    int i=0;
    int n=s.size();
    vector<string>sub;
    while(i<n){
        string temp="";
        while(i<n && s[i]!=','){
            temp.push_back(s[i]);
            i=i+1;
        }
        i=i+1;
        sub.push_back(temp);
    }
    vector<int>ans;
    for(int i=0;i<sub.size();i++){
        int x= dashSplit(sub[i]);
        ans.push_back(x);
    }
    return ans;
}
st split(string s){
    s=s+",";
    int i=0;
    int n=s.size();
    vector<string>sub;
    while(i<n){
        string temp="";
        while(i<n && s[i]!=','){
            temp.push_back(s[i]);
            i=i+1;
        }
        i=i+1;
        sub.push_back(temp);
    }
    // for(int i=0;i<sub.size();i++){
    //     cout<<sub[i]<<"\n";
    // }
    int perLen = sub[1].length();
    char perChar[perLen+1];
    strcpy(perChar, sub[1].c_str());

    int id=dashSplit(sub[0]);
    // cout<<perChar<<" ---//";
    double percentage = stod(perChar);
    // cout<<perChar<<"/";
    vector<int>col;
    for(int i=2;i<sub.size();i++){
        int x=dashSplit(sub[i]);
        // cout<<x;
        col.push_back(x);
    }
    return st(id,percentage,col);
    // temp->id=id;
    // temp->percentage=percentage;
    // temp->col=col;
    // return temp;
}
struct compare
{
  bool operator()(const st lhs, const st rhs)
  {
      if(lhs.percentage == rhs.percentage){
          return lhs.id>rhs.id;
      }
      return lhs.percentage<rhs.percentage;
  }
};
int main()
{
// freopen("i.txt", "r", stdin);
    int c,n;
    cin>>c>>n;
    vector<int>seat(c+1);
    vector<vector<double> >alloted(c+1);
    seat[0]=0;
    for(int i=0;i<c;i++){
        cin>>seat[i+1];
    }
    cin.clear(); 
    cin.ignore(INT_MAX,'\n');
    vector<st>s;
    for(int i=0;i<n;i++){
        string p;
        getline(cin,p);
        st s1 = split(p);
        for(int j=0;j<s1.col.size();j++){
            // cout<<s1->col[j]<<" ?";
        }
        s.push_back(s1);
    }
    string cutCollege;
    getline(cin,cutCollege);

    vector<int>cutCol = commaSplit(cutCollege);

    priority_queue<st, vector<st>, compare>pq;
    for(int i=0;i<s.size();i++){
        pq.push(s[i]);
    }
    vector<st>s2;
    while(pq.size()){
        st s=pq.top();
        pq.pop();
        bool isAlloted=false;
        for(int j=0;j<s.col.size();j++){
            int colId = s.col[j];
            if(seat[colId]>0){
                seat[colId]--;
                alloted[colId].push_back(s.percentage);
                isAlloted=true;
                break;
            }
        }
        if(isAlloted==false){
            s2.push_back(s);
        }
        // cout<<s.id<<"-->"<<s.percentage<<"-->\n";
    }
    priority_queue<pair<int,int>, vector<pair<int,int> > >pq2;
    for(int i=0;i<=c;i++){
        if(seat[i]>0){
            pq2.push(make_pair(seat[i],i));
        }
    }

    for(int i=0;i<s2.size();i++){
        st notS=s2[i];
        pair<int,int>t=pq2.top();
        pq2.pop();
        int colId= t.second;
        int numSeat=t.first;
        if(numSeat){
            seat[colId]--;
            alloted[colId].push_back(notS.percentage);
            numSeat--;
            if(numSeat>0){
                pq2.push(make_pair(numSeat,colId));
            }
        }
    }

    for(int i=0;i<cutCol.size();i++){
        int colId = cutCol[i];
        int sizze11=alloted[colId].size();
        if(sizze11>0){
            // for(int j=0;j<s.size();i)
            double p=alloted[colId][sizze11-1];
            cout<<"C-"<<colId<<" "<<p<<"\n";
        }else{
            cout<<"C-"<<colId<<" "<<"n\a";
        }
    }

    // for(int i=0;i<alloted.size();i++){
    //     cout<<i<<"---->";
    //     for(int j=0;j<alloted[i].size();j++){
    //         cout<<alloted[i][j]<<"-->";
    //     }
    //     cout<<"\n";
    // }

return 0;
}