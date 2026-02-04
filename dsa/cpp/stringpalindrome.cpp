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


// leetcode palindrome
// class Solution {
// public:

//     bool isPalindrome(string s) {

//         //cleaning the string
//         for(int i=0; i<s.length();){
//             if(!isalnum(s[i])){
//                 s.erase(i,1);
//             }
//             else{
//                 s[i]=tolower(s[i]);
//                 i++;
//             }
//         }
        
//         int frontptr=0;
//         int endptr=s.length()-1;
//         for(int i=0; i<(s.length()/2); i++){
//             if(s[frontptr]!=s[endptr]){
//                 return false;
//             }
//             else{
//                 frontptr++;
//                 endptr--;
//             }
//         }
//         return true;




//     }
// };
