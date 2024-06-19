class Node:
    def __init__(self, data):
        self.data = data
        self.next = None



def log(head, t):
    n = None
    cur = head
    fwd = cur.next

    while cur is not None:
        if cur.data == t:
            a = cur.next
            print(cur.data)
            cur = cur.next
        else :
            cur = cur.next
    return cur




t = 2
head = Node(1)
second = Node(2)
third = Node(3)

head.next = second
second.next = third

log(head, t)
