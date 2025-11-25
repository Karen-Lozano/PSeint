#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;  // caso base
    if (n == 1) return 1;  // caso base
    return fibonacci(n - 1) + fibonacci(n - 2); // llamada recursiva
}

int main() {
    int n;
    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
