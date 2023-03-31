#include <iostream>
using namespace std;
// array integers to hold values
int arr[20];
int cmp_count = 0;
int n;
void input() {
    while (true) 
    {
        cout << "Masukan panjang array :";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\n Masukan penjnag array 20";
    }
}


