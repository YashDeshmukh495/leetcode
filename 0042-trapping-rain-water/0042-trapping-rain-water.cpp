class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int maxLeft=0;
        int maxRight=0;
        int index=0;
        int water=0;
        int maxHeight=height[0];
        //find max element in array;
        for(int i=1;i<n;i++){
            if(height[i]>maxHeight){
                maxHeight=height[i];
                index=i;
            }
        }
        //left part
        for(int i=0;i<index;i++){
            if(maxLeft>height[i]){
                water+=maxLeft-height[i];
            }
            else{
                maxLeft=height[i];
            }

        }

        //right path
        for(int i=n-1;i>index;i--){
            if(maxRight>height[i]){
                water+=maxRight-height[i];

            }
            else{
                maxRight=height[i];
            }
        }
        return water;

    }
};