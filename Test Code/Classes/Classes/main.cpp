#include "classfun.h"
#include <iostream>

int main() {
	EmployeeFactory *factory = new EmployeeFactory();
	Employee *john = factory->createEmployee("Labour");
	john->GetInfo();

}