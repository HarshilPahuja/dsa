#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int count=0;
    int revnum=0;
    int temp=num;
    while(temp>0){
        count++;
        int extractdigit=temp%10;
        revnum=(revnum*10)+extractdigit;
        temp=temp/10;
    }
    cout<<revnum;

    return 0;
}