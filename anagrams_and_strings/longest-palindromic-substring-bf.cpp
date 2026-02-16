# include <iostream>
# include <string>
# include <algorithm>

using namespace std;

class Solution{

    public:
    string LongestPalindrome(string s){
        int n = s.size();
        string ans = "";

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPalindrome(s,i,j)){
                    if(j-i+1 > ans.size()){
                        ans = s.substr(i,j-i+1);
                    }
                }
            }
        }
        return ans;
    }
    bool isPalindrome(string s, int start, int end){
        while(start < end){
            if(s[start] != s[end]){
                return false;
                start++;
                end--;
            }
        }
        return true;
    }
};