#include "MinHeap.hpp"
#include "MinHeap.cpp"

#include <vector>

int main(void) {
    std::vector<int> v {1, 2, 3, 4, 5, 12, 43, -4, -45, 6};
    std::vector<int> v2 {-1, -2, -3, -4, -5, -12, -43, 4, 45, -6};
    MinHeap<int> heap(v);
    MinHeap<int> heap2(v2);

    heap.print();
    
    heap.update(5, -5);
    heap.print();
    
    heap.update(-5, 13);
    heap.print();
    
    heap.merge(heap2);

    heap.print();

    return 0;
}
