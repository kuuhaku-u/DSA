class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class CircularLinkedList:
    def __init__(self):
        self.head = None

    def append(self, value):
        new_node = Node(value)

        if self.head is None:
            self.head = new_node
            new_node.next = self.head
        else:
            temp = self.head
            while temp.next != self.head:
                temp = temp.next
            temp.next = new_node
            new_node.next = self.head

    def log_values(self):
        if self.head is None:
            print("Circular Linked List is empty.")
            return

        temp = self.head
        while True:
            print(temp.data, end=" ")
            temp = temp.next
            if temp == self.head:
                break
        print()


# Example usage:
my_list = CircularLinkedList()
my_list.append(1)
my_list.append(2)
my_list.append(3)

print("Circular Linked List values:")
my_list.log_values()
