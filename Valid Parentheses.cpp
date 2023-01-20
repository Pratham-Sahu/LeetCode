class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int a=0;
        for(auto i:s)
        {
            if(i=='('||i=='{'||i=='[')
                stack.push(i);
            else if(stack.empty()==false)
            {
                char &c=stack.top();
                if(i==')'&&c=='('||i==']'&&c=='['||i=='}'&&c=='{')
                    stack.pop();
                else
                    return false;
            }
            else if(stack.empty()==true)
                return false;
        }
        return stack.empty();
    }
};
