#include <bits/stdc++.h>
using namespace std;

string clearws(string str){
    
    for(int i=0; i<str.length(); i++){
        int ind=str.find(' ');
        if(ind!=string::npos ){  //npos- no position(no space exists)
        str.erase(ind,1);
        }
    }
    return str;
}
int main(){

    string a="  harshil";

    cout<<clearws(a);
    return 0;
}

