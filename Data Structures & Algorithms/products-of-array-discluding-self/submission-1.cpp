class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
       
        
        vector<int> result(nums.size(),1);int prod=1;
       
        for(int i=1;i<result.size();i++){
            result[i]=result[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            prod*=nums[i+1];
            result[i]*=prod;
        }
        return result;
        

    }
};
