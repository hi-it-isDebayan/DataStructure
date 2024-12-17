#include <bits/stdc++.h>
using namespace std;



int main() {
    string str="H   el              lo";
    int k=-1;
    string str_new;
    for(int i=0 ;i<str.length(); i++){
        if(str[i]==' ') continue;
        str_new+=str[i];
    }
    cout << str_new << endl;
    return 0;
}