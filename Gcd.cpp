#include <iostream>

using namespace std;

class Gcd {
private:
    int num1;
    int num2;
    int result;

public:
    Gcd(int n1, int n2) {
        num1 = n1;
        num2 = n2;
        result = 1;
    }

    int findGcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void calculate() {
        result = findGcd(num1, num2);
    }

    void printResult() {
        cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << result << endl;
    }
};

int main() {
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    Gcd gcd(n1, n2);
    gcd.calculate();
    gcd.printResult();

}
