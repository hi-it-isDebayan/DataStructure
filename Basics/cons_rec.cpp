#include <bits/stdc++.h>
using namespace std;
//assignment no. 2
class rec{
	public: 
		double l,b;
		rec(){
			l=b=0.0;
		}
		rec(double len, double bre){
			l=len;
			b=bre;
		}
		double area(double,double);
		double perimeter(double, double);	
		void display();
};
double rec::area(double l ,double b){
	return l*b;
}
double rec::perimeter(double l, double b){
	return 2*(l+b);
}
void rec::display(){
	cout <<"Perimeter: "<<perimeter(l,b)<<"\n"<<"area: "<<area(l,b)<<"\n";
}
int main(){
	double l1,b1;
	cout << "Length: "; cin >> l1;
	cout << "Breadth: ";cin >> b1;
	rec ob(l1,b1),ob1;
	ob.display();
	//ob1.display();
	return 0;
}
