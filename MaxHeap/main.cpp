#include <iostream>
using namespace std;


template <typename Item>
class MaxHeap
{
private:
    Item *data;
    int count;

public:
    MaxHeap(int capacity)
    {
        data = new Item[capacity+1];
        count = 0;
    }

    ~MaxHeap()
    {
        delete[] data;
    }

    int size()
    {
        return count;
    }

    bool isEmpty()
    {
        return count == 0;
    }



};

int main() {
    std::cout << "Hello, World!" << std::endl;
    MaxHeap<int> maxheap(100);
    cout
    return 0;
}