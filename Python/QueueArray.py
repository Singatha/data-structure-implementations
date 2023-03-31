class Queue:
    def __init__(self):
        self.arr = []
    
    def enqueue(self, data):
        self.arr.append(data)
    
    def dequeue(self):
        if self.arr is None:
            print("Stack Empty")
        return self.arr.pop(0)
    
    def peek(self):
        if self.arr is None:
            print("Stack Empty")
        return self.arr[0]

    def isEmpty(self):
        if self.arr is None:
            return True
        return False

    def size(self):
        return len(self.arr)

    def print_list(self):
        for i in self.arr:
            print(i)


queue = Queue()
print(queue.isEmpty())
	
queue.enqueue(1)
queue.enqueue(3)
queue.enqueue(5)
queue.enqueue(7)
queue.enqueue(9)

print(queue.dequeue())
print(queue.peek())
print(queue.isEmpty())
