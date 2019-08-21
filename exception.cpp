#include <iostream>

using namespace std;

void check()
{
    int age, income;
    string city;
    char answer;
    try
    {
        cout << "Enter age\n>>";
        cin >> age;
        if (age > 55 || age < 18)
            throw(age);
    }
    catch (int)
    {
        cout << "Age is not in bound\n";
        return;
    }
    try
    {
        cout << "Enter income\n>>";
        cin >> income;
        if (income > 100000 || income < 50000)
            throw(income);
    }
    catch (int)
    {
        cout << "Income is not in bound\n";
        return;
    }
    try
    {
        cout << "Enter city\n>>";
        cin >> city;
        if (!city.compare("mumbai") || !city.compare("banglore") || !city.compare("chennia"))
            throw(city);
    }
    catch (string)
    {
        cout << "City is not correct\n";
        return;
    }
    try
    {
        cout << "Do you have 4 wheeler(y/n)\n>>";
        cin >> answer;
        if (answer == 'n')
            throw(answer);
    }
    catch (string)
    {
        cout << "You need to have 4 wheeler to meet the conditions\n";
        return;
    }
}

int main()
{
    check();

    return 0;
}