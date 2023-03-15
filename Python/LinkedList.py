class Node:
    def __init__(self, data, node=None):
        self.data = data
        self.link = node
    
    def set_link(node):
        self.link = node

    def get_link():
        return self.link

class LinkedList:
    def __init__(self):
        self.head = None

    def add_node(data):
        temp = Node(data)
        if self.head is None:
            self.head = temp
        else:
            temp.node = self.head
            self.head = temp

    def delete_node(data):
        temp = self.head
        prev_node = self.head
        while temp != None:
            if temp.data == data:
                prev_node.link = temp.link
            prev_node = temp
            temp = temp.link

    def find_node(data):
        temp = self.head
        flag = False
        while temp != None:
            if temp.data == data:
                flag = True
        return flag

    def print_list():
        temp = self.head
        while temp != None:
            print(temp.data)
        print(temp.data)

    def size():
        temp = self.head
        counter = 0
        while temp != None:
            temp = temp.link
            counter += 1
        counter += 1
        return counter

def main():
    linked_list = LinkedList()

    linked_list.add_node(1)
    linked_list.add_node(3)
    linked_list.add_node(5)
    linked_list.add_node(7)
    linked_list.add_node(9)

    linked_list.print_list()
    print(linked_list.size())

    print(linked_list.find_node(5))
    linked_list.delete_node(5)
    print(linked_list.find_node(5))
    linked_list.print_list()
