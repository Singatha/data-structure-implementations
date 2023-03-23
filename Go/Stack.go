package main
import "fmt"

type Node struct {
	data int
	link *Node
}

var head *Node

func push(data int){
	if head == nil {
		head = &Node{data, (&Node{})}
	} else {
		temp := &Node{data, head}
		head = temp
	}
}

func pop() int {
	if (head == nil){
		fmt.Println("Stack Empty!")
	}
	data := head.data
	head = head.link
	return data
}

func peek() int {
	if head == nil {
		fmt.Println("Stack Empty!")
	}
	return head.data
}

func isEmpty() bool {
	if (head == nil){
		return true
	}
	return false
}

func size() int {
	temp := head
	var counter int = 0
	for {
		if temp == nil {
			break
		}
		counter++
		temp = temp.link
	}
	return counter
}

func printList(){
	temp := head
	for {
		if temp == nil {
			break
		}
		fmt.Println(temp.data)
		temp = temp.link
	}
}

func main(){
	fmt.Println(isEmpty())

	push(1)
	push(3)
	push(5)
	push(7)
	push(9)

	printList()

	fmt.Println(isEmpty())
	fmt.Println(size())
	fmt.Println(peek())
	fmt.Println(pop())

	printList()
}
