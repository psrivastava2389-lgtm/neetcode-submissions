class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq (26,0);
        int longest=0;int maxfreq=0;

        int st=0; int e=st;
        while(st<=e && e<s.size()){
            freq[s[e]-'A']++;
            maxfreq=max(maxfreq,freq[s[e]-'A']);

            while(e-st+1 - maxfreq>k){
                freq[s[st]-'A']--;
                
                st++;
            }
            longest=max(longest,e-st+1);
            e++;
        }
        return longest;



        }
        
    
};
