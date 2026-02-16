# include <iostream>
# include <vector>
# include <unordered_set>

using namespace std;

class Solution{

    public:

    bool containsDuplicates(vector<int> &arr){

        unordered_set <int> s;

        for(int num : arr){

            if(s.find(num) != s.end()){
                return true;
            }
            s.insert(num);
        }
        return false;
    }
};