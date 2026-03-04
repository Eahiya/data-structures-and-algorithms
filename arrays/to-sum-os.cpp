# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution{

    public:

    vector<int> twoSum(vector<int> &arr, int target){

        unordered_map <int, int> mp;
        
        int n = arr.size();

        for(int i=0;i<n;i++){

            // Calculate the complement of the current number
            int complement = target - arr[i];
            
            // check if the complement exists in the map
            if(mp.find(complement) != mp.end()){
                return {mp[complement], i};
            }

            // remember the current number and its position for future checks
            mp[arr[i]] = i;
        }

        // Return an empty vector if no solution is found
        return {};
    }
};