// Given a stack, delete the middle element of the stack without using any additional data structure.
// Middle element:- ceil((size_of_stack+1)/2) (1-based indexing) from bottom of the stack.

// Note: The output shown by the compiler is the stack from top to bottom.

class Solution
{
    public:
    
    void deleteE(stack<int>&s,int i,int n){
        if(i==n) return;
        int tope=s.top();
        s.pop();
        deleteE(s,i+1,n);
        if(i==n/2) return;
        else s.push(tope);
        return;
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        deleteE(s,0,s.size());
    }
};