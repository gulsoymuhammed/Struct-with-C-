#include<iostream>
using namespace std;

struct book
{
	int ISBN;
	string name;
	string author;
	int price;

};

void displayBook(book n);
book getBookMembers(book n);
void displayBook(book arr[]);

int main() {
	book b1;
	/*
	b1.ISBN = 123456789;
	b1.name = "EXAMPLE1";
	b1.author = "Muhammed Gülsoy";
	b1.price = 100;*/
	cout << "Enter ISBN of the book" << endl;
	cin >> b1.ISBN;
	cout << "Enter name of the book" << endl;
	cin >> b1.name;
	cout << "Enter author of the book" << endl;
	cin >> b1.author;
	cout << "Enter price of the book" << endl;
	cin >> b1.price;

	book b2 = b1;
	book b3[3] = {
			{123,"firstbook","John",45},
			{456,"secondbook","Peter",87 },
			{789,"thirdbook","Paul",95} 
	};

	if (b2.name == b1.name) {
		cout << "Their name are same" << endl;
	}
	displayBook(b2);
	getBookMembers(b1);
	displayBook(b3);

	return 0;
}

void displayBook(book n)
{
	cout << "\nDisplay Information of book" << endl;
	cout << "ISBN: " << n.ISBN << endl;
	cout << "NAME: " << n.name << endl;
	cout << "AUTHOR: " << n.author << endl;
	cout << "PRICE: " << n.price << endl;

}

book getBookMembers(book n)
{
	cout << "Enter ISBN of the book" << endl;
	cin >> n.ISBN;
	cout << "Enter name of the book" << endl;
	cin.ignore();
	getline(cin, n.name);
	cout << "Enter author of the book" << endl;
	cin.ignore();
	getline(cin, n.name);
	cout << "Enter price of the book" << endl;
	cin >> n.price;


	return n;
}

void displayBook(book arr[])
{
	cout << "\nDisplay Information of book" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout<<i+1 << ". ISBN: " << arr[i].ISBN << endl;
		cout<<i+1 << ". NAME: " << arr[i].name << endl;
		cout<<i+1 << ". AUTHOR: " << arr[i].author << endl;
		cout<<i+1 << ". PRICE: " << arr[i].price << endl;
	}
	
}
