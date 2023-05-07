class Node:
    def __init__(self, data, node=None):
        self.data = data
        self.link = node
    
    def set_link(self, node):
        self.link = node

    def get_link(self):
        return self.link

class Stack:
    def __init__(self):
        self.head = None

    def push(self, data):
        temp = Node(data)
        if self.head == None:
            self.head = temp
        else:
            temp.link = self.head
            self.head = temp

    def pop(self, data):
        temp = self.head
        if temp == None:
            print("Stack Empty!")
        val = temp.data
        self.head = temp.link
        return val

    def peek(self):
        temp = self.head
        if temp == None:
            print("Stack Empty!")
        return temp.data 

    def isEmpty(self):
        if self.head == None:
            return True
        return False

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
    
    stack = Stack()

    print(stack.isEmpty())
    stack.push(1)
    stack.push(3)
    stack.push(5)
    stack.push(7)
    stack.push(9)
    
    print(stack.peek())

    stack.print_list()
    print(stack.pop())
    print(stack.isEmpty())
    stack.print_list()


if __name__ == "__main__":
    main()
