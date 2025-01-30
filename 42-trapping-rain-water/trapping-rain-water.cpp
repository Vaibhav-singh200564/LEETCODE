class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int prev[n];
         prev[0]=-1;
        int max=height[0];
        for(int i=1; i<n; i++){
            prev[i]=max;
            if(max<height[i]) max=height[i];
        }
        int next[n];
        next[n-1]=-1;
        max=height[n-1];
        for(int i=n-2; i>=0; i--){
            next[i]=max;
            if(max<height[i]) max=height[i];
        }
        int mini[n];
        for(int i=0; i<n; i++){
            mini[i]=min(next[i],prev[i]);
        }
        int water=0;
        for(int i=0; i<n; i++){
            if(height[i]<mini[i]){
                water=water+(mini[i]-height[i]);
            }
        }
        return water;
     }

};