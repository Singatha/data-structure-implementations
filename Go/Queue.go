package main
import "fmt"

type Node struct {
	data int
	link *Node
}

var front *Node
var back *Node

func enqueue(data int){
	temp := &Node{data, (&Node{})}
	if front == nil {
		back = temp
		front = temp
	} else {
		back.link = temp
		back = temp
	}
}

func dequeue() int {
	if (front == nil){
		fmt.Println("Queue Empty!")
	}
	data := front.data
	front = front.link
	return data
}

func peek() int {
	if front == nil {
		fmt.Println("Queue Empty!")
	}
	return front.data
}

func isEmpty() bool {
	if (front == nil){
		return true
	}
	return false
}

func size() int {
	temp := front
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
	temp := front
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

	enqueue(1)
	enqueue(3)
	enqueue(5)
	enqueue(7)
	enqueue(9)

	printList()

	fmt.Println(isEmpty())
	fmt.Println(size())
	fmt.Println(peek())
	fmt.Println(dequeue())

	printList()
}
