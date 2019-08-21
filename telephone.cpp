#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Contact
{
public:
    long unsigned int phone_number;
    char name[10];

    Contact()
    {
        phone_number = NULL;
        strcpy(name, "");
    }
    Contact(int ph, char n[])
    {
        phone_number = ph;
        strcpy(name, n);
    }
    void set()
    {
        cout << "Enter the name \n>>";
        cin >> name;
        cout << "Enter phone number\n>>";
        cin >> phone_number;
    }
    char *getName() { return name; }
    int getPhone() { return phone_number; }
};
// class Directory
// {
//     int total = 0;

// public:
void add()
{
    Contact c;
    fstream file("telephonefile", ios::out);
    c.set();
    file.write((char *)&c, sizeof(c));
    file.close();
}
void show()
{
    Contact temp;
    int k = 0;
    fstream file;
    file.open("telephone.txt", ios::in | ios::out);
    file.seekg(0, ios::beg);
    while (k != 1)
    {
        file.read((char *)&temp, sizeof(Contact));
        cout << "\nName::" << temp.name;
        cout << "\nPhone number :: " << temp.getPhone();
        k++;
    }
    file.close();
}
// };

int main()
{
    // Directory d;
    add();
    show();
    return 0;
}