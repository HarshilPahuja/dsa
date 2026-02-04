#include <bits/stdc++.h>
using namespace std;


void selectionsort(vector<int> &v){
for(int i=0; i<v.size(); i++){
    int min=v[i];
    int minind=i;
    for(int j=i; j<v.size(); j++){
        if(v[j]<min){
            min=v[j];
            minind=j;
        }
    }
    swap(v[i], v[minind]);
}
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}

}
int main(){
vector<int> v;
int n;
cout<<"enter number of elements ";
cin>>n;
for(int i=0; i<n; i++){
    int x;
    cout<<"enter element ";
    cin>>x;
    v.push_back(x);
}
cout<<"unsorted array";
for(int i=0; i<n; i++){
   cout<<v[i]<<" ";
}
cout<<'\n';
cout<<"sorted array";
selectionsort(v);
return 0;
}