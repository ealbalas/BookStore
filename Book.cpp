#include "Book.hpp"

#include <iostream>
#include <string>

using namespace std;

namespace CPSC131::BookStore
{
    Book::Book()
    {
        cout << "Empty book created" << endl;
    }

    Book::Book(string title, string author, string isbn, size_t price_in_cents, size_t stock)
        : title_(title), author_(author), price_in_cents_(price_in_cents), stock_(stock)
    {
    }

    string Book::getTitle() const { return this->title_; }
    string Book::getAuthor() const { return this->author_; }
    string Book::getIsbn() const { return this->isbn_; }
    size_t Book::getPriceInCents() const { return this->price_in_cents_; }

    void Book::adjustStock(int adjustment)
    {
        this->stock_ += adjustment;
    }
    size_t Book::getStock() const { return this->stock_; }

    bool Book::operator==(const Book &other) const
    {
        if (
            this->title_ == other.title_ && this->author_ == other.author_ && this->isbn_ == other.isbn_ && this->price_in_cents_ == other.price_in_cents_ && this->stock_ == other.stock_)
            return true;
        return false;
    }
    bool Book::operator!=(const Book &other) const
    {
        return !this->operator==(other);
    }
}
