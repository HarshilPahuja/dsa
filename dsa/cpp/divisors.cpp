#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v;
    int num;
    cout<<"enter the number";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            v.push_back(i);
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


    return 0;
}