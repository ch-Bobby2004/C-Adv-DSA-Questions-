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

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = NULL;
    }

    // 🔹 Insert at end
    void insert(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            newNode->next = head; // circular link
            return;
        }

        Node* temp = head;

        // go to last node
        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    // 🔹 Delete a value
    void deleteValue(int val) {
        if (head == NULL) return;

        Node* curr = head;
        Node* prev = NULL;

        // if head node to be deleted
        if (head->data == val) {
            Node* temp = head;

            while (curr->next != head) {
                curr = curr->next;
            }

            if (head == head->next) {
                head = NULL;
                delete temp;
                return;
            }

            curr->next = head->next;
            head = head->next;
            delete temp;
            return;
        }

        curr = head;

        do {
            prev = curr;
            curr = curr->next;

            if (curr->data == val) {
                prev->next = curr->next;
                delete curr;
                return;
            }

        } while (curr != head);
    }

    // 🔹 Display list
    void display() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        cout << "Circular List: ";

        do {
            cout << temp->data << " → ";
            temp = temp->next;
        } while (temp != head);

        cout << "(back to head)\n";
    }
};

int main() {
    CircularLinkedList cll;

    cll.insert(10);
    cll.insert(20);
    cll.insert(30);
    cll.insert(40);

    cll.display();

    cll.deleteValue(20);
    cll.display();

    cll.deleteValue(10);
    cll.display();

    return 0;
}