package main
import "fmt"

type Node struct {
	data int
	link *Node
}

var head *Node

func addNode(data int){
	if head == nil {
		head = &Node{data, (&Node{})}
	} else {
		temp := &Node{data, head}
		head = temp
	}
}

func deleteNode(data int){
	temp := head
	prev_node := head
	for {
		if temp == nil {
			break
		}
		if temp.data == data {
			prev_node.link = temp.link
		}
		prev_node = temp
		temp = temp.link
	}
}

func findNode(data int) bool {
	temp := head
	var flag bool = false
	for {
		if temp == nil {
			break
		}
		if temp.data == data {
			flag = true
		}
		temp = temp.link
	}
	return flag
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
	addNode(1)
	addNode(3)
	addNode(5)
	addNode(7)
	addNode(9)

	printList()

	fmt.Println(size())
	fmt.Println(findNode(5))
	deleteNode(5)
	fmt.Println(findNode(5))

	printList()
}
