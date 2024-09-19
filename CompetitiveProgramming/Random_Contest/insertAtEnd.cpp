#include <iostream>
using namespace std;

// Definition for singly-linked list node
// Each node contains an integer value and a pointer to the next node
struct ListNode {
    int val;               // Value stored in the node
    ListNode* next;        // Pointer to the next node in the list

    // Constructor to initialize a node with a value and default next pointer as nullptr
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to insert a node at the end of the list
ListNode* insertAtEnd(ListNode* head, int newValue) {
    // Step 1: Create a new node with the given value
    ListNode* newNode = new ListNode(newValue);

    // Step 2: If the list is empty, the new node becomes the head
    // This is the base case where there are no elements in the list yet
    if (head == nullptr) {
        return newNode;   // Return the new node as the new head of the list
    }

    // Step 3: Traverse the list to find the last node
    // We start from the head and move to the end (where next pointer is nullptr)
    ListNode* current = head;
    while (current->next != nullptr) {
        current = current->next;  // Move to the next node
    }

    // Step 4: Attach the new node at the end
    // Now `current` points to the last node, so we make current's next point to the new node
    current->next = newNode;

    // Step 5: Return the head of the list
    // We return head so that we maintain the full linked list starting from the first node
    return head;
}

// Function to print the linked list
// This function traverses the list from head to the last node and prints each node's value
void printList(ListNode* head) {
    ListNode* current = head;  // Start from the head of the list
    while (current != nullptr) {  // Continue until we reach the end (nullptr)
        cout << current->val << " -> ";  // Print the value of the current node
        current = current->next;         // Move to the next node
    }
    cout << "NULL" << endl;  // Print "NULL" to indicate the end of the list
}

int main() {
    // Step 6: Start with an empty list
    ListNode* head = nullptr;

    // Step 7: Insert elements at the end of the list
    // Each call to `insertAtEnd` adds a new value at the end of the list
    head = insertAtEnd(head, 10);  // List becomes: 10 -> NULL
    head = insertAtEnd(head, 20);  // List becomes: 10 -> 20 -> NULL
    head = insertAtEnd(head, 30);  // List becomes: 10 -> 20 -> 30 -> NULL

    // Step 8: Print the final linked list
    // This will print all the nodes starting from the head
    cout << "Linked List: ";
    printList(head);  // Expected output: 10 -> 20 -> 30 -> NULL

    return 0;
}
