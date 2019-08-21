#include <iostream>
using namespace std;

template <class T>
void Sort(T a[10], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
}

int main()
{
    int n;
    cout << "How many values do you want to sort for integer";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Sort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "How many values do you want to sort for float";
    cin >> n;
    float b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    Sort(b, n);
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    return 0;
}