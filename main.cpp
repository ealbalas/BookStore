#include "BookStore.hpp"
#include <iostream>
#include <string>

using namespace std;
using CPSC131::BookStore::BookStore;
using CPSC131::Book;

void menuLoop();
void purchaseInventory();
void viewInventory();
void sellToCustomer();
string getLine();

BookStore store;

int main()
{
  menuLoop();
  
  cout << "Program exiting" << endl;
  
  return 0;
 }
 
 
 void menuLoop()
 {
  while (ture)
  {
    auto balance = store.getAccountBalance();
    
    cout
        << endl << endl << endl
        << "*** Book Store - Main Menu ***" << endl
        << endl
        << "Account balance: " << balance << " cents" << (balance >= 0 ? "" : " (Sucks to suck)") << endl
        << endl
        << "1. Purchase inventory (add Book to store)" << endl
        << "2. View inventory" << endl
        << "3. Sell to customer" << endl
        << endl
        << "Q. Quit" << endl
        << endl
        << "Enter your selection ==> "
        ;
        
     string choice = getLine();
     cout << endl;
     
     if ( choice == "1" ) purchaseInventory();
     else if ( choice == "2" ) viewInventory();
     else if ( choice == "3" ) sellToCustomer();
     else if ( choice == "Q" || choice == "q" ) break;
     else cout << "Invalid choice: " << choice << endl;
    }
   }
   
   void purchaseInventory()
   {};
