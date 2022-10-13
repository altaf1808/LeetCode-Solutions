#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        sort(nums.begin(),nums.end());
        int k=nums[n/2];
        int ans=0;
        for(int i=0;i<n;i++)
            ans+=abs(nums[i]-k);
        if(n%2==0)
        {
            int ans1=0;
            k=nums[(n/2)-1];
            for(int i=0;i<n;i++)
                ans1+=abs(nums[i]-k);
            ans=min(ans,ans1);
        }
        return ans;
    }
};