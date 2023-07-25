// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

class Solution {
public:
    void subsets(vector<int>& nums,vector<vector<int>>& ans,int i,vector<int> temp ){
        if(i==nums.size()) 
        {
            ans.push_back(temp);
            return;
        }
        subsets(nums,ans,i+1,temp);
        temp.push_back(nums[i]);
        subsets(nums,ans,i+1,temp);
        return;
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsets(nums,ans,0,temp);
        return ans;
    }
};