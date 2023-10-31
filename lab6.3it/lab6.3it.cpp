#include <iostream>
#include <iomanip>
#include <time.h> 

using namespace std;

template <typename T>
T swapElements(T* r, T size) {
    for (int i = 1; i < size; i += 2) {
        if (i + 1 < size) {
            T temp = r[i];
            r[i] = r[i + 1];
            r[i + 1] = temp;
        }
    }
    return 0;
}
void Create(int* r, const int size)
{
    for (int i = 0; i < size; i++)
        r[i] = rand() / 100;
}
void Print(int* r, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << r[i] << " ";
    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int r[n];
    Create(r, n);
    Print(r, n);
    swapElements(r, n);
    Print(r, n);
    return 0;
}
