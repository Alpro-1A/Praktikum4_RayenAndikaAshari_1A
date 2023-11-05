#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "-----------------------------------\n";
    cout << "     Membuat Piramida Bintang      \n";
    cout << "-----------------------------------\n\n";
    cout << " Tentukan Tinggi Piramida: ";
    cin >> a;
    cout << "\n";
    cout << "-----------------------------------\n\n";

    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= a - i; j++){
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*" << "   ";
    }
    cout << "\n";
}
    cout << "\n";
    cout << "-----------------------------------\n\n";
return 0;
}
