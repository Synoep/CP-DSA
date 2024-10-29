#include <bits/stdc++.h>
using namespace std;

class Solution { 
public:     
    // Function to check if a message contains at least 2 banned words
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {         
        int cnt = 0; // Counter to keep track of how many banned words are found in the message
        unordered_set<string> st; // Using an unordered_set to store the banned words for faster lookup
        
        // Insert each banned word into the set
        for (auto &c1: bannedWords) 
            st.insert(c1); 
        
        // Iterate over each word in the message
        for (auto &s: message) { 
            // If the word is found in the set of banned words, increment the counter
            if (st.find(s) != st.end())  
                cnt++; 
        } 
        
        // Return true if 2 or more banned words are found, otherwise false
        return cnt >= 2;     
    } 
};
