#ifndef BOOK_STORE_HPP
#define BOOK_STORE_HPP

#include "DoublyLinkedList.hpp"
#include "Book.hpp"

using namespace std;

namespace CPSC131
{
    namespace BookStore
    {
        class BookStore
        {
            public:
                BookStore();

                void adjustAccountBalance(int adjustment);
                int getAccountBalance();

                Book& getBook(string isbn);
                DoublyLinkedList::DoublyLinkedList<Book>::Iterator findBook(string isbn);
                bool bookExists(string isbn);
                size_t getBookStock(string isbn);

                void purchaseInventory(const Book& book);
                void purchaseInventory(
                    string title, string author, string isbn,
                    size_t price_in_cents,
                    size_t unit_count
                );

                void sellToCustomer(Book& book, size_t price_in_cents, size_t quantity);
                void sellToCustomer(string isbn, string author, size_t quantity);

                void printInventroy();

            private:
                ::CPSC131::DoublyLinkedList:DoublyLinkedList<Book> bookList;

                int account_balance_ = 0;
        };
    }
}
#endif
