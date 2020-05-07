class Solution {
public:
    int countElements(vector<int>& arr) {
    int n=arr.size();
    int total=0;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
      m[nums[i]]++;
    }
    
    for(auto it: m)
    {
      if(m.find(it.first+1)!=m.end())
       {
         total+=it.second;
       }
    }
    
    return total;    
       
};
