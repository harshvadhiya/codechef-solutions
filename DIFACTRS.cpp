/*
--Factors--

For example, 3 and 6 are factors of 12
because 12 ÷ 3 = 4 exactly
and 12 ÷ 6 = 2 exactly.
The other factors of 12 are 1, 2, 4, and 12.

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, c=0;
    cin>>n;
    vector<int> factor;
    for(int i=1; i<=n;i++){
            if(n%i ==0){
                c++;
                factor.push_back(i);
            }
    }
    cout<<c<<endl;
    for(int i=0; i<factor.size(); i++) cout<<factor[i]<<" ";
    return 0;
}
