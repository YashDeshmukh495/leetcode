class Solution {
public:
    bool isPalindrome(int x) {
        int org=x;
        int ans=0,rem;
        while(x>0){
            rem=x%10;
            x=x/10;
            if(ans>INT_MAX/10 ||ans<INT_MIN/10){
                return false;
            }
            ans=ans*10+rem;
        }
        
        if(org==ans){
            return true;
        }
        return false;
    }
};