
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "enter the value : ";
    cin >> a;
    cout << "enter the value : ";
    cin >> b;

    swap(&a, &b);
    cout << a << " " << b << " " << endl;
}
