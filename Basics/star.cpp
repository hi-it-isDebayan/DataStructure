#include <bits/stdc++.h>
using namespace std;
#define MAX 500
class data{
    public:
        int n, arr[MAX];
        void work(){
            cout << "Block-size: ";
            cin >> n;
            cout << "Enter Elements...\n";
            for(int i=0; i<n; i++){
                cin >> arr[i];
            }
            cout << "\n: Assignment-1 (DSA) :\n\n1. Insert.\n2. Delete.\n3. Update\n4. Search Element.\n5. Display.\n6. exit.\n7.Reset.\n8.Clearscreen\n\n";
            while(1){
                int choice,k,p,z,y,m,e;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice){
                    case 1://Insertion of an element...
                        {
                           cout << "insert element... ";cin>> k;cout << "_AT-POSITION_ ";cin >> p;ins(k,p-1);break; 
                        }
                    case 2://Deletion of an element...
                        {
                            cout << "Delete element... "; cin>> e; del(e);break;
                        }
                    case 3:
                        {
                            cout << "Update element..."; cin >> y; cout << "at position ";cin >> m; update(y,m-1);break;
                        }
                    case 4: 
                        {
                            cout << "Search element: ";
                            cin >> z;
                            cout << "Element found in position_"<<search(z)+1<<"_\n";
                            break;
                        }
                    case 5://Display elements.
                        {
                            cout << "Elements present...\n";for(int i=0; i<n; i++)cout << arr[i] << " "; cout << "\n";break;
                        }
                    case 6: exit(1);break;
                    case 7: work(); break;
                    case 8: 
                        {
                            system("cls");cout << "\n: Assignment-1 (DSA) :\n\n1. Insert.\n2. Delete.\n3. Update\n4. Search Element.\n5. Display.\n6. exit.\n7.Reset.\n8.Clearscreen\n\n//No of elements...";for(int i=0; i<n; i++)cout << arr[i] << " "; cout << "\n\n";break;
                        }
                    default: cout << "Wrong Input.\n\n";
                }
            }
        }
        void ins(int, int);
        int search(int);
        void update(int, int);
        void del(int );

};
void data::del(int e){
    if(search(e)<0){cout << "Empty, block.\n";return;}
    
    
    for(int i=search(e)+1; i<n; i++){
        arr[i-1]=arr[i];
    }
    --n;
}
void data::update(int y, int pos){
    if(pos>=n) ++n;//suppose the element to be updated at pos is not in scope
    arr[pos]=y;
}
int data::search(int num){
    int i;
    for(i=0 ;i<n; i++)
        if(arr[i]==num) return i;
    return -1;
}
void data::ins(int k, int p){
    ++n;
    for(int i=n-1; i>p; i--)
        arr[i]=arr[i-1];
    
    arr[p]=k;
}
int main(){
    data ob;
    ob.work();
    return 0;
}