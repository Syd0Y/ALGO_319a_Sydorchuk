//Дано сторони прямокутника a і b. Знайти його площу S = a · b і периметр P = 2 · (a + b).

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

//Дано змінні A, B, C. Змінити їх значення, перемістивши вміст A в C, C - в B, B - в A, і вивести нові значення змінних A, B, C.

#include <iostream>

using namespace std;

int main() {
    double A, B, C;
    
    cout << "Введіть значення A, B, C через пробіл: ";
    cin >> A >> B >> C;
    
    // Циклічний зсув: A -> B, B -> C, C -> A
    double temp = A; // Зберігаємо початкове значення A 
    A = C;           // A отримує значення C
    C = B;           // C отримує значення B
    B = temp;        // B отримує початкове значення A
    
    cout << "Нові значення:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    
    return 0;
}

// Дано два ненульових числа. Знайти квадрат їх середнього геометричного: G2 = a·b.

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