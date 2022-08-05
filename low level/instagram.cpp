// Create Instagram Home Feed - 
// Users should be able to make a post -> O(1)
// Users should be able to get his latest posts. -> O(N) n is here number of post
// Users should be able to get the latest posts of people he follows. -> O(n*m)  n is here number of post and m is number of user.
// User Should be able to follow other users -> O(logn)

// User 	Following
// U1	U2, U3
// U2	U3
// U3	U4
// U4	NONE


// POST
// 	id
// 	Title
// 	User_id
// 	Created_at

// createPOST(title,user_id)
// getPost(user_ids:[])

	
// User
// 	Id
// 	Name

// Follower
// 	Follower_id
// 	Followie_id

#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;

int id=0;
int timer=0;
int getUniqueNumber(){
    id++;
    return id;
}

int getTime() {
    timer++;
    return timer;
}

class post {
    public:
    int id;
    string title;
    int user_id;
    int created_at;

    post(string title, int user_id){
        this->id = getUniqueNumber();
        this->title = title;
        this->user_id = user_id;
        this->created_at = getTime();
    }

};

vector<post*>allPost;
map<int,vector<int>>follower;

bool compare(post* a, post* b){
    return a->created_at> b->created_at;
}
post* createPost(string title, int user_id){
    post *newPost  = new post(title, user_id);
    allPost.push_back(newPost);
    return newPost;
}

vector<post*> getPost(vector<int>user_ids){
    int n=user_ids.size();
    vector<post*>requiredPost;
    for(int i=0;i<n;i++){
        int user_id = user_ids[i];
        for(int j=0;j<allPost.size();j++){
            if(allPost[j]->user_id==user_id){
                requiredPost.push_back(allPost[j]);
            }
        }
    }
    sort(requiredPost.begin(),requiredPost.end(),compare);
    return requiredPost;
}
void addFollower(int followie_id, int follower_id){
    follower[followie_id].push_back(follower_id);
}

void getMyPost(int user_id){
    vector<post*>myPosts = getPost({user_id});
    for(int i=0;i<myPosts.size();i++){
        cout<<myPosts[i]->id<<" "<<myPosts[i]->title<<" "<<myPosts[i]->user_id<<" "<<myPosts[i]->created_at<<"\n";
    }
}

void getFollowerPost(int user_id){
    vector<post*>followerPosts = getPost(follower[user_id]);
    for(int i=0;i<followerPosts.size();i++){
        cout<<followerPosts[i]->id<<" "<<followerPosts[i]->title<<" "<<followerPosts[i]->user_id<<" "<<followerPosts[i]->created_at<<"\n";
    }
}

int main()
{
    createPost("a1",1);
    createPost("a2",2);
    createPost("a3",3);
    createPost("a4",4);
    createPost("a5",3);
    createPost("a6",1);
    createPost("a7",3);
    createPost("a8",4);

    addFollower(1,2);
    addFollower(1,3);
    addFollower(2,3);
    addFollower(2,4);
    addFollower(3,4);

    cout<<"All post of user_id 1"<<"\n";
    getMyPost(1);
    cout<<"All follower post of user_id 1"<<"\n";
    getFollowerPost(1);

    cout<<"All post of user_id 2"<<"\n";
    getMyPost(2);
    cout<<"All follower post of user_id 2"<<"\n";
    getFollowerPost(2);

    cout<<"All post of user_id 3"<<"\n";
    getMyPost(3);
    cout<<"All follower post of user_id 3"<<"\n";
    getFollowerPost(3);

    cout<<"All post of user_id 4"<<"\n";
    getMyPost(4);
    cout<<"All follower post of user_id 4"<<"\n";
    getFollowerPost(4);

return 0;
}