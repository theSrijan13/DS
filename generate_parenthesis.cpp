class Solution{
    public:
    void solve(string op,int open,int close, vector<int> &ans){
        if(open == 0 && close == 0){
            ans.push_back(op);
            return;
        }
        if(open == close){
            string op1 = op;
            op1.push_back('(');
            solve(op,open-1,close,ans);
        }
        else if (open==0){
            string op1 = op;
            op1.push_back(')');
            solve(op,open,close-1,ans);
        }
        else if(close==0){
            string op1 = op;
            op1.push_back('(');
            solve(op,open-1,close,ans);
        }
        else{
            string op1 = op;
            string op2 = op;
            op1.push_back('(');
            op2.push_back(')');
            solve(op,open-1,close,ans);
            solve(op,open,close-1,ans);
        }
        vector<string> generateparen(int n){
            int open = n;
            int close = n;
            vector<string> ans;
            string op="";
            solve(op,open,close,ans);
            return ans;
        }
    }
}