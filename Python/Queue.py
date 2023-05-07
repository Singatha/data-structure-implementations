class Node:
    def __init__(self, data, node=None):
        self.data = data
        self.link = node
    
    def set_link(self, node):
        self.link = node

    def get_link(self):
        return self.link

class Queue:
    def __init__(self):
        self.front = None
        self.back = None

    def enqueue(self, data):
        temp = Node(data)
        if self.front == None:
            self.back = temp
            self.front= self.back
        else:
            temp.link = self.back
            self.back = temp

    def dequeue(self, data):
        if self.front == None:
            print("Queue Empty!")
        val = self.front.data
        self.front = self.front.link
        return val

    def peek(self):
        if self.front == None:
            print("Queue Empty!")
        return self.front.data 

    def isEmpty(self):
        if self.front == None:
            return True
        return False

    def print_list(self):
        temp = self.front
        while temp != None:
            print(temp.data)
            temp = temp.link

    def size(self):
        temp = self.front
        counter = 0
        while temp != None:
            temp = temp.link
            counter += 1
        return counter

def main():
    print("Hello, There!")
    
    queue = Queue()

    print(queue.isEmpty())
    queue.enqueue(1)
    queue.enqueue(3)
    queue.enqueue(5)
    queue.enqueue(7)
    queue.enqueue(9)
    
    print(queue.peek())

    queue.print_list()
    print(queue.denqueue())
    print(queue.isEmpty())
    queue.print_list()


if __name__ == "__main__":
    main()
