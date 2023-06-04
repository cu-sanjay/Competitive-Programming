#include <unordered_map>
bool isValidParenthesis(string expression)
{
    // Using Stack
    if(expression.length() & 1) return false;
    stack<char> s;
    unordered_map<char, char> hash;
    hash['('] = ')';
    hash['{'] = '}';
    hash['['] = ']';
    for(char it : expression){
        if(it == '(' || it == '{' || it == '[') s.push(it);
        else{
            if(s.empty()) return false;
            if(hash[s.top()] != it) return false;
            s.pop();
        }
    }
    if(!s.empty()) return false;
    return true;
}