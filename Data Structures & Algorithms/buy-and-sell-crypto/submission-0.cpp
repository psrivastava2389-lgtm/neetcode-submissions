class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int st=0;int e=1;int maxprofit=0;
        while(e<prices.size()){
            

            if(prices[e]<prices[st]){
                st=e;
                e=st+1;

            }
            else{
                maxprofit=max(maxprofit, prices[e]-prices[st]);
                e++;
            }
        }

        return maxprofit;
        
    }
};
