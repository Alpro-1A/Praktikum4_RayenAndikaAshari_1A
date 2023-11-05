#include <iostream>

using namespace std;

int main()
{
    int batas,
    TotalGanjil = 0,
    TotalGenap = 0,
    TotalPrima = 0;

    cout << "-----------------------------------------------------------\n";
    cout << "         Menhitung Bilangan Ganjil, Genap, Prima           \n";
    cout << "-----------------------------------------------------------\n\n";
    cout << "Masukan Batas Bilangan : ";
    cin >> batas;
    cout << "\n";
    cout << "------------------- [ Bilangannya ] -----------------------\n\n";


    cout << "Bilangan Ganjil antara 1 dan " << batas << " adalah : " ;
    for (int a = 1 ; a <= batas ; a += 2){
        cout << a << " ";
        TotalGanjil += a;
        }
    cout << "\n\n";

    cout << "Bilangan Genap antara 1 dan " << batas << " adalah : " ;
    for (int b = 2 ; b <= batas ; b += 2){
        cout << b << " ";
        TotalGenap += b;
        }
    cout << "\n\n";

    cout << "Bilangan Prima antara 1 dan " << batas << " adalah : " ;
    for (int c = 2 ; c <= batas ; ++c){

        int Bprima = 1;
        for (int d = 2; d * d <= c; ++d){
            if (c % d == 0){
                Bprima = 0;
                break;
            }
        }
        if (Bprima == 1){
        cout << c << " ";
        TotalPrima += c;
        }
       }
    cout << "\n\n";
    cout << "--------------------- [ Jumlah ] --------------------------\n\n";

    cout << "Jumlah semua Bilangan Ganjil antara 1 dan " << batas << " adalah : " << TotalGanjil ;

    cout << "\n\n";
    cout << "Jumlah semua Bilangan Genap antara 1 dan " << batas << " adalah : " << TotalGenap ;

    cout << "\n\n";
    cout << "Jumlah semua Bilangan Prima antara 1 dan " << batas << " adalah : " << TotalPrima ;

    cout << "\n\n";
    cout << "----------------- [ Faktor-Faktor ] -----------------------\n\n";

    cout << "Faktor Bilangan Ganjil antara 1 dan " << batas << " adalah : " ;

    for (int x = 1; x <= TotalGanjil; x++) {
        if (TotalGanjil % x == 0) {
            cout << x << " ";
        }
    }
    cout << "\n\n";

    cout << "Faktor Bilangan Genap antara 1 dan " << batas << " adalah : " ;
    for (int y = 1; y <= TotalGenap; y++) {
        if (TotalGenap % y == 0) {
            cout << y << " ";
        }
    }
    cout << "\n\n";

    cout << "Faktor Bilangan Prima antara 1 dan " << batas << " adalah : " ;
    for (int z = 1; z <= TotalPrima; z++) {
        if (TotalPrima % z == 0) {
            cout << z << " ";
        }
    }
    cout << "\n\n";
    cout << "-----------------------------------------------------------\n\n";
    return 0;

}
