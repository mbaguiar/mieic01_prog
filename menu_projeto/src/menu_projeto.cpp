//============================================================================
// Name        : menu_projeto.cpp
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

long factorial_ite(int t){
	long result=1;
	for(int i=1; i<=t; i++){
		result= result*i;
	}
	return result;
}

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

bool isPrime(int prime){
	bool result = true;
	for(int i=2; i<=sqrt(prime); i++){
		if(prime%i == 0){
			result= false;
		}
	}
	return result;
}

void menucalendario(){
	bool end= false;
	cout << "1. Calcular dia da semana a partir de uma data" << endl << "2. Imprimir mes" << endl << "3. Imprimir ano" << endl << "4. Volar" << endl;
	do{
		int n;
		cout << "Selecionar opção:";
		cin >> n;
		switch(n){
		case 1:
			int year, month, day;
			cout << "Introduzir ano, mes, dia:";
			cin >> year >> month >> day;
			weekday(year,month,day);
			cout << endl;
			break;
		case 2:
			cout << "Introduzir ano, mes";
			cin >> year >> month;
			printmonth(year,month);
			cout << endl;
			break;
		case 3:
			cout << "Introduzir ano";
			cin >> year;
			printyear(year);
			cout << endl;
			break;
		case 4:
			end=true;
			break;
		}
	}while(!end);
}

void menu() {
	bool end= false;
	cout << "1. Calcular factorial" << endl << "2. Calendário" << endl << "3. Descobrir se um número é primo" << endl << "4. Sair" << endl;
	do{
			int n;
			cout << "Selecionar opção:";
			cin >> n;
			switch(n){
			case 1:
				int t;
				cout << "Intruduzir número:";
				cin >> t;
				cout << factorial_ite(t) << endl;
				break;
			case 2:
				menucalendario();
				break;
			case 3:
				int n;
				cout << "Introduzir número:";
				cin >> n;
				cout << isPrime(n) << endl;
				break;
			case 4:
				end=true;
			}
	}while(!end);
}

int main(){
	menu();
}
