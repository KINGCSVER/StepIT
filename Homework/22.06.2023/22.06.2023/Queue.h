#include <iostream>
#include <string>
#include <cstdint>

using namespace std;

template <typename T>
class Queue
{
public:
    T* arr{};
    uint16_t size{};
    uint16_t capacity{};
    bool isExpandable{ false };

    Queue() = default;

    Queue& operator=(const Queue& other) = delete;

    Queue(uint16_t capacity, bool isExpandable = false);

    ~Queue() 
    {
        delete[] this->arr;
    }

    void push(T value);

    T pop();
    T peek(bool reset = false);

    uint16_t getSize() const;

    friend ostream& operator<<(ostream& os, Queue _Queue)
    {
        for (size_t i = 0; i < _Queue.getSize(); i++)
        {
            os << _Queue.peek();
        }

        return os;
    }

};