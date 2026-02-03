#include <bits/stdc++.h>
using namespace std;
//reverse array using 2 pointer
void reversearr(vector<int> &v){
    int frontptr=0;
    int endptr=v.size()-1;

    for(int i=0; i<(v.size()/2); i++){
        swap(v[frontptr], v[endptr]);
        frontptr++;
        endptr--;
    }

    cout<<"the reversed arr is"<<"\n";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}
int main(){

    vector<int> v;
    int n;
    cout<<"enter the number of elments u want in the array: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cout<<"enter the element "<<i<<":";
        cin>>x;
        v.push_back(x);
    }
    reversearr(v);

}