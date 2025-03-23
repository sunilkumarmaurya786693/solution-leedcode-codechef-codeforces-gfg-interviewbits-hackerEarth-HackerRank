#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (std::string const &word : msg)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}


// // #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//     sort(intervals.begin(),intervals.end());
//     vector<vector<int>>ans;
//     for(int i=0;i<intervals.size();i++){
//         int start = intervals[i][0];
//         int end = intervals[i][1];
//         while(i<end>=intervals[i][1]){

//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>>arr(n,vector<int>(2));
//     for(int i=0;i<n;i++){
//         int s;
//         int e;
//         cin>>s>>e;
//         vector<int>temp(2);
//         temp.push_back(s);
//         temp.push_back(e);
//         arr.push_back(temp);
//     }
    
//     vector<vector<int>>ans= merge(arr);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
//     }
// }
