class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int>s;
        vector<int>ans;
        int n=grid.size();
        int a,b,actual_sum=0,expted_sum;
        for(int i=0; i<n;i++){
           
            for(int j=0;j<n;j++){
                 actual_sum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);

            }
        }
        expted_sum=(n*n)*((n*n)+1)/2;
        b=expted_sum+a-actual_sum;
        ans.push_back(b);
        return ans;
    }
};