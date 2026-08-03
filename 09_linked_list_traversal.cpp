//Linked List - Print elements of a linked list
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* first = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    first->next = second;
    second->next = third;
    Node* temp = first;

    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
