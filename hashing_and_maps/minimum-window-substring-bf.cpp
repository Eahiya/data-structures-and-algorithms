# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <unordered_map>

using namespace std;

class Solution{

    public:

    string minWindow(string s, string t){
        int n = s.length();
        string ans = "";

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string sub = s.substr(i,j-i+1);
                if(containsAll(sub, t)){
                    if(ans.empty() || sub.length() < ans.length()){
                        ans = sub;
                    }
                }
            }
        }
        return ans;
    }

    bool containsAll(string window, string t){
        unordered_map<char, int> freq;

        for(char c : t){
            freq[c]++;
        }
        for(char c : window){
            freq[c]--;
        }
        for(auto it : freq){
            if(it.second > 0){
                return false;
            }
        }
        return true;
    }
};