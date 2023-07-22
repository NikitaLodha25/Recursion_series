// Print numbers from 1 to N without the help of loops.

class solution{
    public:

    void printNos(int N){
        if (N==1)
        {
            cout<<1<<" ";
            return;
        }
        printNos(N-1);
        cout<<N<<" ";
    }
}