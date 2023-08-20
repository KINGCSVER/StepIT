#include "Queue.h"

int main()
{
    Queue<int> stack(5, true);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);

    cout << stack;

    return 0;
}