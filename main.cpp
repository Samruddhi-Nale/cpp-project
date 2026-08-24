#include<iostream>
#include<string>
#include "LibraryCard.h"
using namespace std;

void printLibraryCardInfo(const LibraryCard& card);

int main() {
	LibraryCard aliceCard("Alice Johnson");
	LibraryCard bobCard("Bob Smith");
	
	aliceCard.checkOutBook();
	aliceCard.checkOutBook();
	bobCard.checkOutBook();
	
	printLibraryCardInfo(aliceCard);
	printLibraryCardInfo(bobCard);

	cout << "Alice returns a book..." << endl;
	aliceCard.returnBook();
	printLibraryCardInfo(aliceCard);

	bobCard.returnBook();
	bobCard.returnBook(); //should trigger a warning!
	return 0;
}
void printLibraryCardInfo(const LibraryCard& card) {
	cout << card.getCardholderName() << " has " 
		 << card.getBooksCheckOut() << " books checked out." 
		 << endl;
}