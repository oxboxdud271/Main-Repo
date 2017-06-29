#include "classfun.h"
#include <iostream>

const char *types[3] = { "MALE", "FEMALE", "NULL" };
std::map<const int, Employee*> employeelist;

void Corperate::GetInfo() {
	using namespace std;
	cout << "CORPERATE FORCE" << endl;
	cout << "Employee Name: " << cname << endl;
	cout << "Employee Age: " << cage << endl;
	cout << "Employee Sex: " << csex << endl;
	cout << "Position: " << cposition << endl;
}

void Labour::GetInfo() {
	using namespace std;
	cout << "LABOUR FORCE" << endl;
	cout << "Employee Name: " << cname << endl;
	cout << "Employee Age: " << cage << endl;
	cout << "Employee Sex: " << csex << endl;
	cout << "Position: " << cposition << endl;
}

Corperate::Corperate(const std::string &positon, const std::string &name, const int age, sexlist sex) {
	cposition = positon;
	cname = name;
	cage = age;
	csex = types[sex];
}

Labour::Labour(const std::string &positon, const std::string &name, const int age, sexlist sex) {
	cposition = positon;
	cname = name;
	cage = age;
	csex = types[sex];
}

int addEmployee(Employee *emp, std::map<const int, Employee*> &emplist, int itr) {
	Employee *ptr;
	ptr = emp;
	emplist[itr] = ptr;
	return 1;
}

Employee *EmployeeFactory::createEmployee(std::string status, std::string position, const std::string &name , const int age, sexlist sex) {
	if (status == "Corperate") {
		return new Corperate(position, name, age, sex);
	}
	if (status == "Labour") {
		return new Labour(position, name, age, sex);
	}
	return NULL;
}

