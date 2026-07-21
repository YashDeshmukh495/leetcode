class Solution {
public:
    int mySqrt(int x) {
        int i=1;
        if(x==0){
            return 0;
        }
        while(true){
            if(i>x/i){
                return i-1;
            }
            i++;
        }
        return i;
    }
};