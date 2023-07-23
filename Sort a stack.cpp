//Given a stack, the task is to sort it such that the top of the stack has the greatest element.

void sorted(stack<int>&s, int n){
    if(n<=1) return;
    stack<int> dummy;
    
    int tope=s.top();
    s.pop();
    sorted(s,n-1);
    while(!s.empty() && s.top()>tope)
        {dummy.push(s.top());s.pop();}
    s.push(tope);
    while(dummy.size())
        {s.push(dummy.top());dummy.pop();}
    return;
}
void SortedStack :: sort()
{
   //Your code here
   sorted(s,s.size());
}