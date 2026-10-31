class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";
        for(string i:strs){
            encoded_string+=to_string(i.size());
            encoded_string+='#';
            encoded_string+=i;
            
            
        }
        
        return encoded_string;

        

    }
    vector<string> decode(string s) {
        vector<string> result;
        string curr;int i=0;string strcount=""; int count=0;
        while(i<s.size()){
            if(isdigit(s[i])){
                while(s[i]!='#'){
                strcount+=s[i];
                i++;}
                while(!strcount.empty()){
                    count*=10;
                    count+=strcount[0]-'0';
                    
                    strcount.erase(strcount.begin());
                }


            }
            i++;
            int c=1;
            while(c<=count){
                curr+=s[i];
                i++;
                c++;
            }
            result.push_back(curr);
            curr="";
            count=0;
        }
return result;
        }
};
