#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a,n,k;
    cin>>n>>k;
    vector<int> liststore;

    for(int i=1; i<=n; i++){
        cin>>a;
        liststore.push_back(a);
    }
    bool it=false;
    for(int i=0; i<n; i++){
        if(liststore[i] == k){
            it = true;
            break;
        }
    }

    if(it) cout<<1;
    else cout<<-1;

    return 0;
}
