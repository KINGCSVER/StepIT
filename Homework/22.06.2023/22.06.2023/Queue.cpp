#include "Queue.h"

Queue::Queue(uint16_t capacity, bool isExpandable = false)
{
	this->capacity = capacity;
	this->arr = new T[capacity]{};
	this->isExpandable = isExpandable;
}

void Queue::push(T value)
{
	if (this->size == this->capacity && !this->isExpandable)
	{
		cout << "Queue overflow" << endl;
		return;
	}
	else
	{
		if (this->size == this->capacity && this->isExpandable)
		{

			this->capacity *= 2;

			T* newArr = new T[this->capacity]{};

			for (uint16_t i = 0; i < this->capacity; i++)
			{
				newArr[i] = this->arr[i];
			}

			delete[] this->arr;
			this->arr = newArr;
		}
	}
	this->arr[this->size] = value;
	this->size++;
}

T Queue::pop()
{
	if (this->size == 0)
	{
		cout << "Queue is empty" << endl;
		return T{};
	}

	T objForReturn = this->arr[0];

	for (size_t i = 0; i < this->size; i++)
	{
		arr[i] = arr[i + 1];
	}

	this->arr[this->size] = T{};

	this->size--;

	return objForReturn;
}

T Queue::peek(bool reset = false)
{
	static uint16_t peekIterator = -1;

	if (reset) {
		peekIterator = 0;
	}

	if (this->size == 0)
	{
		cout << "Queue is empty" << endl;
		return T{};
	}
	if (peekIterator == this->size)
	{
		peekIterator = -1;
	}
	peekIterator++;
	return this->arr[peekIterator];
}

uint16_t Queue::getSize() const
{
	return this->size;
}