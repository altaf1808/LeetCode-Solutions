#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int mxen=nums[0];
        for(int i=1;i< nums.size();i++)
        {
            mxen=max(mxen+nums[i],nums[i]);
            res=max(res,mxen);
        }
        return res;
    }
};