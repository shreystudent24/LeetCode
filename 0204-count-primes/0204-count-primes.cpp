class Solution {
public:
    int countPrimes(int n) {
        
      //Used Sieve of Eratosthenes.
    
        vector<bool> prime(n + 1, true);
	    prime[0] = false;
		prime[1] = false;
        
        //Finding Prime Numbers. 
		for (int i = 2; i * i <= n; i++) {
			if (prime[i]) {
				for (int j = i * i; j <= n; j += i) {
					prime[j] = false;
				}
			}
		}
        
		//counting prime numbers
		int primeCount = 0;
		for (int i = 2; i < n; i++) {
			if (prime[i]) {
				primeCount++;
			}
		}
		return primeCount;
	}
    
};