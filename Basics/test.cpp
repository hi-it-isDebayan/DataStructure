#include <bits/stdc++.h>
using namespace std;

int evaluate(const string& expression) {
    int result = 0;
    char op = '+';

    for (char c : expression) {
        if (isdigit(c)) {
            result = (op == '+') ? result + (c - '0') : result - (c - '0');
        } else if (c == '+' || c == '-') {
            op = c;
        } 
        // else {
        //     // Handle errors for invalid characters
        //     cerr << "Invalid character: " << c << endl;
        //     return -1; // Or handle the error differently
        // }
    }

    return result;
}

int main() {
    string expression = "10+20-5";
    int result = evaluate(expression);
    cout << result << endl;
    return 0;
}