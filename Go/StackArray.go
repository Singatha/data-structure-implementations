package main
import "fmt"

var top int = -1
var stack = [10]int{}

func push(int data){
	if top == 10 {
		fmt.Println("Stack Overflow")
	}
	top++
	stack[top] = data
}

func peek() int {
	if top == 10 {
		fmt.Println("Stack Overflow")
	}

	if top == -1 {
		fmt.Println("Stack Empty")
	}

	return stack[top]
}

func pop() int {
	if top == -1 {
		fmt.Println("Stack Empty")
	}
	data := stack[top]
	top--
	return data
}

func isEmpty() bool {
	if len(stack) == 0 {
		return true
	} else {
		return false
	}
}

func size() int {
	return len(stack)
}

func printList(){
	for i := 0; i < len(stack); i++ {
		fmt.Println(stack[i])
	}
}

func main() {
	fmt.Println(isEmpty())

	push(1)
	push(3)
	push(5)
	push(7)
	push(9)

	fmt.Println(isEmpty())

	fmt.Println(peek())
	fmt.Println(size())
	fmt.Println(pop())
	printList()
}
