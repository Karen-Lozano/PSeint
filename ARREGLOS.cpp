#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Cuantos numeros deseas ingresar? ";
    cin >> n;

    vector<int> arr(n);

    // Leer los números
    cout << "Ingresa los numeros:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n=== Orden normal de 10 en 10 ===\n";
    for (int i = 0; i < n; i += 10) {
        for (int j = i; j < i + 10 && j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
    }

    cout << "\n=== Orden inverso de 10 en 10 (REAL) ===\n";
    int i = n - 1;

    while (i >= 0) {
        int fin = i;
        int inicio = i - 9;
        if (inicio < 0) inicio = 0;

        /// AQUÍ ESTÁ LA DIFERENCIA ? imprimimos de fin hacia inicio
        for (int j = fin; j >= inicio; j--)
            cout << arr[j] << " ";

        cout << endl;
        i -= 10;
    }

    return 0;
}
