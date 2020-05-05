/*
Difficulty :  Easy
Time complexity: O(n)
Space complexity: O(1)
Video Resource: https://www.youtube.com/watch?v=K8iHi8AW1ls
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sum=0;
        int n= prices.size();
        for(int i=0;i<n-1;i++)
        {
            if(prices[i+1]-prices[i]>0)  //We are increasing the value of sum if price of the next day is greater than the current day.
            {
                sum+=prices[i+1]-prices[i];  
            }
        }
        
      return sum;
    }
};
