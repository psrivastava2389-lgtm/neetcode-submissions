class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;

        stack<int> next_greater;

        for(int i=temperatures.size()-1; i>=0;i--){


            while(!next_greater.empty() && temperatures[next_greater.top()]<=temperatures[i]){
                next_greater.pop();

            }
            if(next_greater.empty()){
                
               
                result.push_back(0);
            }
            
           else{ result.push_back(next_greater.top()-i);
            }
            next_greater.push(i);

        }
        reverse(result.begin(),result.end());

        return result;
        
        
    }
};
