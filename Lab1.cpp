#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    float dx;
    cout << "Введіть крок інтегрування: ";
    cin >> dx;
    float a = 1;
    float int_func = 0;
    for (float x = -1; x <= a; x += dx)
    {
        int_func += abs(dx * cos(x));
        cout << int_func << " " << "if x=" << x << endl; //виводить значення інтегралу залежно від кроку інтегрування та значення х

    }
    return 0;
}






