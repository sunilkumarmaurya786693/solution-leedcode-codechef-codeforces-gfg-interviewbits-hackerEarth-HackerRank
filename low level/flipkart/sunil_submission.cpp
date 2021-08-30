#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;
// pm-> (maximum seat+ maximum person vote)
// party -> vote   (max hash map)
// person -> vote
// constituency, party -> vote 
//constituency, party
class Party {
    public:
    string name;
    string party_name;
    string constituency;
    intl vote;

    Party(){
    }
    Party(string name, string party_name, string constituency, intl vote){
        this->name=name;
        this->party_name=party_name;
        this->constituency= constituency;
        this->vote = vote;
    }
    void print(){
        cout<<name<<" "<<party_name<<" "<<constituency<<" "<<vote<<"\n";
    }
};

map<string,intl>party_vote;//1
map<string, string>person_party;//1
map<string,pair<intl,string> >person_vote;  //person_name, vote, constituency;
// map< pair<string, string>, int > constituency_party_vote; 
// map<string, pair<string, string > >constituency_party_person;
map<string, intl>constituency_vote;
map<string, vector<pair<int, string> > >constituency_party; //1
map<string, pair<string,string> >constituency_win; 
string pm="";

bool compareVote(pair<int,string>p1, pair<int,string>p2){
    return p1.first > p2.first;
}
void display_top_candidate(int k){
    vector<pair<int,string > >allVote;
    for(auto i=person_vote.begin();i!=person_vote.end();i++){
        allVote.push_back({i->second.first, i->first});
    }
    sort(allVote.begin(), allVote.end(), compareVote );
    int i=0;
    cout<<"Display top candidate\n";
    while(k>0 && i<allVote.size()){
        cout<<allVote[i].second<<"\n";
        i++;
        k--;
    }
}

void display_top_party(int k){
    vector<pair<int,string > >allVote;
    for(auto i=party_vote.begin();i!=party_vote.end();i++){
        allVote.push_back({i->second, i->first});
    }
    sort(allVote.begin(), allVote.end(), compareVote );
    int i=0;
    cout<<"Display top Party\n";
    while(k>0 && i<allVote.size()){
        cout<<allVote[i].second<<"\n";
        i++;
        k--;
    }
}

intl getConstituencytotalVote(string c){
    return constituency_vote[c];
}

int party_sheetWin(string party){
    int win_count=0;
    return win_count;
}

string getPM(){
    return "sunil";
}

bool compare(pair<int,string>&a, pair<int,string>&b){
    return a.second<b.second;
}
void calculateConsituencyWinner(){
    for(auto i = constituency_party.begin(); i!=constituency_party.end(); i++){
        vector<pair<int, string> >constituency_data= i->second;
        sort(constituency_data.begin(), constituency_data.end(), compare);
        if(constituency_data.size()==1){
            constituency_win[i->first] = {constituency_data[0].second; 
        }else if(constituency_data.size()>1 && constituency_data[0].first>constituency_data[1].first){
            constituency_win[i->first] = constituency_data[0].second; 
        }
    }
}

void getPartyWiseVoteShare(string constituency){
    vector<pair<int, string> >constituency_data = constituency_party[constituency];
    int total_vote=0;
    for(int i=0;i<constituency_data.size();i++){
        total_vote=total_vote+constituency_data[i].first;
    }
    // cout<<total_vote<<"\n";
    for(int i=0;i<constituency_data.size();i++){
        try{
            if(total_vote==0){
                throw total_vote;
            }
            cout<<"partyName ="<<constituency_data[i].second<<" vote percentage"<<(100*constituency_data[i].first/total_vote*1.0)<<"\n";
        }
        catch(int total_vote){
            cout<<"Can not divide by zero";
        }
    }
}

void getPartyWiseVote(){
    intl total_vote=0;
    for(auto i=party_vote.begin(); i!=party_vote.end();i++){
        total_vote=total_vote+i->second;
    }

    for(auto i=party_vote.begin(); i!=party_vote.end();i++){
             try{
            if(total_vote==0){
                throw total_vote;
            }
            cout<<"partyName ="<<i->first<<" vote percentage"<<((i->second)/(1.0* total_vote))*100<<"\n";
        }
        catch(int total_vote){
            cout<<"Can not divide by zero";
        }
    }
}

void getPersonVoteShare(string name){
    pair<intl, string>vote_constituency = person_vote[name];
    intl total_vote = constituency_vote[vote_constituency.second];
    if(total_vote==0){
        cout<<"Can not divide by zero";
    }else{
        cout<<"vote share "<< (vote_constituency.first*100/total_vote*1.0)<<"\n";
    }
}

int main() {
    freopen("input.txt", "r", stdin); 
    
    int n;
    cin>>n;
    
    Party *inputData[n];

    for(int i=0;i<n;i++){
        string name;
        string party_name;
        string constituency;
        intl vote;
        cin>>name;
        cin>>party_name;
        cin>>constituency;
        cin>>vote;
        inputData[i] = new Party(name, party_name, constituency, vote);

        party_vote[party_name]+=vote;
        
        if(person_vote.find(name)==person_vote.end()){
            pair<int,string>x(vote, constituency);
            person_vote[name]=x;
        }else{
            pair<int,string>x=person_vote[name];
            x.first=x.first+vote;
            person_vote[name]=x;
        }
        constituency_vote[constituency]+=vote;
        pair<string,string>constituency_par(constituency,party_name);
        // constituency_party_vote[constituency_par]+=vote;
        pair<int,string>data1(vote,party_name);
        constituency_party[constituency].push_back(data1);
    }

    // calculateConsituencyWinner();
    getPartyWiseVoteShare("c1");
    getPartyWiseVote();
    getPersonVoteShare("Amit");
    display_top_candidate(5);
    display_top_party(3);
    // getPm();

    // int t;
    // cin>>t;
    // while(t--){
    //     int type;
    //     cin>>type;
    // }

    return 0;
}
