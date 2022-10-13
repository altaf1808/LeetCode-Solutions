/******************************************************************************
Given a string s, find the length of the longest substring without repeating characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 
Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
******************************************************************************/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>m(256,-1);
        int right=0,left=0;
        int n=s.size();
        int len=0;
        while(right<n)
        {
            if(m[s[right]!=-1])
                left=max(m[s[right]]+1,left);
            m[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};