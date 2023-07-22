// Geek created a random series and given a name geek-onacci series. Given four integers A, B, C, N. A, B, C represents the first three numbers of geek-onacci series. Find the Nth number of the series. The nth number of geek-onacci series is a sum of the last three numbers (summation of N-1th, N-2th, and N-3th geek-onacci numbers)


#include <iostream>
using namespace std;

int geek(int a,int b,int c, int n){
    if(n==1) return a;
    if(n==2) return b;
    if(n==3) return c;
    int ans=geek(a,b,c,n-1)+geek(a,b,c,n-2)+geek(a,b,c,n-3);
    return ans;
    
}

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c,n;
	    cin>>a>>b>>c>>n;
	    cout<<geek(a,b,c,n)<<endl;
	}
	return 0;
}