// Given a list arr of N integers, print sums of all subsets in it.


void subsets(vector<int>&nums,vector<int>& ans,int i,int temp)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        subsets(nums,ans,i+1,temp);
        temp+=nums[i];
        subsets(nums,ans,i+1,temp);
        return;
    }
    vector<int> subsetSums(vector<int> nums, int N)
    {
        // Write Your Code here
        vector<int> ans;
        int temp=0;
        subsets(nums,ans,0,temp);
        return ans;
    }