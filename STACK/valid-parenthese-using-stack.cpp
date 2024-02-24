bool isValidParenthesis(string s)
{
    
    stack<char> temp;

    for(int i=0; i<s.length(); i++){
        char c=s[i];
        if(c=='('||c=='{'||c=='['){
            temp.push(c);
        }
        else{
            if (!temp.empty()) {
              if ((c == ')' && temp.top() == '(') ||
                  (c == ']' && temp.top() == '[') || 
                  (c == '}' && temp.top()=='{'))
                {
                    temp.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(temp.empty()){
        return true;
    }
    else{
        return false;
    }
}