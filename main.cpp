#include <iostream>
#include <math.h>

int main()
{
    using namespace std;
    double a, b, c;
    cout << "Quadratic Equation Solver\nVersion 1.0" << endl;
    cout << "Please enter the quadratic equation in the form ax^2 + bx + c = 0." << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    double result1, result2;
    result1 = ((-1 * b) + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    result2 = ((-1 * b) - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    cout << "The results are: " << result1 << " and " << result2 << endl;
    cout << "Note: Accuracy is not guaranteed and I am not responsible for any errors that may occur.";
}