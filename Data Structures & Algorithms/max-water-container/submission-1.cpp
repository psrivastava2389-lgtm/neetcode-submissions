class Solution {
public:
    int maxArea(vector<int>& heights) {
        int st=0; int e=heights.size()-1;int maxvolm=INT_MIN;
        while(st<e){
            int ht=min(heights[st],heights[e]);
            int w=e-st;
            int volm=ht*w;
            maxvolm=max(volm,maxvolm);

            if(heights[st]>heights[e]){
                e--;
            }
            else{
                st++;
            }
        }
        return maxvolm;
    }
};
