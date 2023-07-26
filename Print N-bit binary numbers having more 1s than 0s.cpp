//Given a positive integer N, the task is to find all the N bit binary numbers having more than or equal 1’s than 0’s for any prefix of the number.

void count(vector<string> &ans,int ones,int zeros,string temp,int n,int i)
    {
        if(i==n)
        {
            ans.push_back(temp);
            return;
        }
        count(ans,ones+1,zeros,temp+'1',n,i+1);
        if(ones>=zeros+1)
            count(ans,ones,zeros+1,temp+'0',n,i+1);
        return;
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> ans;
	    string temp="";
	    count(ans,0,0,temp,N,0);
	    return ans;
	}