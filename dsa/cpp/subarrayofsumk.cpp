
//this below code works for both +ve and -ve but for non negative there is a more optimal approach off 2 pointer sliding window thing
// class Solution{
// public:
//     int longestSubarray(vector<int> &nums, int k){
//         map<int,int> m;
//         int sum=0;
//         int len=-1;
//         for(int i=0; i<nums.size(); i++){

//             sum+=nums[i];
//             if(sum==k){
//                 if(len<(i+1)){
//                     len=i+1;
//                 }
//             }
//             else if(m.find(sum-k)!=m.end()){
//                 if((i-m[sum-k])>len){
//                     len=i-m[sum-k];
//                 }
//             }
//             else{
//                 m[sum]=i;
//             }
//         }
//    if(len==-1){
//     return 0;
//    }
//    else{
//     return len;
//    }
//     }
// };
