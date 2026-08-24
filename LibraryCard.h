//class declaration for LibraryCard class
// function declarations for the LibraryCard class
//Data members for the LibraryCard class
#ifndef LIBRARY_CARD_H
#define LIBRARY_CARD_H

#include<string>
using namespace std;
class LibraryCard {
public:
	LibraryCard(string cardholderName);
	void checkOutBook();
	void returnBook();
	string getCardholderName() const;
	int getBooksCheckOut() const;
private:
	string cardholderName;
	int booksCheckOut;
};


#endif