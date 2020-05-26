class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        int mid= start+(end-start)/2;
        //int f=nums[0];
        while(end >=start)              //4 5 6 7 0 1 2
                                        //s     m     e
        {
            if(nums[mid]==target)
                return mid;
            if( nums[mid]>=nums[start])
            {
                if(target >=nums[start] and target <nums[mid])
                    end=mid-1;
                else
                    start=mid+1;
            }
            else
            {
                if(target>nums[mid] and target<=nums[end])
                    start=mid+1;
                else
                    end=mid-1;
                 
            }
            mid= start+(end-start)/2;   
                                    
                                        
        }
      return -1;  
    }
};
