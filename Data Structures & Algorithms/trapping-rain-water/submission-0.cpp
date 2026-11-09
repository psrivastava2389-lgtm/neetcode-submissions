class Solution {
public:
    int trap(vector<int>& height) {
       if( height.size()==1 || height.size()==2){return 0;}
       int n=height.size();
       priority_queue<int> lmax;
       priority_queue<int> rmax;
       vector<int> lheight(n,0);
       vector<int> rheight(n,0);
       

       for(int i=n-1;i>=0;i--){
        
        if(!rmax.empty() && rmax.top()>height[i]){
            rheight[i]=rmax.top();
        }
        else{
            rheight[i]=-1;
        }


        
        rmax.push(height[i]);

       }

       for(int i=0;i<n;i++){
        
        if(!lmax.empty() && lmax.top()>height[i]){
            lheight[i]=lmax.top();
        }
        else{
            lheight[i]=-1;
        }

        
        
        lmax.push(height[i]);

       }

       int totalwater=0;

       for(int i=0;i<n;i++){
        if(lheight[i]!=-1 && rheight[i]!=-1){
            totalwater+=(min(lheight[i],rheight[i])-height[i]);
        }

       }

       return totalwater;





       
        
    }
};
