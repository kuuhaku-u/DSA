#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *next;
};

class CircularLinkedList {
private:
  Node *head;

public:
  CircularLinkedList() { head = nullptr; }

  void append(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
      head = newNode;
      newNode->next = head;
    } else {
      Node *temp = head;
      while (temp->next != head) {
        temp = temp->next;
      }
      temp->next = newNode;
      newNode->next = head;
    }
  }

  void logValues() {
    if (head == nullptr) {
      cout << "Circular Linked List is empty." << endl;
      return;
    }

    Node *temp = head;
    do {
      cout << temp->data << " ";
      temp = temp->next;
    } while (temp != head);
    cout << endl;
  }
};

int main() {
  CircularLinkedList myList;
  myList.append(1);
  myList.append(2);
  myList.append(3);

  cout << "Circular Linked List values: ";
  myList.logValues();

  return 0;
}
