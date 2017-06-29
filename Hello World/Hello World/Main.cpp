#include <iostream>
#ifndef CUINT
	#define CUINT int unsigned const
#endif

class Hello {
	public:
		Hello(char *const string[]);
	private:
		int number;
};

Hello::Hello(char *const string[]) {
	std::cout << *string;
}

int main(int argc, char argv[]) {
	char *const test[] = { "Hello World!!!!!" };
	Hello class1(test);
	return 0;
}