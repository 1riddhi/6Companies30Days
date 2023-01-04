class Solution {
public:
    int get_res(string s, int a, int b){
        if(s=="+") return a+b;
        else if(s=="*") return a*b;
        else if(s=="-") return b-a;
        else return b/a;
    }
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" ||tokens[i]=="/"||tokens[i]=="*"){
                int top1=stoi(s.top());
                s.pop();
                int top2=stoi(s.top());
                s.pop();
                int res=get_res(tokens[i],top1,top2);
                s.push(to_string(res));
            }
            else s.push(tokens[i]);
        }
        return stoi(s.top());
    }
};
