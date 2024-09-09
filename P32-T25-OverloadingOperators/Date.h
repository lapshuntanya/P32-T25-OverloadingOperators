#pragma once
#include <iostream>
using namespace std;

class Date
{
	int year;
	int month;
	int day;

public:
	//--------- КОНСТРУКТОРИ та ДЕСТРУКТОРИ ---------
	Date(); // За замовчуванням - поточна дата
	Date(int year , int month=1, int day=1); // З параметрами - задана дата	 

	bool isLeapYear()const; //Перевірка на високосний рік
	int monthDays()const; //Кількість днів за місяцем
	void nextDate(); // Наступна дата
	void prevDate(); // Попередня дата

	void showDate()const;
	bool valid()const; // Перевірка дати на коректність

	//--------- АКСЕСОРИ ---------
	void setYear(int year);
	int getYear()const;
	void setMonth(int month);
	int getMonth()const;
	void setDay(int day);
	int getDay()const;

	//--------- ОПЕРАТОРИ ІНКРЕМЕНТУ ТА ДЕКРЕМЕНТУ ---------
	Date& operator --(); // Префіксна форма декременту
	Date operator --(int); // Постфіксна форма декременту
	Date& operator ++ (); // Префіксна форма інкременту
	Date operator ++ (int); // Постфіксна форма інкременту 

};

