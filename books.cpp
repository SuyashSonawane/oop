#include<iostream>
using namespace std;


class Books{
    public:
    static int stock;
    string author , title , publisher;
    int price;
    Books(){
        author=title=publisher="null";
        price=stock=0;
    }
   

};

class Library{
    Books books[100];
    int total;
    public:
    Library(int n){
        int i=0;
        string author , title , publisher;
        int price,stock;
        total=n;
        while (i<n)
        {
            cout<<"Enter title of the book : ";
            cin >> title;
            cout<<"\nEnter author of the book : ";
            cin >> author;
            cout<<"\nEnter publisher of the book : ";
            cin >> publisher;
            cout<<"\nEnter price of the book : ";
            cin >> price;
            cout<<"\nEnter stock of the book : ";
            cin >> stock;
            addBook
        }
        

    }



    void addBook(string Title,string Author,string Publisher,int Price,int Stock,int i){
        books[i].author=Author;
        books[i].title=Title;
        books[i].price=Price;
        books[i].stock=Stock;
        books[i].publisher=Publisher;
    }
};

int main(){


    return 0;
}