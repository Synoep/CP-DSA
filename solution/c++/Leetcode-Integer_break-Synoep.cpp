#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int integerBreak(int n){
        int ans = 1;
        if(n <= 3) return n-1;
        while(n > 4){
            ans = ans * 3;                
            n = n-3;           
        }
        return ans*n;
    }
};