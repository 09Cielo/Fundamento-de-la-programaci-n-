#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int combinatorio(int n, int r) {
    int c = factorial(n) / (factorial(r) * factorial(n - r));
    return c;
}

int main() {
    int n, r;
    
    cout << "Ingrese n y r: ";
    cin >> n >> r;

    cout << "Combinatorio C(" << n << "," << r << ") = " << combinatorio(n, r) << endl;
    return 0;
}
