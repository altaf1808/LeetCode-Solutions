#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int res;
        sort(nums.begin(),nums.end());
        for(int i=2;i<n;i++)
        {
            if(nums[i]==nums[i-1])
                res=nums[i];
                break;
        }
        return res;
    }
};