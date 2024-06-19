// MErged 2 linked list

#include <iostream>
using namespace std;

struct Node {
  int val;
  Node *next;
};

int s(Node *a) {
  Node *l1 = a;
  // Node* l2 = b;
  while (l1 != nullptr) {
    std::cout << "  Look here : " << l1->val;
    l1 = l1->next;
  }
  // while (l2 != nullptr){
  //  std::cout<< b->val;
  //}
  return 3;
}

int main() {
  // Write C++ code here

  Node *a1 = new Node{1};
  Node *a2 = new Node{2};
  Node *a3 = new Node{3};

  a1->next = a2;
  a2->next = a3;

  // Node* b1 = new Node{1};
  // Node* b2 = new Node{4};
  // Node* b3 = new Node{5};
  // b1 -> next = b2;
  // b2 -> next = b3;
  // int a =
  s(a1);

  return 0;
}
