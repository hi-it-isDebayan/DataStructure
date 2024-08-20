#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int top=-1;
char store[MAX];
// char stor1[MAX];
void push(char s){
    store[++top]=s;
}
bool isEmpty(){
    return (top==-1);
}
char peek(){
    // if(isEmpty()==true) return 48;
    return store[top];
}
char pop(){
    return store[top--];
}
bool isOperand(char x){
    if((x>='a'&& x<='z')|| (x>='A'&& x<='Z')) return true;
    return false;
}
bool isOperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^') return true;
    return false;
}
int prec(char x){
    if(x=='^') return 3;
    else if(x=='/' || x=='*') return  2;
    else if(x=='+' || x=='-') return 1;
    return 0;

}
/// @brief checks whether it is an operand or not
/// @return true/false
char store1[MAX];
// void convertTonum(){
//     int m=-1;
//     while(store1[++m]!='\0'){
//         char y=store1[m];
//         if(isOperand(y)==true){
//             // char ch = 'a';
//             cout << y << "= ";
//             cin >> y;
//         }
//     }
// }
int main(){
    string str;
    cout << "Enter the Infix Expression...";
    cin >> str;
    int k=-1,l=-1;
    while(str[++k] != '\0'){
        char x=str[k];
        if(x=='(') push(x);
        else if(isOperand(x)==true) store1[++l]=x;
        else if(x==')'){
            while(peek()!='('){
                pop(); store1[++l]=store[top+1];
            }pop();
        }
        else if(isOperator(x)==true){
            if(isEmpty()==true) push(x);
            else if(peek()=='(') push(x);
            else{
                if(prec(x)>prec(peek())) push(x);
                else{
                    while(prec(x)<=prec(peek())){
                        pop();store1[++l]=store[top+1];
                    }push(x);
                }
            }
        }
    }
    while(isEmpty()==false){
        pop();store1[++l]=store[top+1];
    }
    cout <<"The Post-Fix Expression... ";
    for(int i=0; i<l; i++){
        cout << store1[i];
    }
    // convertTonum();
    // cout << store1;
}