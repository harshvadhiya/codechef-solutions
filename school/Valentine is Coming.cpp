#include<iostream>
#include<vector>
using namespace std;
int main(){
    int  t, x, y;
    vector<int> answer;
    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>x>>y;
        answer.push_back(x/y);
    }
    for(int i=0; i<answer.size(); i++) cout<<answer[i]<<endl;

    return 0;
}
