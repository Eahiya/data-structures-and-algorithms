# include <iostream>
# include <string>
# include <algorithm>
# include <unordered_set>

using namespace std;

class Solution{

    public:

    int LargestSubString(string s){

        int n = s.length();
        int maxLen = 0;

        for(int i=0;i<n;i++){

            unordered_set <char> seen;

            for(int j=i;j<n;j++){

                if(seen.find(s[j]) != seen.end()){
                    break;
                }
                
                seen.insert(s[j]);
                maxLen = max(maxLen, j - i + 1);
            }
        }
        return maxLen;
    }
};