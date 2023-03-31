class Stack:
    def __init__(self):
        self.arr = []
    
    def push(self, data):
        self.arr.append(data)
    
    def pop(self):
        if self.arr is None:
            print("Stack Empty")
        return self.arr.pop()
    
    def peek(self):
        if self.arr is None:
            print("Stack Empty")
        return self.arr[len(self.arr)-1]

    def isEmpty(self):
        if self.arr is None:
            return True
        return False

    def size(self):
        return len(self.arr)

    def print_list(self):
        for i in self.arr:
            print(i)


stack_array = Stack()
stack_array.isEmpty()

stack_array.push(1)
stack_array.push(3)
stack_array.push(5)
stack_array.push(7)
stack_array.push(9)

stack_array.print_list()
print(stack_array.isEmpty())	
print(stack_array.peek())
print(stack_array.pop())
