#include "BookStore.hpp"

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

namespace CPSC131::BookStore
{
    BookStore::BookStore() {}

    void BookStore::adjustAccountBalance(int adjustment)
    {
        account_balance_ += adjustment;
    }

    int BookStore::getAccountBalance()
    {
        return this->account_balance_;
    }

    DoublyLinkedList::DoublyLinkedList<Book>::Iterator BookStore::findBook(string isbn)
    {
    }

    bool BookStore::bookExists(string isbn)
    {
    }

    size_t BookStore::getBookStock(string isbn)
    {
    }

    Book &BookStore::getBook(string isbn)
    {
    }

    void BookStore::purchaseInventory(const Book &book)
    {
    }

    void BookStore::purchaseInventory(
        string title, string author, string isbn,
        size_t price_in_cents,
        size_t unit_count)
    {
    }

    void BookStore::sellToCustomer(Book &book, size_t price_in_cents, size_t quantity)
    {
    }

    void BookStore::sellToCustomer(string isbn, size_t price_in_cents, size_t quantity)
    {
    }

    void BookStore::printInventroy()
    {
        cout << "*** Book Store Inventory ***" << endl;
        for (auto &books : bookList)
        {
            string title = books.getTitle();
            cout << "\"" << books.getTitle() << "\""
                 << ", by " << books.getAuthor()
                 << " [" << books.getIsbn() << "] "
                 << "(" << books.getStock() << " in stock)" << endl;
        }
    }
}