#include <iostream>
using namespace std;

int main() 
{
    //dereference
    int a = 10;
    int b = 6;
    int y = 20;
    int *c = &a;  // c menunjuk ke alamat a
    cout << "Alamat memori c (-> a): " << c << endl;
    cout << "Nilai dari *c: " << *c << endl;

    c = &y; // sekarang c menunjuk ke alamat y
    cout << "Alamat memori c (-> y): " << c << endl;
    cout << "Nilai dari *c: " << *c << endl;

    int &d = b; // d adalah referensi ke b
    cout << "Nilai d (referensi ke b): " << d << endl;
    cout << "Alamat memori dari d (sama dengan b): " << &d << endl;

    int f = 5;
    int g = f;
}