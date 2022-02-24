#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a, n;
    cin>>n;
    vector<int> storage;

    for(int i=1; i<=n; i++){
        cin>>a;
        storage.push_back(a);
    }

    for(int i=n; i>0; i--) cout<<storage[i-1]<<" ";
    return 0;
}
