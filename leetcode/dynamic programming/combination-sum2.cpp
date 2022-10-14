// 40. Combination Sum II
// Medium

// 7077

// 175

// Add to List

// Share
// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

 

// Example 1:

// Input: candidates = [10,1,2,7,6,1,5], target = 8
// Output: 
// [
// [1,1,6],
// [1,2,5],
// [1,7],
// [2,6]
// ]
// Example 2:

// Input: candidates = [2,5,2,1,2], target = 5
// Output: 
// [
// [1,2,2],
// [5]
// ]
 

// Constraints:

// 1 <= candidates.length <= 100
// 1 <= candidates[i] <= 50
// 1 <= target <= 30

class Solution {
public:
    vector<vector<int>>ans;
    // map<vector<int>,bool>m;
    void solve(vector<int>&arr, int k, int i, vector<int>&subset){
        // for(int j=0;j<subset.size();j++)cout<<subset[j]<<" ";
        //     cout<<k<<"\n";
        if(k==0){
            // if(!m[subset]){
                ans.push_back(subset);
                // m[subset]=true;
            // }
            
            return;
        }
        if(k<0 || i>=arr.size())return;
        
        for(int j=i;j<arr.size();j++){
            if(i!=j && arr[j]==arr[j-1])continue;
            subset.push_back(arr[j]);
            solve(arr,k-arr[j],j+1,subset);
            subset.pop_back();
        }

        
        // solve(arr,k,i+1,subset);
        
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ans.clear();
        // m.clear();
        vector<int>subset;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,subset);
        return ans;
    }
};