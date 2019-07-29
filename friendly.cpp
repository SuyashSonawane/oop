#include<iostream>
using namespace std;
class DB;

// 1 feet = 0.3048 meter

class DM{
    float meter,centimeter;
    public:
    DM(){
        cout<<"Enter meter value: ";
        cin>>meter;
        cout<<"Enter centimeter value: ";
        cin >>centimeter;
    }
    friend float add(DM,DB);
};
class DB{
     float feet,inches;
    public:
    DB(){
        cout<<"Enter feet value: ";
        cin>>feet;
        cout<<"Enter inches value: ";
        cin >>inches;
    }
    friend float add(DM,DB);
};

 float add(DM obj1,DB obj2){
     int n;
     float ans_main,ans_secondary;
     cout<<"Do you want output in 1:Feet\n2:Meter\n=>";
     cin>>n;
     switch (n)
     {
     case 1:
         /* code */
         ans_main=(obj1.meter*3.28084)+obj2.feet;
         ans_secondary=(obj1.centimeter*0.393701)+obj2.inches;
         cout<<ans_main<<" feet and "<<ans_secondary<<" inches"<<endl;
         break;
     case 2:
    ans_main=(obj1.meter)+obj2.feet*0.3048;
         ans_secondary=(obj1.centimeter)+obj2.inches*2.54;
         cout<<ans_main<<" meter and "<<ans_secondary<<" centimeter" <<endl;
        break;
     default:
         break;
     }
 }

int main(){
    DM m;
    DB b;
    add(m,b);



    return 0;
}