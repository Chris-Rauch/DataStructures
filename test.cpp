// for testing dataStruct.h
#include <iostream>
#include "dataStructs.h"
using namespace std;

int main() {
    /*
    binaryTree<int> tree;

    tree.insert(5);
    tree.insert(1);
    tree.insert(10);
    tree.insert(0);

    tree.dispTree();
*/
/*
    LinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_front(0);
    list.push_index(3,1);
    list.pop_index(1);
    //list.removeAll(3);

    for(int x = 0; x < list.getSize(); ++x) {
        int y = list.get_index(x);
        cout << y << endl;
        //list.pop_front();
        
    }
*/

Queue<int> queue;

queue.push(1);
queue.push(2);
queue.push(3);
queue.push(4);
queue.push(10);
int x;

while(queue.getSize() != 0) {
    x = queue.pop();
    cout << x << endl;
}

return 1;
    
}

