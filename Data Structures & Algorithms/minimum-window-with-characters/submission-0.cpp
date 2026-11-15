class Solution {
public:

    string minWindow(string s, string t) {
        if(s.size()<t.size() )return "";

        int freq[128]={0};
        
for(char i:t){
    freq[i]++;
}
    int st=0; int e=0;int need=t.size(); int curr=0;int currlen=0; int minlen=INT_MAX;int minstart=0;
    while(st<=e && e<s.size()){
        currlen++;
        freq[s[e]]--;
        if(freq[s[e]]>=0){
            curr++;
        }
    
            

            while(curr==need  ){
                if(currlen<=minlen){
                
                minlen=currlen;
                minstart=st;

            }
                freq[s[st]]++;
                currlen--;
                if(freq[s[st]]>0){
                    curr--;
                }
                
                st++;
            }
            
        
        
            e++;
    

    }
    return minlen==INT_MAX?"":s.substr(minstart,minlen);
        



        

        
        
    }
};
