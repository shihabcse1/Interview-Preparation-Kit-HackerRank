string isBalanced(string s) {
    
    int string_length = s.size();
    stack<char> stack_one;
    
    if(string_length % 2 != 0) {
        return "NO";
    }
    
    for(int i = 0; i < string_length; i++) {
        
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack_one.push(s[i]);
        }else if((s[i] == ')' || s[i] == '}' || s[i] == ']') && !stack_one.empty()) {
            if(s[i] == ')' && stack_one.top() == '(') {
                stack_one.pop();
            }else if (s[i] == '}' && stack_one.top() == '{') {
                stack_one.pop();
            } else if (s[i] == ']' && stack_one.top() == '[') {
                stack_one.pop();
            }
        }else {
            return "NO";
        }
          
    }
    
    if (stack_one.empty()) {
        return "YES";
    } else {
        return "NO";
    }
}
