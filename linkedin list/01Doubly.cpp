#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    // 🔹 Insert at head
    void insertAtHead(int val) {
        Node* newNode = new Node(val);

        if (head != NULL) {
            head->prev = newNode;
            newNode->next = head;
        }

        head = newNode;
    }

    // 🔹 Insert at tail
    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // 🔹 Insert at position (1-based)
    void insertAtPosition(int val, int pos) {
        if (pos == 1) {
            insertAtHead(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) return;

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;
    }

    // 🔹 Delete node by value
    void deleteValue(int val) {
        if (head == NULL) return;

        Node* temp = head;

        while (temp != NULL && temp->data != val) {
            temp = temp->next;
        }

        if (temp == NULL) return;

        // if only node or head
        if (temp == head) {
            head = temp->next;
            if (head != NULL)
                head->prev = NULL;
        }
        else {
            if (temp->prev != NULL)
                temp->prev->next = temp->next;

            if (temp->next != NULL)
                temp->next->prev = temp->prev;
        }

        delete temp;
    }

    // 🔹 Display forward
    void displayForward() {
        Node* temp = head;

        cout << "Forward: ";
        while (temp != NULL) {
            cout << temp->data << " ⇄ ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // 🔹 Display backward
    void displayBackward() {
        if (head == NULL) return;

        Node* temp = head;

        // go to last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        cout << "Backward: ";
        while (temp != NULL) {
            cout << temp->data << " ⇄ ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtHead(10);
    dll.insertAtHead(5);

    dll.insertAtTail(20);
    dll.insertAtTail(30);

    dll.insertAtPosition(15, 3);

    dll.displayForward();
    dll.displayBackward();

    dll.deleteValue(20);

    dll.displayForward();
    dll.displayBackward();

    return 0;
}