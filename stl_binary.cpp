#include<iostream>
#include<list>

using namespace std;

int main()
{
    char ans='y';
    list<int>l1;
    list<int>l2;
    list<int>l3;
list <int> :: iterator it; 

do{
    int bit;
    cout<<"Enter first binary number bit by bit\n";
    cin>>bit;
    if(bit==1||bit==0)
        l1.push_back(bit);
    else 
    {
        cout<<"Enter 1 or 0 \a\n";
        continue;
    }
    cout<<"Do you want to continue(y/n)\n>>";
    cin>>ans;
    

}while(ans=='y');
for(it = l1.begin(); it != l1.end(); ++it) 
        cout  << *it; 
    cout << '\n'; 
do{
    int bit;
    cout<<"Enter second binary number bit by bit\n";
    cin>>bit;
    if(bit==1||bit==0)
        l2.push_back(bit);
    else 
    {
        cout<<"Enter 1 or 0 \a\n";
        continue;
    }
    cout<<"Do you want to continue(y/n)\n>>";
    cin>>ans;
    

}while(ans=='y');
if(l1.size()<8)
{
    for(int i=l1.size();i<8;i++)
        l1.push_front(0);
}

if(l2.size()<8)
{
    for(int i=l2.size();i<8;i++)
        l2.push_front(0);
}
for(it = l2.begin(); it != l2.end(); ++it) 
        cout  << *it; 
    cout << '\n'; 
int n=8;
int sum ,carry=0;
while(n--){
    sum=(l1.back()+l2.back()+carry)%2;
    carry=(l1.back()+l2.back())/2;
    l3.push_front(sum);
    l1.pop_back();
    l2.pop_back();
}

cout<<"Addition >> \n";
for(it = l3.begin(); it != l3.end(); ++it) 
        cout  << *it; 
    cout << '\n'; 

    return 0;
}