#include <iostream>

class NumberPrint {
    public:
        NumberPrint(int num);
        getNumber();
        friend NumberPrint operator+ (const NumberPrint& obj, const NumberPrint& obj1);

    private:
        int number;
};

NumberPrint::NumberPrint(int num) {
    number = num;
}

NumberPrint::getNumber() {
    return number;
}

NumberPrint operator+ (const NumberPrint& obj, const NumberPrint& obj1) {
    int np;
    np = obj.number + obj1.number;
    return np;
}

int main() {
    int dummy;
    int add;
    NumberPrint num1(10);
    NumberPrint num2(20);
    add = num1.getNumber() + num2.getNumber();

    std::cout << add;
    std::cin >> dummy;
    return 0;
}