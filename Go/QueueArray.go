package main
import "fmt"

var front int = -1
var back int = -1 
var queue = [10]int{}

func enqueue(int data){
	if (rear > len(queue)){
		fmt.Println("Queue Full")
	}

	if front == -1 && rear == -1 {
		front++
		rear++
		queue[rear] = data	
	} else {
		rear++
		queue[rear] = data
	}
}

func dequeue() int {
	if front == -1 && rear == -1 {
		fmt.Println("Queue Empty")
	}
	data := queue[front] 
	front++
	return data
}

func peek() int {
	if front == -1 && rear == -1 {
		fmt.Println("Queue Empty")
	}
	return queue[front]
}

func size() int {
	return len(queue)
}

func isEmpty() bool {
	if len(queue) == 0 {
		return true
	} else {
		return false
	}
}


func printList(){
	for i := 0; i < len(queue); i++ {
		fmt.Println(queue[i])
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
