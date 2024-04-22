#include <iostream>

using namespace std;

class Fact {
private:
    int number;
    int result;

public:
    Fact(int num) {
        number = num;
        result = 1;
    }

    void calculate() {
        for (int i = 1; i <= number; ++i) {
            result *= i;
        }
    }

    void printResult() {
        cout << "Factorial of " << number << " is: " << result << endl;
    }
};

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    Fact fact(n);
    fact.calculate();
    fact.printResult();

}
