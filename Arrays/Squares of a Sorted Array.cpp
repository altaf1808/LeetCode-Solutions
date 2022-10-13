#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left= 0;
   int right= nums.size()-1;
   vector<int>vec;
   while(left<=right){
      while(left <= right) {
         int v1 = nums[left]*nums[left];
         int v2 = nums[right]*nums[right];
         if(v1 <= v2) {
            vec.push_back(v2);
            right--;
         }
         else {
            vec.push_back(v1);
            left++;
         }
      }
      reverse(vec.begin(), vec.end());
   }
   return vec;
    }
};