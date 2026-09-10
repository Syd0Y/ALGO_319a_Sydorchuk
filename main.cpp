#include <iostream>

using namespace std;

int main() {
    double a, b;
    
    cout << "Введіть сторону a: ";
    cin >> a;
    cout << "Введіть сторону b: ";
    cin >> b;
    
    double S = a * b;
    double P = 2 * (a + b);
    
    cout << "Площа S = " << S << endl;
    cout << "Периметр P = " << P << endl;
    
    return 0;
}
