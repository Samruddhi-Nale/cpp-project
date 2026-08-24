#include "LibraryCard.h"
#include<iostream>
using namespace std;

LibraryCard::LibraryCard(string cardholderName) {
	this->cardholderName = cardholderName;
	booksCheckOut = 0;
}

void LibraryCard::checkOutBook() {
	booksCheckOut++;
}

void LibraryCard::returnBook() {
	if (booksCheckOut > 0) {
		booksCheckOut--;
	}
	else {
		cout << "No books to return";
	}
}

string LibraryCard::getCardholderName() const {
	return cardholderName;
}

int LibraryCard::getBooksCheckOut() const {
	return booksCheckOut;
}