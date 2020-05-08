/*
Time complexity   :   O(n)
Space complexity  :   O(n)

*/


class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int s=S.size();
        int t=T.size();
        string m;
        string n;
        for(int i=0; i<s; i++)
        {
            if(S[i]=='#' and m.size()>0)
                m.pop_back();
            if(S[i]!='#')
                m.push_back(S[i]);
            
        }
        
        for(int i=0; i<t; i++)
        {
            if(T[i]=='#' and n.size()>0)
                n.pop_back();
            if(T[i]!='#')
                n.push_back(T[i]);
            
        }
        
        
        if(m==n)
            return true;
        else 
            return false;
        
        
    }
};
