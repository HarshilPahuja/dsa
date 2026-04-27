//Given an integer n, return all binary strings of length n that do not contain consecutive 1s. Return the result in lexicographically increasing order.
//1)
class Solution {
public:
    bool check1s(string tocheck){
        bool flag=0;
        for(int i=0; i<tocheck.size(); i++){
            if(tocheck[i]=='1' && flag==1){
                return false;
            }
            else if(tocheck[i]=='1' && flag==0){
                flag=1;
                continue;
            }
            else{
                flag=0;
                continue;
            }
        }
        return true;
    }
    vector<string> ans;
    void f(int n, string temp){
        if(temp.size()==n){
            if(check1s(temp)==true){
                ans.push_back(temp);
                return;
            }else{
                return;
            }
        }
        temp.push_back('0');
        f(n, temp);
        temp.pop_back();
        temp.push_back('1');
        f(n,temp);
    }
    vector<string> generateBinaryStrings(int n) {
        string temp="";
        f(n,temp);
        sort(ans.begin(), ans.end());
        return ans;

    }
};
