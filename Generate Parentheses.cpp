//Given an integer N representing the number of pairs of parentheses, the task is to generate all combinations of well-formed(balanced) parentheses.

class Solution
{
    public:
    
    void helper(int n,int op,int cl,vector<string>& ans,string temp)
    {
        if(op==n)
        {
            while(cl<n)
                {temp=temp+')';cl++;}
            ans.push_back(temp);
            return;
        }
        if(op<n)
        {
            helper(n,op+1,cl,ans,temp+'(');
        }
        if(cl<op)
        {
            helper(n,op,cl+1,ans,temp+')');
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        int o=0,c=0;
        helper(n,o,c,ans,"");
        return ans;
    }
    
};