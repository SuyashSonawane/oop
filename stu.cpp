#include<iostream>
using namespace std;

class Student{
	public:
	int roll_no,ph_no,lic_no,class_no;
	string name,address,blood_grp;
	char div;
	Student(){
		roll_no=ph_no=lic_no=class_no=0;
		div='n';
		name=address=blood_grp="null";

	}
	Student(int r,int p,int l, int c,string n,string a,string bg,char d){
		roll_no=r;
		ph_no=p;
		lic_no=l;
		class_no=c;
		div=d;
		name=n;
		address=a;
		blood_grp=bg;
	}
	Student(Student &obj){
		roll_no=obj.roll_no;
		ph_no=obj.ph_no;
		lic_no=obj.lic_no;
		class_no=obj.class_no;
		div=obj.div;
		name=obj.name;
		address=obj.address;
		blood_grp=obj.blood_grp;
	}
	void copy(Student &obj){
		roll_no=obj.roll_no;
		ph_no=obj.ph_no;
		lic_no=obj.lic_no;
		class_no=obj.class_no;
		div=obj.div;
		name=obj.name;
		address=obj.address;
		blood_grp=obj.blood_grp;
	}
};

class DataBase{
	Student *s_pointer[50];
	int number;
	// Student students[50];
	public:
	DataBase(){
		cout<<"\nEnter number of students to add\n::=>";
		cin>>number;
		getStudents(number);

	}
	void getStudents(int n){
		int r, p, l, c;
		string name, a, bg;
		char d;
		int i;
		while(i<n){
			cout<<"\nEnter name of "<<i+1<<"student\n:=> ";
			cin>>name;
			cout<<"\nEnter roll number of "<<i+1<<"student\n:=> ";
			cin>>r;
			cout<<"\nEnter phone number of "<<i+1<<"student\n:=> ";
			cin>>p;
			cout<<"\nEnter licence number  of "<<i+1<<"student\n:=> ";
			cin>>l;
			cout<<"\nEnter address of "<<i+1<<"student\n:=> ";
			cin>>a;
			cout<<"\nEnter class number of "<<i+1<<"student\n:=> ";
			cin>>c;
			cout<<"\nEnter division of "<<i+1<<"student\n:=> ";
			cin>>d;
			cout<<"\nEnter blood group of "<<i+1<<"student\n:=> ";
			cin>>bg;
			// Student s(r,p,l,c,name,a,bg,d);
			Student *s=new Student(r,p,l,c,name,a,bg,d);
			s_pointer[i]=s;

			// cout<<"\nEnter name of "<<i+1<<"student\n:=> ";
			// cin>>students[i].name;
			// cout<<"\nEnter roll number of "<<i+1<<"student\n:=> ";
			// cin>>students[i].roll_no;
			// cout<<"\nEnter phone number of "<<i+1<<"student\n:=> ";
			// cin>>students[i].ph_no;
			// cout<<"\nEnter licence number  of "<<i+1<<"student\n:=> ";
			// cin>>students[i].lic_no;
			// cout<<"\nEnter address of "<<i+1<<"student\n:=> ";
			// cin>>students[i].address;
			// cout<<"\nEnter class number of "<<i+1<<"student\n:=> ";
			// cin>>students[i].class_no; 
			// cout<<"\nEnter division of "<<i+1<<"student\n:=> ";
			// cin>>students[i].div;
			// cout<<"\nEnter blood group of "<<i+1<<"student\n:=> ";
			// cin>>students[i].blood_grp;


			i++;
		}

	}
	void display(){
		cout<<"Name\tRoll number\tPhone Number\t Class Number\tDivision";
		for (int i=0;i<number;i++){
			cout<<"\n"<<s_pointer[i]->name<<"\t"<<s_pointer[i]->roll_no<<"\t"<<s_pointer[i]->ph_no<<"\t"<<s_pointer[i]->class_no<<"\t"<<s_pointer[i]->div;

		}
		cout<<"\n";
	}
};






int main(){
	DataBase db;
	db.display();

	return 0;
}
