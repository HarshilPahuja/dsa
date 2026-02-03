#include <iostream>
using namespace std;

bool palindrome(string s, int front, int end){
    if(front>=end){
        return true;
    }
    else{
        if(s[front]!=s[end]){
            return false;
        }
        else{
            return palindrome(s, front+1, end-1);
        }
    }
}
int main(){
    string s="madam";
    cout<<palindrome(s, 0, s.length()-1 );
    return 0;
}