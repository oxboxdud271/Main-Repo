#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int math(int x)
{
    int steps;
    std::list<int> numnum;
    while(x != 1) {
        cout << x << endl;
        if(x % 2 == 0) {
            x = x/2;
            steps++;
        } else if(x % 2 == 1) {
            x = (3*x)+1;
            steps++;
        }
    }
    cout << "1" << endl;
    cout << numnum.size();
    return steps;
}

int main()
{
    int x;
    cout << "Enter a number --> ";
    cin >> x;
    cout << "It has taken " << math(x) << " steps to get to one" << endl;
    cout << "It always equals one" << endl << "Press Enter to Exit";
    cin >> x;

    return 0;
}