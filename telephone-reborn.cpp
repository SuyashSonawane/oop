#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class contact
{
public:
    char name[10];
    unsigned long int number;
    void display()
    {
        cout << "\nName: " << name << "\nNumber: " << number << endl;
    }
    void in()
    {
        cout << "Enter first name of the contact\n>>";
        cin >> name;
        cout << "Enter number of the contact\n>>";
        cin >> number;
    }
};

class Directory
{
    int total = 0;
    fstream file;

public:
    Directory()
    {
    }
    void add()
    {
        file.open("telephone-data.txt", ios::out | ios::app | ios::binary);
        contact a;
        a.in();
        file.write((char *)&a, sizeof(a));
        cout << "Contact saved!!\n";
        file.close();
        total++;
    }
    void show()
    {
        int i = 0;
        file.open("telephone-data.txt", ios::in | ios::binary);
        contact temp;
        while (file)
        {
            file.read((char *)&temp, sizeof(temp));
            if (file)
                temp.display();
        }
        file.close();
    }
    void search()
    {
        file.open("telephone-data.txt", ios::in | ios::binary);
        contact target;
        int uinput;
        cout << "Search using \n1.name\n2.number>>";
        cin >> uinput;
        switch (uinput)
        {
        case 1:
        {
            cout << "Enter name to find\n>>";
            cin >> target.name;
            contact temp;
            while (file)
            {
                file.read((char *)&temp, sizeof(temp));

                if (!strcmp(temp.name, target.name))
                {
                    cout << "Contact found\n";
                    temp.display();
                    return;
                }
            }
            cout << "contact not found";
            return;
        }
        break;
        case 2:
        {
            cout << "Enter number to find\n>>";
            cin >> target.number;
            contact temp;
            while (file)
            {
                file.read((char *)&temp, sizeof(temp));
                if (file)
                {
                    if (temp.number == target.number)
                    {
                        cout << "Contact found\n";
                        temp.display();
                        return;
                    }
                }
            }
            cout << "contact not found";
            return;
        }
        break;

        default:
            cout << "Enter correct options";
            break;
        }
    }
    void update()
    {
        file.open("telephone-data.txt", ios::in | ios::binary);
        contact target;
        int uinput;
        cout << "\nUpdate using \n1.name\n2.number\n>>";
        cin >> uinput;
        switch (uinput)
        {
        case 1:
        {
            cout << "Enter name to update\n>>";
            cin >> target.name;
            contact temp;
            int i = -1;
            while (file)
            {
                file.read((char *)&temp, sizeof(temp));
                if (file)
                {
                    if (!strcmp(temp.name, target.name))
                    {
                        cout << "Contact found\nSaved version";
                        temp.display();
                        file.seekp(i * sizeof(contact), ios::beg);
                        contact n;
                        n.in();
                        file.write((char *)&n, sizeof(contact));
                        cout << "Changes saved\n";

                        return;
                    }
                    else
                    {
                        i++;
                        cout << i;
                    }
                }
            }
            cout << "contact not found";
            return;
        }
        break;
        case 2:
        {
            cout << "Enter number to find\n>>";
            cin >> target.number;
            contact temp;
            while (file)
            {
                file.read((char *)&temp, sizeof(temp));
                if (file)
                {
                    if (temp.number == target.number)
                    {
                        cout << "Contact found\nSaved version";
                        temp.display();
                        file.seekp(file.tellg() - sizeof(contact), ios::beg);
                        temp.in();
                        file.write((char *)&temp, sizeof(temp));
                        cout << "Changes saved\n";
                        return;
                    }
                }
            }
            cout << "contact not found";
            return;
        }
        break;

        default:
            cout << "Enter correct options";
            break;
        }
    }
    ~Directory()
    {
    }
};

int main()
{
    Directory d;
    // d.add();
    d.show();
    d.search();
    // d.update();
    // d.show();
}
