class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string stack;
        backtrack(0, 0, n, ans, stack);
        return ans;
    }

    void backtrack(int open, int closed, int n, vector<string>& ans, string& stack){
        if(open == closed && open == n){
            ans.push_back(stack);
            return;
        }
        if (open < n){
            stack += "(";
            backtrack(open+1, closed, n, ans, stack);
            stack.pop_back();
        }
        if (closed < open){
            stack += ")";
            backtrack(open, closed+1, n, ans, stack);
            stack.pop_back();
        }
    }

};