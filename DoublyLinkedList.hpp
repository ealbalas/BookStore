#ifndef MY_DOUBLY_LINKED_LIST_HPP
#define MY_DOUBLY_LINKED_LIST_HPP

#include <iostream>
#include <stdlib.h>
#include <stdexcept>

namespace CPSC131
{
    namespace DoublyLinkedList
    {
        template <class T>
        class Node
        {
        public:
            Node() : prev_(nullptr), next_(nullptr) {}
            Node(T element) : element_(element), prev_(nullptr), next_(nullptr) {}
            Node(T element, Node *prev, Node *next) : element_(element), prev_(prev), next_(next) {}

            void setPrevious(Node *prev)
            {
                this->prev_ = prev;
            }

            void setPrev(Node *prev)
            {
                setPrevious(prev);
            }

            Node *getPrevious()
            {
                return this->prev_;
            }

            Node *getPrev()
            {
                return getPrevious();
            }

            void setNext(Node *next)
            {
                this->next_ = next;
            }

            Node *getNext()
            {
                return this->next_;
            }

            void setElement(T element)
            {
                this->element_ = element;
            }

            T &getElement()
            {
                return this->element_;
            }

            T &operator*()
            {
                return getElement();
            }

        private:
            T element_;
            Node *prev_;
            Node *next_;
        };

        template <class T>
        class DoublyLinkedList
        {
        public:
            class Iterator
            {
            public:
                Iterator(Node<T> *head, Node<T> *tail) : head_(head), tail_(tail)
                {
                    this->cursor = this->end();
                }
                Iterator(Node<T> *head, Node<T> *tail, Node<T> *cursor) : head_(head), tail_(tail), cursor_(cursor)
                {
                }
                Node<T> *begin()
                {
                }
                Node<T> *end()
                {
                }
                Node<T> *getCursor()
                {
                }
                Iterator &operator=(const Iterator &other)
                {
                }
                bool operator==(const Iterator &other)
                {
                }
                bool operator!=(const Iterator &other)
                {
                }
                Iterator &operator++()
                {
                }
                Iterator operator++(int)
                {
                }
                Iterator &operator--()
                {
                }
                Iterator operator--(int)
                {
                }
                Iterator operator+=(size_t add)
                {
                }
                Iterator operator-=(size_t subtract)
                {
                }
                Iterator operator+=(int add)
                {
                }
                Iterator operator-=(int subtract)
                {
                }
                T &operator*()
                {
                }

            private:
                Node<T> *head_ = nullptr;
                Node<T> *tail_ = nullptr;
                Node<T> *cursor_ = nullptr;

                friend class DoublyLinkedList;
            };

            DoublyLinkedList() {}

            DoublyLinkedList(DoublyLinkedList &other)
            {
            }

            ~DoublyLinkedList()
            {
            }

            void assign(size_t count, const T &value)
            {
            }

            void assign(Iterator first, Iterator last)
            {
            }

            Node<T> *head()
            {
                return this->head_;
            }

            Node<T> *tail()
            {
                return this->tail_;
            }

            Iterator begin()
            {
            }

            Iterator last()
            {
            }

            Iterator end()
            {
            }

            bool empty() const
            {
                if (this->size_ == 0)
                    return true;
                return false;
            }

            size_t size() const
            {
                return this->size_;
            }

            void clear()
            {
            }

            Iterator insert_after(Iterator pos, const T &value)
            {
            }
            Iterator insert_after(size_t pos, const T &value)
            {
            }
            Iterator erase(Iterator pos)
            {
            }
            Iterator push_after(Iterator pos, const T &value)
            {
            }
            void push_front(const T &value)
            {
            }
            Iterator push_back(const T &value)
            {
            }
            void pop_front()
            {
            }
            T &front()
            {
            }
            T &back()
            {
            }
            T &at(size_t index)
            {
            }
            void reverse()
            {
            }
            void sort()
            {
            }
            DoublyLinkedList<T> &operator=(DoublyLinkedList<T> &other)
            {
            }
            bool operator==(DoublyLinkedList<T> &other)
            {
            }
            bool operator!=(DoublyLinkedList<T> &other)
            {
            }

        private:
            Node<T> *head_ = nullptr;
            Node<T> *tail_ = nullptr;
            size_t size_ = 0;
        };
    }
}
#endif
