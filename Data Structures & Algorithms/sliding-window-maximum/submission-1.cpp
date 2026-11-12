class Solution {
public:

int find_max_idx(vector<int> nums, int st, int e){
    int max_idx=st;

    for(int i=st; i<=e;i++){
        max_idx=nums[i]>nums[max_idx]? i:max_idx;
    }
    return max_idx;
}
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> max_elem;

        
        
        int st=0; int e=k-1;

        int max_idx=find_max_idx(nums,st,e);
        max_elem.push_back(nums[max_idx]);

        while(e<nums.size()-1){
            e++;
            if(nums[e]>nums[max_idx]){
                max_idx=e;
            }
            if(max_idx==st){
                max_idx=find_max_idx(nums,st+1,e);
            }
            st++;
            
            max_elem.push_back(nums[max_idx]);
            
        }

        return max_elem;
        
    }
};
