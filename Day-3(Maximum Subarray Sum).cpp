/* 
%Difficulty-level= Medium
% Do check the resource "https://www.youtube.com/watch?v=2MmGzdiKR9Y" to understand the code more clearly
%Time Complexicity O(n),Space Complexicity O(1)
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            ans=max(sum,ans);
            sum=max(0,sum);
        }
        
        return ans;
        
    }
};
