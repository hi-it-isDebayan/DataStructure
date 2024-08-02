#include <bits/stdc++.h>
using namespace std;
//Assignment 2
class Complex{
	public: 
		int x,y;
		Complex(){
			x=y=0;
		}
		void input(){
		
			cout << "x: ";cin >> x;
			cout << "y: ";cin>>y;
		}
};
int main(){
	Complex a,b;
	cout << "COMLEX 1:\n";a.input();cout << "COMLEX 2:\n";b.input();
	cout << "\n";
	if(a.y>=0) cout << "C1: "<<a.x<<"+"<< a.y<< "j"<<endl;
	else cout << "C1: "<<a.x<< a.y<< "j"<<endl;
	if(b.y>=0) cout << "C1: "<<b.x<<"+"<< b.y<< "j"<<endl;
	else cout << "C2: "<<b.x<< b.y<< "j"<<endl;
	
	//ADDITION UNDERGOES
	double sum_real=a.x +b.x;
	double sum_im=a.y + b.y;
	if(sum_im>=0){cout << "Sum of complex: \n"<<sum_real<<"+"<< sum_im<< "j"<<endl;return 0;}
	cout << "Sum of complex: \n"<<sum_real<< sum_im<< "j"<<endl;
}

