class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> op;
        stack<int> res;
        if(tokens.size() < 3)
            return stoi(tokens[0]);
        
        for(int i = 0; i < tokens.size(); i++)
        {
            if(!res.empty())
            {
                int opRes = res.top();
                res.pop();
                op.push(opRes);
            }
            if(tokens[i] != "+" &&
                tokens[i] != "-" &&
                tokens[i] != "*" &&
                tokens[i] != "/")
            {
                int elem = stoi(tokens[i]);
                op.push(elem);
            }
            else
            {
                int op2 = 0;
                int op1 = 0;
                int result = 0;
                op2 = op.top();
                op.pop();
                op1 = op.top();
                op.pop();
                switch(tokens[i][0])
                {
                    case '+':
                        result = op1 + op2;
                        break;
                        
                    case '-':
                        result = op1 - op2;
                        break;
                        
                    case '*':
                        result = op1 * op2;
                        break;
                        
                    case '/':
                        result = op1 / op2;
                        break;
                }
                res.push(result);
            }
        }
        return res.top();
    }
};