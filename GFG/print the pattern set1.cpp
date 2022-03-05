// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
int b=n;
while(n>0){
    int j=0;
    int a=b;
    while(a>0){
        cout<<a<<" ";
        j++;
        if(j%n==0){
            a--;
        }
    }
    cout<<endl;
    n--;
}

}
