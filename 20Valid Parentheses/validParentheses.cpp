bool equals(char a, char b){
    switch(a){
        case ')':
            if(b == '(') return true;
            else return false;
        case ']':
            if(b == '[') return true;
            else return false;
        case '}':
            if(b == '{') return true;
            else return false;
        default:
            return false;
    }
}
class Solution {
public:
    bool isValid(string s) {
        bool flag;
        stack<char> s_stack;
        int size = s.size();
        for(int i = 0; i  < size; i++){
            if(s[i] == ' '){
                continue;
            }else if(!s_stack.empty() && (equals(s[i], s_stack.top()))){
                s_stack.pop();
            }else if(!s_stack.empty() && !(equals(s[i], s_stack.top()))){
                s_stack.push(s[i]);
            }else if(s_stack.empty()){
                s_stack.push(s[i]);
            }
        }
        if(s_stack.empty()) return true;
        return false;
    }
};