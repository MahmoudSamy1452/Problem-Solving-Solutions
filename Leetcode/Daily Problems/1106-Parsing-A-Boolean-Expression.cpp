class Solution {
    bool evalAndOrOr(string expression) {
        string exp;
        bool isAnd = expression[0] == '&', val = isAnd;
        int cnt = 0;
        for(int i = 2; i < expression.size() - 1; i++){
            char c = expression[i];
            cnt += c == '(';
            cnt -= c == ')';
            if(c == ',' && !cnt) {
                if(isAnd) val &= parseBoolExpr(exp);
                else val |= parseBoolExpr(exp);
                exp = "";
            } else exp += expression[i];
        }
        if(isAnd) val &= parseBoolExpr(exp);
        else val |= parseBoolExpr(exp);
        return val;
    }
public:
    bool parseBoolExpr(string expression) {
        if(expression == "f") return false;
        if(expression == "t") return true;
        if(expression[0] =='!') return !parseBoolExpr(expression.substr(2, expression.size() - 3));
        return evalAndOrOr(expression);
    }
};