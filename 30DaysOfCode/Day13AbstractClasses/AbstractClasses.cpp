#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
class Book {
protected:
    string title;
    string author;
public:
    Book(string t, string a) {
        title = t;
        author = a;
    }
    virtual void display() = 0;
    //Notice that display has no definition; this has been replaced by =0, which makes it a pure virtual function. 
    //Classes that contain at least one pure virtual function are known as abstract base classes.
    //Abstract base classes cannot be used to instantiate objects.
};
//Write yout MyBook class here
class MyBook : Book {
public:
    int price;
    MyBook(string t, string a, int p) : Book(t, a)
    {
        this->title = t;
        this->author = a;
        this->price = p;
    }
    void display() 
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin>>price;
    MyBook novel(title, author, price);
    novel.display();
	return 0;
}
