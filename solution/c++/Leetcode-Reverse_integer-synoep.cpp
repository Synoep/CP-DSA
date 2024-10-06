#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long reverse = 0;
        while(x != 0){
            int temp = x % 10;
            x /= 10;
            reverse = reverse * 10 + temp;
        }
        if(reverse > INT_MAX || reverse < INT_MIN)
            return 0;
        return static_cast<int>(reverse);
    }
};