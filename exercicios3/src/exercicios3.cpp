//============================================================================
// Name        : exercicios3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <math.h>
#include <iomanip>
#include <complex>
#include <climits>

using namespace std;
//3.1

double distance(double x1, double x2, double y1, double y2){
	double result;
	result = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	return result;
}

double area(double x1, double x2, double x3, double y1, double y2, double y3){
	double lado1 = distance(x1,x2,y1,y2);
	double lado2 = distance(x2,x3,y2,y3);
	double lado3 = distance(x3,x1,y3,y1);
	double s = (lado1 + lado2 + lado3)/2.0;
	double area = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
	return area;
}

//int main(){
//	double x1, x2, x3, y1, y2, y3;
//	cout << "Introduzir ponto 1";
//	cin >> x1 >> y1;
//	cout << "Introduzir ponto 2";
//	cin >> x2 >> y2;
//	cout << "Introduzir ponto 3";
//	cin >> x3 >> y3;
//	double result = area(x1, x2, x3, y1, y2, y3);
//	cout << "Area=" << result;
//}

//3.2

bool isPrime(int prime){
	bool result = true;
	for(int i=2; i<=sqrt(prime); i++){
		if(prime%i == 0){
			result= false;
		}
	}
	return result;
}

//int main(){
//	int number;
//	cout << "Insert number:";
//	cin >> number;
//	if(isPrime(number)){
//		cout << "Prime!";
//	}else
//		cout << "Not prime!";
//}

//3.3
double squareroot(double delta, double intMax){
	float n;
	double result=0;
	cout << "Insert number:";
	cin >> n;
	float rq =1;
	for(int i=1; i<=intMax; i++){
		float rqn = (rq + n / rq) / 2;
		float dif = n - pow(rqn,2);
		if(abs(dif)<delta) {
			result = rqn;
			break;
		}else
			rq= rqn;
	}
	cout << sqrt(n) << endl;
	return result;
}

//int main(){
//	double delta, intMax, result;
//	cout << "Insert precision:";
//	cin >> delta;
//	cout << "Insert max number of iterations";
//	cin >> intMax;
//	result = squareroot(delta, intMax);
//	cout << result;
//}

//3.4

double round(double x, unsigned n){
	double a = pow(10,n);
	double result = floor(x * a + 0.5) / a;
	return result;
}

//int main(){
//	double x;
//	unsigned n;
//	double roundn;
//	cout << "Insert number:";
//	cin >> x;
//	cout << "Insert number of decimal cases:";
//	cin >> n;
//	roundn = round(x,n);
//	cout << roundn;
//}

//3.5

bool readFracc( int& n , int& d){
	char separador;
	bool result;
	cin >> n >> separador >> d;
	if(!cin.fail() && separador == '/'){
		result= true;
	} else{
		n = d = 0;
		result= false;
	}
	return result;
}

void writeFracc(int n, int d){
	cout << n << "/" << d;
}

int euclid(int n, int d){
	n = abs(n);
	d = abs(d);
	int gdc=0;
	for(int i=1; i<=n && i<=d; i++){
		if(n%i == 0 && d%i == 0){
			gdc = i;
		}
	}
	return gdc;
}

void reduceFracc(int& n, int& d){
	int gdc= euclid(n,d);
	n = n/gdc;
	d = d/gdc;
}

void addFracc(int& nr, int& dr, int n1, int d1, int n2, int d2){
	n1= n1*d2;
	n2= n2*d1;
	d1=d2=d1*d2;
	nr= n1+n2;
	dr= d1;
	reduceFracc(nr,dr);
}

void subFracc(int& nr, int& dr, int n1, int d1, int n2, int d2){
	n1= n1*d2;
	n2= n2*d1;
	d1=d2=d1*d2;
	nr= n1-n2;
	dr= d1;
	reduceFracc(nr,dr);
}

void mulFracc(int& nr, int& dr, int n1, int d1, int n2, int d2){
	nr= n1*n2;
	dr= d1*d2;
	reduceFracc(nr,dr);
}

void divFracc(int& nr, int& dr, int n1, int d1, int n2, int d2){
	nr=n1*d2;
	dr= n2*d1;
	reduceFracc(nr,dr);
}

void opFracc(int& numerador, int& denominador){
	int n1, n2, d1, d2;
	char op;
	readFracc(n1, d1);
	cin >> op;
	readFracc(n2, d2);
	switch(op){
	case '+':
		addFracc(numerador, denominador, n1, d1, n2, d2);
		break;
	case '-':
		subFracc(numerador, denominador, n1, d1, n2, d2);
		break;
	case '*':
		mulFracc(numerador, denominador, n1, d1, n2, d2);
		break;
	case '/':
		divFracc(numerador, denominador, n1, d1, n2, d2);
		break;
	}
}

//3.6
bool leapYear(int year){
	bool result = false;
	if(year%400 == 0){
		result = true;
	}
	if(year%4 == 0 && year%100 != 0){
		result = true;
	}
	return result;
}

int numberdays(int year, int month){
	int days;
	switch(month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days= 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:
		if(leapYear(year)){
			days = 29;
			break;
		}else{
			days=28;
			break;
		}
	}
	return days;
}

int monthcode(int year, int month){
	int result;
	if(leapYear(year)){
		switch(month){
		case 1:
		case 4:
		case 7:
			result = 6;
			break;
		case 2:
		case 8:
			result = 2;
			break;
		case 3:
		case 11:
			result = 3;
			break;
		case 5:
			result = 1;
			break;
		case 6:
			result = 4;
			break;
		case 9:
		case 12:
			result = 5;
			break;
		case 10:
			result = 0;
			break;
		}
	}else{
		switch(month){
				case 4:
				case 7:
					result = 6;
					break;
				case 8:
					result = 2;
					break;
				case 2:
				case 3:
				case 11:
					result = 3;
					break;
				case 5:
					result = 1;
					break;
				case 6:
					result = 4;
					break;
				case 9:
				case 12:
					result = 5;
					break;
				case 1:
				case 10:
					result = 0;
					break;
				}
	}
	return result;
}

int weekdaycode(int year, int month, int day){
	int ds;
	int s = year/100;
	int a = year%100;
	int c = monthcode(year, month);
	ds = (int) (floor((5*a)/4) + c + day - 2*(s%4) + 7) % (int) 7 ;
	return ds;
}

void weekday(int year, int month, int day){
	int ds = weekdaycode(year, month, day);
	string wd;
	switch(ds){
	case 0:
		wd= "Saturday";
		break;
	case 1:
		wd= "Sundary";
		break;
	case 2:
		wd = "Monday";
		break;
	case 3:
		wd= "Tuesday";
		break;
	case 4:
		wd = "Wednesday";
		break;
	case 5:
		wd = "Thursday";
		break;
	case 6:
		wd = "Friday";
		break;
	}
	cout << wd;
}

void printmonth(int year, int month){
	switch(month){
	case 1:
		cout << "January" << "/" << year << endl;
		break;
	case 2:
		cout << "February" << "/" << year<< endl;
		break;
	case 3:
		cout << "March" << "/" << year<< endl;
		break;
	case 4:
		cout << "April" << "/" << year<< endl;
		break;
	case 5:
		cout << "May" << "/" << year<< endl;
		break;
	case 6:
		cout << "June" << "/" << year<< endl;
		break;
	case 7:
		cout << "July" << "/" << year<< endl;
		break;
	case 8:
		cout << "August" << "/" << year<< endl;
		break;
	case 9:
		cout << "September" << "/" << year<< endl;
		break;
	case 10:
		cout << "October" << "/" << year<< endl;
		break;
	case 11:
		cout << "November" << "/" << year<< endl;
		break;
	case 12:
		cout << "December" << "/" << year<< endl;
		break;
	}
	cout << "Sun " << setw(5) << "Mon " << setw(5) << "Tue " << setw(5) << "Wed " << setw(5) << "Thu " << setw(5) << "Fri " << setw(5) << "Sat " << endl;
	int days = numberdays(year, month);
	int day1 = weekdaycode(year, month, 1);
	if(day1 == 0){
		cout << " " << setw(30);
		cout << "1" << setw(5);
		cout << endl;
	}else{
		for(int t=1; t<day1; t++){
			cout << " " << setw(5);
		}
		cout  << "1" << setw(5);
	}
	for(int i=2; i<=days; i++){
		if(weekdaycode(year, month, i) == 0){
			cout << i<< endl;
		}else{
			cout << i << setw(5);
		}
	}
	cout << endl;
}

void printyear(int year){
	for(int i=1; i<=12; i++){
		printmonth(year, i);
	}
}

//int main(){
//	int year;
//	cout << "Insert year";
//	cin >> year;
//	printyear(year);
//}

//3.7
long factorial_ite(int t){
	long result=1;
	for(int i=1; i<=t; i++){
		result= result*i;
	}
	return result;
}

long factorial_rec(int t){
	long result;
	if(t<=1) return 1;
	result=t* factorial_rec(t-1);
	return result;
}

//int main(){
//	cout << "Introduzir número";
//	int t;
//	cin >> t;
//	cout << factorial_rec(t);
//}

//3.8

int euclid_rec(int m, int n){
	if(m%n == 0) return n;
	else{
		return euclid_rec(n, m%n);
	}
}

//int main(){
//	int n, m;
//	cout << "Insert m";
//	cin >> m;
//	cout << "Insert n";
//	cin >> n;
//	cout << euclid_rec(m,n);
//}

//3.9
double func(double x){
	double y;
	y= sqrt(4-x*x);
	return y;
}

double integrateTR(double func(double), double a, double b, double n){
	double h= (b-a)/n;
	double integral=0;
	for(int i=1; i<n; i++){
		double t;
		t= (h/2)*(func(a+(i-1)*h) + func(a+i*h));
		integral+= t;
	}
	return integral;
}

int main(){
	double a, b, n, total;
	cout << "Introduzir inicio do intervalo:";
	cin >> a;
	cout << "Introduzir fim do intervalo:";
	cin >> b;
	cout << "Introduzir número de regiões:";
	cin >> n;
	total = integrateTR(func, a, b, n);
	cout << "Área total= " << total << endl;
}
