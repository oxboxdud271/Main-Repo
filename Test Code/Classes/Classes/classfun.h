#pragma once
#ifndef CLASSFUN_H
#define CLASSFUN_H
#endif

#include <string>
#include <map>

enum sexlist{ MALE = 0 , FEMALE, GNULL };

class Employee {
public:
	virtual void GetInfo() = 0;
protected:
	std::string cname;
	int cage;
	std::string csex;
};

class Corperate : public Employee {
public:
	Corperate(const std::string &positon, const std::string &name, const int age, sexlist sex);
	void GetInfo();
private:
	std::string cposition;
};

class Labour : public Employee {
public:
	Labour(const std::string &positon, const std::string &name, const int age, sexlist sex);
	void GetInfo();
private:
	std::string cposition;
};

class EmployeeFactory {
public:
	Employee *createEmployee(std::string status, std::string position = "N/A", const std::string &name = "N/A", const int age = 0, sexlist sex = GNULL);
};

int addEmployee(Employee *emp, std::map<const int, Employee*> &list, int itr);
