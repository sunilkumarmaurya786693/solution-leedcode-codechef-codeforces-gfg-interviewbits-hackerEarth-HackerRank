#include "stdc++.h"
using namespace std;

class TreeNode {
    public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};

bool compare(int &a, int &b){
    return a>b; //decreasing order 
    // a<b increasing order  
}

void vectorMethods(){
    vector<int>arr1;
    vector<int>arr2(10);
    vector<int>arr3(10,0);
    vector<vector<int>>arr6;
    vector<vector<int>>arr7(10);
    vector<vector<int>>att8(10,vector<int>(5)); //10*5 matrix

    arr1.push_back(1);
    arr1.push_back(2);
    sort(arr1.begin(), arr1.end());
    sort(arr1.begin(), arr1.end(), compare);

    cout<<arr1.size();
    cout<<arr1[0];

    vector<int>arr4(arr1.begin()+1,arr1.end()-1); //create aray by removing first and last element

    vector<int>arr5 = {1,2,3};

    for(auto it=arr1.begin();it!=arr1.end();i++){
        cout<<*it;
    }

    for(int a: arr1){
        cout<<a;
    }
}

void mapMethod(){
    map<int,int>m;
    m[0]=1;
    if(m.find(1)!=m.end()){
        cout<<m[1]<<"available";
    }

    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
    for(auto it:m){
        cout<<it.first;
        cout<<it.second;
    }
    cout<<m.size();
    m.erase(10);//remove key=10
    m.clear();
    
    unordered_map<int,int>um;
    
    map<int,int,greater<int> >m2;
}


int main(){



}