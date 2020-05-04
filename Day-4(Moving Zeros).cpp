/* Difficulty easy for O(n) space but medium for O(1) space 
O(n) space and O(n) time 
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int t=nums.size();
        vector<int> s;
        int count=0;
        for(int i=0;i<t;i++)
        {
            if(nums[i]!=0)
                s.push_back(nums[i]);
            else
                count++;
            
        }
        for(int i=0;i<t;i++)
        {
             if(i<s.size())
               nums[i]=s[i];
            else
               nums[i]=0;
        }
        
    }
};



//O(1) space approach

  class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
        for(int i=0;i<n;i++)
        {
             if(r>=n)
                break;
            if(nums[i]==0)
            {
                r++;
            }
            else
            {
                swap(nums[l],nums[r]);
                l++;
                r++;
            }
            
        }
        
    }
};
