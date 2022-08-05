#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;

// vector<string> solution(int N, int K) {
//     if (N == 0) {
//         vector<string>temp;
//         temp.push_back("");
//         return temp;
//         // return {""};
//     }
//     vector<string> result;
//     for (string& p : solution(N - 1, K)) {
//         for (char l : string("abc")) {
//             if (p.empty() || (p.back() != l)) {
//                 p.push_back(l);
//                 result.push_back(p);
//                 p.pop_back();
//             }
//         }
//     }
//     int pref_size = min((int) result.size(), K);
//     return vector<string>(result.begin(), result.begin() + pref_size);
// }
// vector<string> solution2(int N, int K) {
//     if (N == 0) {
//         return {""};
//     }
//     vector<string> result;
//     cout<<N<<" "<<K<<"\n";
//     // vector<string> x = solution2
//     for (string& p : solution2(N - 1, K-1)) {
//         cout<<p<<" ->";
//         for (char l : string("abc")) {
//             if (p.empty() || (p.back() != l)) {
//                 p.push_back(l);
//                 result.push_back(p);
//                 p.pop_back();
//             }
//         }
//     }
//     int pref_size = min((int) result.size(), K);
//     for(int i=0;i<result.size();i++){
//         cout<<result[i]<<" ";
//     }
//     cout<<pref_size<<"\n";
//     return vector<string>(result.begin(), result.begin()+pref_size);
// }
int main()
{
    // int n,k;
    // cin>>n>>k;
// int n=2;
// int k=7;
int n;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
}
int k;
cin>>k;
sort(arr.begin(),arr.end());
int x = arr[n-1];
x=x-k;
if(x<0)x=0;
arr[n-1]=x;
int s=1;
for(int i=0;i<n;i++){
    s=s+arr[i];
}
cout<<s;
// vector<string>ans = solution(5,2);
// for(int i=0;i<ans.size();i++)cout<<ans[i]<<"\n";

return 0;
}