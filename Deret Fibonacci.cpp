#include <iostream>
using namespace std;

int main()
{
  int n, n1 = 0, n2 = 1, fn = 0;

  cout << "---------------------------------\n";
  cout << "    Program Deret Fibonacci      \n";
  cout << "---------------------------------\n\n";

    cout << "Tentukan Jumlah Deret Fibonacci: ";
    cin >> n;
    cout << "\n";
    cout << "---------------------------------\n\n";
    for(int i = 1; i <= n; i++) {
	    if(i == 1) {
            cout << n1 << " ";
        }
        if(i == 2) {
            cout << n2 << " ";
        }
    	fn = n1 + n2;
   	 	n1 = n2;
    	n2 = fn;
    	cout << fn << " ";
    }
    cout << "\n\n";
    cout << "---------------------------------\n\n";

  cout << endl;
  return 0;
}
