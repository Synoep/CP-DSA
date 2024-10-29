#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to count the number of prime numbers less than 'n'
    int countPrimes(int n) {
        if (n <= 2) return 0; // No primes less than 2
        
        int count = 0; // Variable to store the count of prime numbers
        
        // Create a boolean vector 'prime' where prime[i] is true if 'i' is prime
        vector<bool> prime(n, true); // The vector should be of size 'n'
        prime[0] = prime[1] = false; // 0 and 1 are not prime numbers
        
        // Iterate through all numbers less than 'n'
        for (int i = 2; i < n; i++) {
            if (prime[i]) { // If 'i' is prime
                count++; // Increment the prime count
                
                // Mark all multiples of 'i' as not prime
                for (int j = i * 2; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }
        
        return count; // Return the total count of prime numbers
    }
};
