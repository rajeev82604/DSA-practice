#include <iostream>

struct ListNode {
    int val;          // The value of the node
    ListNode* next;   // Pointer to the next node in the linked list

    // Constructor overloading(polymorphism)
    ListNode() : val(0), next(nullptr) {}                        // Default constructor
    ListNode(int x) : val(x), next(nullptr) {}                   // Constructor with value
    ListNode(int x, ListNode* next) : val(x), next(next) {}     // Constructor with value and next pointer
};

// Function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Creating nodes
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode();
    // Linking nodes to create a linked list
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    // The last node should have next set to nullptr to indicate the end of the list
    //node4->next = nullptr;

    // Printing the linked list
    printLinkedList(node1);

    // Don't forget to free the memory allocated for the nodes
    delete node1;
    delete node2;
    delete node3;
    delete node4;
    return 0;
}
