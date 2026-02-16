# include <iostream>
# include <string>
# include <stack>
using namespace std;

bool isvalid(string s){
    stack<char> sp;
    
    for(char c : s){
        if(c == '{' || c == '[' || c == '('){
            sp.push(c);
        }
        else{
            if(sp.empty()){
                return false;
            }
            
            char top = sp.top();
            
            if((c == ')' && top == '(') ||
            (c == ']' && top == '[') ||
            (c == '}' && top == '{')){
                sp.pop();
            }
            else{
                return false;
            }
        }
    }
    return sp.empty();
}

int main(){
    string userInp;
    cin>>userInp;
    if(isvalid(userInp)){
        cout<<"Valid"<<endl;
        return 0;
    }
    else{
        cout<<"Not Valid"<<endl;
        return 0;
    }
    return 0;
}