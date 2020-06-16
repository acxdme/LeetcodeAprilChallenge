/*
What are anagrams:An anagram is a word formed by rearranging the letters of a different word.ex: eat,ate tea.
Time complexity:O(n^2 logn)
Space complexity:O(n)
*/



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(string s : strs)
        {
            string ne=s;
            sort(ne.begin(),ne.end());
            m[ne].push_back(s);
        }
        
        vector<vector<string>> v;
        for(auto it : m)
        {
            v.push_back(it.second);
        }
        
        return v;
    }
};
