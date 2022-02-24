


// https://www.youtube.com/watch?v=hKxXAngPs28

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	vector<int> lastmax;

    if(a>b && a>c){
        lastmax.push_back(a);
        lastmax.push_back(b);
        lastmax.push_back(c);
    }
    else if(b>c){
        lastmax.push_back(b);
        lastmax.push_back(c);
        lastmax.push_back(a);
    }
    else {
        lastmax.push_back(c);
        lastmax.push_back(a);
        lastmax.push_back(b);
    }


    //cout<<lastmax[0]<<" ";
    //cout<<lastmax[1]<<" ";
    //cout<<lastmax[2];


    if(lastmax[0]>lastmax[1] && lastmax[1]>lastmax[2]) cout<<lastmax[1];
    else if(lastmax[0]>lastmax[2] && lastmax[2]>lastmax[1]) cout<<lastmax[2];
    else cout<<lastmax[0];

	return 0;
}
