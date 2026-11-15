class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();int c=matrix[0].size();int st,e;
        for(int i=0; i<r;i++){
            if(matrix[i][0]<=target && matrix[i][c-1]>=target){
                st=i;
                e=c-1;
            }
            

        }
        int start=0;
        while(start<=e){
            int m=start+ (e-start)/2;

            if(matrix[st][m]==target){
                return true;
            }
            else if(matrix[st][m]<target){
                start=m+1;

            }
            else{
                e=m-1;
            }
        }
        return false;
        
    }
};
