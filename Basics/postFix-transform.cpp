#include <bits/stdc++.h>
using namespace std;

class postFix {
public:
    string str;
    
    postFix(string expression) {
        str = expression;
    }

    bool isOperator(char x) {
        return (x == '+' || x == '-' || x == '*' || x == '/' || x == '%' || x == '^');
    }

    int prec(char ch) {
        if (ch == '+' || ch == '-') return 1;
        else if (ch == '*' || ch == '/' || ch == '%') return 2;
        else if (ch == '^') return 3; // Exponent has highest precedence
        else return -1;
    }

    bool isLeftAssociative(char op) {
        return (op != '^'); // '^' is right associative
    }

    string removeSpace(string str) {
        string str_new;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') continue;
            str_new += str[i];
        }
        return str_new;
    }

    void postFix_conversion(string expression) {
        string astr = removeSpace(expression);  // Remove spaces from input expression
        stack <char> stk;
        vector <char> output;
        int k = 0;

        while (astr[k] != '\0') {
            char si = astr[k];
            
            // Operand (letters A-Z, a-z)
            if (isalnum(si)) {  // isalnum is better for operands (digits and letters)
                output.push_back(si);
            }
            // Left Parenthesis '('
            else if (si == '(') {
                stk.push(si);
            }
            // Right Parenthesis ')'
            else if (si == ')') {
                while (!stk.empty() && stk.top() != '(') {
                    output.push_back(stk.top());
                    stk.pop();
                }
                stk.pop();  // pop the '('
            }
            // Operator (e.g., +, -, *, /, %, ^)
            else if (isOperator(si)) {
                while (!stk.empty() && prec(stk.top()) >= prec(si) && isLeftAssociative(si)) {
                    output.push_back(stk.top());
                    stk.pop();
                }
                stk.push(si);
            }
            k++;
        }

        // Pop all remaining operators from the stack
        while (!stk.empty()) {
            output.push_back(stk.top());
            stk.pop();
        }

        // Print the result as a postfix expression
        for (char c : output) {
            cout << c;
        }
        cout << endl;
    }
};

int main() {
    string ex;
    cout << "Enter an Expression : \n";
    getline(cin, ex);  // Read the entire expression including spaces
    postFix ob(ex);
    ob.postFix_conversion(ex);
}
