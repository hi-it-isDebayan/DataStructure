//Tower of Hanoi using recursion
#include <bits/stdc++.h>
using namespace std;
void ToH(int n, char src, char aux, char des){
    if(n==1){
        cout << "Move the disk from " << src << " to " << des<<endl;
        return;
    }
    ToH(n-1,src, des, aux);
    cout << "Move the disk from " << src << " to " << des<<endl;
    ToH(n-1, aux, src, des);
    return;
}
int main(){
    int n;
    cout << "Number of disks: ";
    cin >> n;
    ToH(n,'A', 'B', 'C');
    return 0;
}