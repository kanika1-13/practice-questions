#include <iostream>
using namespace std;

// A Single linked list node
class Node {
public:
    int data;
    Node* next;
};

// Function to print the elements of a linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Create some nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data to the nodes
    head->data = 1;
    second->data = 2;
    third->data = 3;

    // Connect the nodes to form a linked list
    head->next = second;
    second->next = third;
    third->next = nullptr;

    // Print the linked list
    printLinkedList(head);

    // Clean up memory (optional, but good practice)
    delete head;
    delete second;
    delete third;

    return 0;
}

