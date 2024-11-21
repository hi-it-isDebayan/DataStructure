#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int top, n,arr[];
        // getData();
        void getData(){
            top=-1;
            cout << "Enter Size of the Stack: ";
            cin >> n;
            int arr[n];
        }
        bool isEmpty();
        bool isFull();
        void push(int);
        int pop();
        int peek();
        void show(){
            // cout << "The Stack size is " << n;
            int choice, flag=1;
            cout << "Stack Size: "<< n<<"\n\n\n0. Exit\n1. Push Element.\n2. pop Element.\n3. Show Stack.\n4. Clear Screen.\n\n\n";
            while(flag){
                // system("cls");
                cout << "Your choice...";
                cin >> choice;
                switch(choice){
                    case 0: cout  << "\nExit was Initiated.\n";
                            exit(0);
                    case 1: cout<< "pushing element..."; int x;cin >> x; push(x); break;
                    case 2: if(isEmpty()==true){cout << "no element found...\n";break;}cout << "removing element " << peek() << "...\nElement "<<peek() << " removed.\n";pop();break;
                    case 3: cout << "Stack Contains\n";if(isEmpty()==true){cout <<"0 elements.\n";break;}for(int i=top; i>=0; i--){cout << arr[i]<< endl;} break;
                    case 4: system("cls");show();break;
                    default: cout << "Invalid choice..."<< endl;
                }
            }
        }
};
bool (Stack::isEmpty)(){
    return (top==-1);
}
bool (Stack::isFull)(){
    return (top==n-1);
}
int (Stack::pop)(){
    return arr[top--];
}
int (Stack::peek)(){
    if(isEmpty()){
        return INT_MIN;
    }
    return arr[top];
}
void (Stack::push)(int x){
    if(isFull()){
        cout << "Stack overflow." <<endl;
        return;
    }
    arr[++top]=x;
}
int main(void){
    Stack ob;
    ob.getData();
    ob.show();
}