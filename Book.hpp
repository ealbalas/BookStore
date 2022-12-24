#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

using namespace std;

namespace CPSC131::BookStore
{
    class Book
    {
        public:
            // Default constructor
            Book();
            Book(string title, string author, string isbn, size_t price_in_cents = 0, size_t stock = 0);

            string getTitle() const;
            string getAuthor() const;
            string getIsbn() const;
            size_t getPriceInCents() const;

            void adjustStock(int adjustment);
            size_t getStock() const;

            bool operator ==(const Book& other) const;
            bool operator !=(const Book& other) const;


        private:
            // all books will have a title, author, isbn, price, and stock stored in it.
            string title_ = "";
            string author_ = "";
            string isbn_ = "";
            size_t price_in_cents_ = 0;
            size_t stock_ = 0;
    };
}

#endif
