#pragma once
#ifndef _STUDENT_
#define _STUDENT_
#include <string>
#include <iostream>
using namespace std;
class Student
{
private:
	string cnp, nume;
	double notalab, notaex;
	int nrabs;
public:
	Student(string cnp="", string nume = "", double notalab = 0, double notaex = 0, int nrabs = 0);
	Student(const Student& param);
	~Student();
	Student& operator=(const Student& param);
	bool operator==(const Student& param);
	bool operator!=(const Student& param);
	bool operator<(const Student& param) const;
	istream& operator>>(istream& is);
	ostream& operator<<(ostream& os) const;
	friend class ComparaNota;
	//friend bool operator<(const Student& param1, const Student& param2);
	friend int main();
	
};
class ComparaNota {
public :
	bool operator()(const Student s1, const Student s2) const {
		if (s1.notaex < s2.notaex) {
			return true;
		}
		return false;
	 }
};
#endif

