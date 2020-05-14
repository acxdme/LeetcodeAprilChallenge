/*
time complexity : O(n)
Space complexity: O(n)
My approach : unordered_map
*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        m[0]=-1;
        int l=0,mx=0;
        for(int i=0;i<nums.size();i++)
        {
            l += (nums[i]==1 )? 1 : -1;
            if(m.find(l)!=m.end())
                mx=max(mx,i-m[l]);
            else
                m[l]=i;
        }
        
        return mx;
    }
};
