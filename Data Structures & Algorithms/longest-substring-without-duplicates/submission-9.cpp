class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int st=0; int e=st;int longest=0;

        while( st<=e && e<s.size()){
            if(seen.find(s[e])!=seen.end()){
                longest=max(longest,e-st);
                seen.erase(s[st]);
                st++;


            }
            else{
                seen.insert(s[e]);
                e++;
            }
           

            
            
            
        }
        longest=max(longest,e-st);
        return longest;

        
        
    }
};
