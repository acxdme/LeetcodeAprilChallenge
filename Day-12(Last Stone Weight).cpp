class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int n=stones.size();
        int flag=0;
        sort(stones.begin(),stones.end());
        int a,b;
        while(1)
        {
        if(n==1)
         {
             flag=stones[0];
             break;
         }

         if(n==0)
         {
              flag=0;
             break;
         }
        a=stones[n-1];
        b=stones[n-2];

        if(a>b)
        {
            stones.pop_back();
             stones.pop_back();
            stones.push_back(a-b);
            sort(stones.begin(),stones.end());
        }
        if(a==b)
        {
            stones.pop_back();
            stones.pop_back();
        }

        n=stones.size();
    
        }
        
     return  flag;
    }
};
