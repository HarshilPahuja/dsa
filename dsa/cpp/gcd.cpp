#include <iostream>
using namespace std;

int gcd(int x, int y){
    int min;
    int ans;
    if(x<y){
        min=x;
    }
    else{
        min=y;
    }
    int flag=0;
    for(int i=2; i<=min; i++){
        if((x%i==0)&&(y%i==0)){
           ans=i;
           flag=1;
        }
    }
    if(flag==1){
        return ans;
    }
    else{
        return 1;
    }
}
int main(){

    
    int gcd_ans=gcd(12,9);
    cout<<gcd_ans;

    return 0;
}