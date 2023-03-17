class Node:
    def __init__(self, data, node=None):
        self.data = data
        self.link = node
    
    def set_link(self, node):
        self.link = node

    def get_link(self):
        return self.link

class LinkedList:
    def __init__(self):
        self.head = None

    def add_node(self, data):
        temp = Node(data)
        if self.head == None:
            self.head = temp
        else:
            temp.link = self.head
            self.head = temp

    def delete_node(self, data):
        temp = self.head
        prev_node = None
        while temp != None:
            if temp.data == data:
                prev_node.link = temp.link
            prev_node = temp
            temp = temp.link

    def find_node(self, data):
        temp = self.head
        flag = False
        while temp != None:
            if temp.data == data:
                flag = True
            temp = temp.link
        return flag

    def print_list(self):
        temp = self.head
        while temp != None:
            print(temp.data)
            temp = temp.link

    def size(self):
        temp = self.head
        counter = 0
        while temp != None:
            temp = temp.link
            counter += 1
        return counter

def main():
    print("Hello, There!")
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


if __name__ == "__main__":
    main()
