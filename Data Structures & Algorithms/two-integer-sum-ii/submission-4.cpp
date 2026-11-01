class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> soln;
        int st=0;
        int e=numbers.size()-1;
        while(st<e){
            int sum=numbers[st]+numbers[e];
            if(sum>target){
                e--;
            }
            else if(sum<target){
                st++;

            }
            else{
                soln.push_back(st+1);
                soln.push_back(e+1);
                return soln;
            }
        }
        return soln;

        
        
    }
};
