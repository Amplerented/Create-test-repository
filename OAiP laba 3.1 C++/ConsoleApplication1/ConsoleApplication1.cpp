#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	double d , a , y , t , c , j ;
	cout << " d = " ; cin>> d ;
	cout << " a = "; cin >> a ;
	cout << " c = " ; cin>> c ;
	cout << " j = " ; cin >> j ;
	t = (d * c + a * sqrt(c - 1)) ; 
	y = 0.5 * t / d + exp(a);
	cout << " t = " << t ;
	cout << " y = " << y ;
	return 0;
}