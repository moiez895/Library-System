#include<iostream>
#include<string>
using namespace std;

int main() {
	int choice;
	string bookName;
	cout << "Welcome" << endl;
	cout << "Borrow a book \n";
	cout << "Return a book \n";
	cout << "Enter your choice: " << endl;
	cin >> choice;

	if (choice == 1) {
		cout << "Which book you wish to borrow: " << endl;
		cin >> bookName;
		
		cout << "Thankyou! for trusting us" << endl;
		cout << "Please return the book on time\n";
	}
	else {
		int days;
		cout << "How long have you had this book since the date you borrowed it: " << endl;
		cin >> days;
		if (days != 0) {
			cout << "You will be " << days << " $ fined!"<<endl;
			cout << "Return the book ASAP!"<< endl;
			cout << "You have kept this book for " << days << " days return it asap else the fine will keep on increasing!";
	  }
		else {
			cout << "Thankyou! Do visit us again :) ";
		}
	}
}