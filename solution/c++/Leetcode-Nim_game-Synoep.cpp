#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        if(n%4== 0) return false ; // if n is divisible by 4 then your friend will win
        else return true;
    }
};