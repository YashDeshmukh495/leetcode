class Solution {
public:
    int findComplement(int num) {
        if(num==0){
            return 1;
        }
        int ans=0,rem;
        long long mul=1;
        while(num){
            rem=num%2;
            rem^=1;
            num/=2;
            ans=ans+rem*mul;
            mul*=2;

        }
        return ans;
        
    }
};