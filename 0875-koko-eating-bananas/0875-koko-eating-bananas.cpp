class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=0;
        int end=0;
        int mid,ans;
        int n=piles.size();
        // calculte start and end
        long long sum=0;
        for(int i=0;i<n;i++){
            sum=sum+piles[i];
            end=max(end,piles[i]);
        }
        start=sum/h;
        if(start==0){
            start=1;
        }
        //find mid and ans 
        while(start<=end){
            mid=start+(end-start)/2;
            int total_time=0;
            //time calcute
            for(int i=0;i<n;i++){
                total_time+=piles[i]/mid;
                //supos time in 4.5 than make tere 5
                if(piles[i]%mid){
                    total_time++;
                }
            
            }
            if(total_time>h){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};