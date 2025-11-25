#include <iostream>
using namespace std;

// Función recursiva que imprime la secuencia
void fibonacci(int n, int a = 0, int b = 1, int count = 0) {
    if (count == n) return; // caso base: ya imprimimos n números

    cout << a << " ";       // imprimimos el número actual
    fibonacci(n, b, a + b, count + 1); // llamada recursiva
}

int main() {
    int n;
    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    fibonacci(n); // inicializamos la secuencia
    cout << endl;
    return 0;
}
