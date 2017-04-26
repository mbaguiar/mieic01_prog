//============================================================================
// Name        : Part2Exs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

class Date
{
public:
	Date(unsigned int year, unsigned int month,unsigned int day);
	Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
	void setYear(unsigned int year) ;
	void setMonth(unsigned int month) ;
	void setDay(unsigned int day) ;
	void setDate(unsigned int year, unsigned int month, unsigned int day) ;
	unsigned int getYear() const;
	unsigned int getMonth() const;
	unsigned int getDay() const;
	string getDate() const; // returns the date in format "yyyy/mm/dd"
	void show() const; // shows the date on the screen in format "yyyy/mm/dd"
	bool isValid() const;
	bool isEqualTo(const Date &date);
	bool isNotEqualTo(const Date &date);
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
	int numDays() const;
};

Date::Date(unsigned int year, unsigned int month, unsigned int day){
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::Date(string yearMonthDay){
	year = stoi(yearMonthDay.substr(0,4),nullptr);
	month = stoi(yearMonthDay.substr(5,2),nullptr);
	day = stoi(yearMonthDay.substr(8,2),nullptr);
}

void Date::setYear(unsigned int year){
	this->year = year;
}

void Date::setMonth(unsigned int month){
	this->month = month;
}

void Date::setDay(unsigned int day){
	this->day = day;
}

void Date::setDate(unsigned int year, unsigned int month, unsigned int day){
	this->year = year;
	this->month = month;
	this->day = day;
}

unsigned int Date::getYear() const{
	return year;
}

unsigned int Date::getMonth() const{
	return month;
}

unsigned int Date::getDay() const{
	return day;
}

string Date::getDate() const{
	stringstream strm;
	string date;
	strm << setfill('0') << setw(4) << year <<  "/" << setw(2) << month << "/" << setw(2) << day;
	strm >> date;
	return date;
}

void Date::show() const{
	cout << getDate();
}

int Date::numDays() const{
	int days;
	switch(month){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			days = 28;
		}else days = 29;
		break;
	}
	return days;
}

bool Date::isValid() const{
	bool valid= true;
	if(month < 1 || month > 12) valid = false;
	if(month < 1 || month > numDays()) valid = false;
	return valid;
}

bool Date::isEqualTo(const Date &date){
	bool equal = true;
	if(year != date.getYear()) equal = false;
	if(month != date.getMonth()) equal = false;
	if(day != date.getDay()) equal = false;
	return equal;
}

bool Date::isNotEqualTo(const Date &date){
	bool notequal = true;
		if(year == date.getYear()) notequal = false;
		if(month == date.getMonth()) notequal = false;
		if(day == date.getDay()) notequal = false;
		return notequal;
}

int main() {
	return 0;
}
