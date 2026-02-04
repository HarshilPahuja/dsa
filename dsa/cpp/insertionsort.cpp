#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={4,3,2,1};
    
    for(int i=1; i<v.size(); i++){

        int j=i;
        while(j>0 && v[j-1]>v[j]){  //write condition in while loop so that best case-O(n). when everything is sorted and we run this it doesnt get in the while loop only.
            
            swap(v[j-1],v[j]);
        
            j--;

        }
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }

}