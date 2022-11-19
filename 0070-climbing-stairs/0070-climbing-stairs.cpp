class Solution {
public:
    int climbStairs(int n) {
       
        int A[n+1];
        for(int i = 0; i<=n; i++){
            A[i]=0;
        }
        //A[0]=0;
        A[1]=1;
        if(n>=2){
            A[2]=2;
        }
        
        for(int i = 3; i<=n; i++){
            A[i] = A[i-1] + A[i-2];
        }
        return A[n];
    }
       
        
        
        /*
        Recursive Approach
        if(n==1){
            return 1;
        }
        if(n==2){
            return n;
        }
        
        return climbStairs(n-2) + climbStairs(n-1);
        }
     */
};