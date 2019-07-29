#include<iostream>
using namespace std;

class Personal{
    string name , address,gender,dob;
    int phone_number,age;
    public:
    Personal(){
        name=address = gender= dob = "NULL";
        phone_number = age =NULL;
        
    }
    void getPersonalDate(){
        cout << "\nEnter your name =>";
        cin>>name; 
        cout << "\nEnter your age =>";
        cin>>age;
        cout << "\nEnter your gender =>";
        cin>>gender;
        cout << "\nEnter your adderss =>";
        cin>>address;
        cout << "\nEnter your Date of birth =>";
        cin>>dob;
        cout << "\nEnter your Phone Number =>";
        cin>>name;
    }
    void displayPersonal(){
        cout << "\nname =>";
        cout << name; 
        cout << "\nage =>";
        cout << age;
        cout << "\ngender =>";
        cout << gender;
        cout << "\nadderss =>";
        cout << address;
        cout << "\nDate of birth =>";
        cout << dob;
        cout << "\nPhone Number =>";
        cout << name;
    }
};
class Professional{
    string company_name , post;
    int salary,exp;
    public:
    Professional(){
        company_name=post = "NULL";
        salary=exp==NULL;
        
    }
    void getProfessionalData(){
        cout << "\nEnter your Company Name =>";
        cin>>company_name; 
        cout << "\nEnter your Post at the company =>";
        cin>>post;
        cout << "\nEnter your salary =>";
        cin>>salary;
        cout << "\nEnter your years of experience =>";
        cin>>exp;
    }
    void displayProfessional(){
        cout << "\nCompany Name =>";
        cout<<company_name; 
        cout << "\nPost at the company =>";
        cout<<post;
        cout << "\nsalary =>";
        cout<<salary;
        cout << "\nyears of experience =>";
        cout<<exp;
    }
}
;class Academics{
    string course , certifiacte,grade;
    int pointer,percentage;
    public:
    Academics(){
        course=certifiacte = grade = "NULL";
        percentage = pointer =NULL;
        
    }
    void getAcademicDate(){
        cout << "\nEnter course name =>";
        cin>>course; 
        cout << "\nEnter certificate name =>";
        cin>>certifiacte;
        cout << "\nEnter your grade =>";
        cin>>grade;
        cout << "\nEnter your percentage =>";
        cin>>percentage;
        cout << "\nEnter your pointer =>";
        cin>>pointer;
    }
    void displayAcademic(){
        cout << "\ncourse name =>";
        cout<<course; 
        cout << "\ncertificate name =>";
        cout<<certifiacte;
        cout << "\ngrade =>";
        cout<<grade;
        cout << "\npercentage =>";
        cout<<percentage;
        cout << "\npointer =>";
        cout<<pointer;
    }
};
class Employee : public Academics,public Personal,public Professional{
    public:Employee(){
        // getPersonalDate();
        // getProfessionalData();
        // getAcademicDate();
    }
    void display(){
        cout<<"\n----------------------\n";
        cout<<"\nDisplaying Personal INfo\n";
        displayPersonal();
        cout<<"\n----------------------\n";
        cout<<"\nDisplaying Professional INfo\n";
        displayProfessional();
        cout<<"\n----------------------\n";
        cout<<"\nDisplaying Academics INfo\n";
        displayAcademic();
    }
};



int main(){
    Employee e;
    e.display();
    return 0;
}