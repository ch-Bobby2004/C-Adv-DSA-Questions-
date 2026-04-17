#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // 🔹 Insert at beginning
    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // 🔹 Insert at end
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
    }

    // 🔹 Insert at position (1-based index)
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
        temp->next = newNode;
    }

    // 🔹 Delete by value
    void deleteValue(int val) {
        if (head == NULL) return;

        // if head is to be deleted
        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->data != val) {
            temp = temp->next;
        }

        if (temp->next == NULL) return;

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // 🔹 Search
    bool search(int val) {
        Node* temp = head;

        while (temp != NULL) {
            if (temp->data == val)
                return true;
            temp = temp->next;
        }
        return false;
    }

    // 🔹 Display
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " → ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList ll;

    ll.insertAtHead(10);
    ll.insertAtHead(5);

    ll.insertAtTail(20);
    ll.insertAtTail(30);

    ll.insertAtPosition(15, 3);

    ll.display();

    cout << "Search 20: " << ll.search(20) << endl;
    cout << "Search 100: " << ll.search(100) << endl;

    ll.deleteValue(15);
    ll.display();

    ll.deleteValue(5);
    ll.display();

    return 0;
}