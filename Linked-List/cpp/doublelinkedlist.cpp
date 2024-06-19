#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *prev;
  Node *next;
};

class DoublyLinkedList {
private:
  Node *head;

public:
  DoublyLinkedList() { head = nullptr; }

  void append(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    if (head == nullptr) {
      head = newNode;
    } else {
      Node *temp = head;
      while (temp->next != nullptr) {
        temp = temp->next;
      }
      temp->next = newNode;
      newNode->prev = temp;
    }
  }

  void logValues() {
    Node *temp = head;
    while (temp != nullptr) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main() {
  DoublyLinkedList myList;
  myList.append(1);
  myList.append(2);
  myList.append(3);

  cout << "Doubly Linked List values: ";
  myList.logValues();

  return 0;
}
