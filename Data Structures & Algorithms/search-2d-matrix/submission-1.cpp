class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();int c=matrix[0].size();int st,e;
        
        int start_row=0; int end_row=r-1;
        while(start_row<=end_row){
            int mid_row=start_row + (end_row-start_row)/2;
            if(matrix[mid_row][0]<=target && matrix[mid_row][c-1]>=target){
                st=mid_row;
                break;
            }
            else if(matrix[mid_row][0]>=target && matrix[mid_row][c-1]>=target){
                end_row=mid_row-1;
            }
            else{
                start_row=mid_row +1;
            }
        }
        int start=0;e=c-1;
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
