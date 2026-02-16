# include <iostream>
# include <string>
# include <vector>

using namespace std;

class Encode{

    public:
    string encode(vector<string> &strs){
        string encode = "";

        for(string s : strs){
            encode += to_string(s.length()) + "#" + s;
        }
        return encode;
    }
};

class Decode{

    public:

    vector<string> decode(string &s){
        vector<string> result;
        int i=0;

        while(i< s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, len);
            result.push_back(str);
            i = j + 1 + len;
        }
        return result;
    }
};