#include <iostream>
#include <cmath>
using namespace std;

int binarioDecimal(long long bin) {
    int dec = 0, i = 0;
    while (bin > 0) {
        int dig = bin % 10;
        dec += dig * pow(2, i);
        i++;
        bin /= 10;
    }
    return dec;
}

int main() {
    long long bin;
  
    cout << "Ingrese un numero binario: ";
    cin >> bin;
    cout << "Equivalente decimal: " << binarioDecimal(bin) << endl;
    return 0;
}
