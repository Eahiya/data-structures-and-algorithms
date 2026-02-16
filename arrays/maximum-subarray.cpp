# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

class Solution{

    public:

    int maxSubarray(vector<int> &arr){

        if(arr.empty()){
            return 0;

        }
        
        int maxSoFar = arr[0];
        int currentMax = arr[0];

        for(int i=1;i<arr.size();i++){

            int currentNumber = arr[i];
            currentMax = max(currentNumber, currentMax + currentNumber);
            maxSoFar = max(maxSoFar, currentMax);

        }
        return maxSoFar;
    }
};