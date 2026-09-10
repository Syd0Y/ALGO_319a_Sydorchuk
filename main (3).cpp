#include <iostream>

using namespace std;

int main() {
    double a, b;
    
    cout << "Введіть два ненульові числа (a і b): ";
    cin >> a >> b;
    
    double G2 = ((a + b)/2)*((a + b)/2) ;
    
    cout << "Квадрат середнього геометричного G^2 = " << G2 << endl;
    
    return 0;
}
