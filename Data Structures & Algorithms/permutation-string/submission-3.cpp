class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int> c(26,0);
        vector<int> win(26,0);
        for(int i=0; i<s1.size();i++){
            c[s1[i]-'a']++;
            win[s2[i]-'a']++;

        }
        if(c==win)return true;

        for(int i=s1.size();i<s2.size();i++){
            win[s2[i-s1.size()]-'a']--;
            win[s2[i]-'a']++;

            if(c==win)return true;




        }
        return false;


        
    }
};
