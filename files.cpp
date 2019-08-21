#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char a;

    ofstream file("file.txt");
    cout << "Enter the content for the file($ to stop)\n";
    a = getchar();
    while (a != '$')
    {
        file << a;
        a = getchar();
    }
    cout << "Data written to file\n";
    file.close();
    ifstream file1("file.txt");
    cout << "\nDisplaying contents from file\n";
    while (!file1.eof())
    {
        a = file1.get();
        if (a != '$')
            cout << a;
    }
    return 0;
}