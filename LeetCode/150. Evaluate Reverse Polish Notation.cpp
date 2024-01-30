class Solution {
public:
    int Operator(int a, int b, string token){
        if(token == "+")
            return a+b;
        else if(token == "-")
            return a-b;
        else if(token == "*")
            return (long)a*(long)b;
        else if(token == "/")
            return a/b;

        return -1;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int result = 0;
        for(string& token : tokens){
            if(token == "+" || token == "*" || token == "/" || token == "-"){
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                result = Operator(a,b,token);
                s.push(result);
            }
            else{
                s.push(stoi(token));
            }
        }
        return s.top();
    }
};