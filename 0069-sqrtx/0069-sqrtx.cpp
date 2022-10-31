class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        
        long long result = 1;
        long i = 1;
        long ans = 1;
        while(result<=x){
            i++;
            result = i*i;
            ans = i;
        }
        return ans-1;
    }
};