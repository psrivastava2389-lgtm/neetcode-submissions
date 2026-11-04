class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());
        int st; int e;
        for(int i=0;i<nums.size();i++){
            st=i+1;
            e=nums.size()-1;
            while(st<e){
                int sum=-(nums[i]);
                if(nums[st]+nums[e]==sum){
                    vector<int> win={nums[i],nums[st],nums[e]};
                    auto it=find(result.begin(),result.end(),win);
                    if(it==result.end()){
                        result.push_back(win);
                        
                    }
                    
                    
                    
                    st++;
                    e--;

                }
                else if(nums[st]+nums[e]>sum){
                    e--;

                }
                else{
                    st++;
                }
            }
        }     
        return result;   
        
    }
};
