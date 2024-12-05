// question link


// #include <bits/stdc++.h>
// #define SPEED  ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define inf_neg -100000000000000ll
using namespace std;
typedef long long int ll;
ll m=1000000007;

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int minSwapCost(vector<int>& arrA, vector<int>& arrB) {
    int n = arrA.size();
    
    map<int, int> freqA, freqB;
    map<int, int> totalFreq;
    
    for (int i = 0; i < n; ++i) {
        freqA[arrA[i]]++;
        freqB[arrB[i]]++;
        totalFreq[arrA[i]]++;
        totalFreq[arrB[i]]++;
    }

    for (auto& p : totalFreq) {
        if (p.second % 2 != 0) {
            return -1; 
        }
    }

    vector<int> toSwapA, toSwapB;
    for (auto& p : freqA) {
        int height = p.first;
        int excessInA = freqA[height] - (totalFreq[height] / 2);
        if (excessInA > 0) {
            toSwapA.insert(toSwapA.end(), excessInA, height); 
        }
    }

    for (auto& p : freqB) {
        int height = p.first;
        int excessInB = freqB[height] - (totalFreq[height] / 2);
        if (excessInB > 0) {
            toSwapB.insert(toSwapB.end(), excessInB, height); // Add the extra from B to swap
        }
    }

    sort(toSwapA.begin(), toSwapA.end());
    sort(toSwapB.begin(), toSwapB.end(), greater<int>());

    int swapCount = toSwapA.size();
    int minCost = 0;

    for (int i = 0; i < swapCount; ++i) {
        minCost += min(toSwapA[i], toSwapB[i]);
    }

    return minCost;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int evenCount=0;
        int oddCount=0;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            int isodd=1;
            for(int j=0;j<s.size();j++){
                int x = (int)s[j];
                // cout<<x<<" ";
                if(x%2==0){
                    isodd=0;
                    break;
                }
            }
            if(isodd){
                oddCount++;
            }
        }
        // cout<<oddCount<<"\n";
        if(oddCount%2==0){
            cout<<"EVEN"<<"\n";
        }else{
            cout<<"ODD"<<"\n";
        }
    }
   
}
