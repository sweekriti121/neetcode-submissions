class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        for(char c:t)
        {
            if(!m.count(c))
                return false;
            m[c]--;
            if(m[c]==0)
                m.erase(c);
        }
        if(m.empty())
            return true;
        return false;
    }
};
