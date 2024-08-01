#include <bits/stdc++.h>
#define MAX 100
using namespace std;
class dsa{
    public:
        int front, rear;
        dsa(){
            front=rear=-1;
        }
        int n, arr[MAX];
        void getData(){
            cout << "Enter the length of the list: ";
            cin >> n;
            
        }
        void display();
        void del();
        void ins(int);
        void start();
};
void dsa::display(){
    cout << "Elements in the list...\n->";
    for(int i=front+1 ;i<=rear; i++){
        cout << arr[i] << " ";
    }cout << "\n";
}
void dsa::start(){
    int x,y;
    cout << "\n: Data Structure : \n\n1. Insert.\n2. Delete.\n3. Display. \n4. Exit.\n\n";
    while(1){
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: cout << "insert element... ";cin >> x; ins(x); break;
            case 2: del(); break;
            case 3: display(); break;
            case 4: exit(1);
        }
    }
}

void dsa :: del(){
    if(front==rear){front=rear=-1; cout<< "Stack is empty....\n";return;}
    ++front;
    ++n;
    cout << "deleted...\n";
}
void dsa :: ins(int x){
    if(rear==n-1||rear==MAX-1) {cout <<"Stack is Overflowed...\n";return;}
    arr[++rear]=x;
}
int main(void){
    dsa ob;
    ob.getData();
    ob.start();
    
}