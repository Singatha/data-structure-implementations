package main
import "fmt"

type Node struct {
	data string
	link *Node
}

var head *Node

func addNode(data int){
	if head == Node{} {
		head = &Node{data, &Node{}}
	}
	else {
		temp := &Node{data, head}
		head = temp
	}
}

func deleteNode(data int){
	temp := head
	prev_node := head
	for {
		if temp == Node{} {
			break
		}
		if temp.data == data {
			prev_node = temp.link
		}
		prev_node = temp
		temp = temp.link
	}
}

func findNode(data int) bool {
	temp := head
	var flag bool = false
	for {
		if temp == Node{} {
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
		if temp == Node{} {
			break
		}
		fmt.Println(temp.data)
		temp = temp.link
	}
	fmt.Println(temp.data)
	return counter
}

func printList(){
	temp := head
	var counter int = 0
	for {
		if temp == Node{} {
			break
		}
		temp = temp.link
		counter++
	}
	counter++
	return counter
}

func main(){
	addNode(1);
	addNode(3);
	addNode(5);
	addNode(7);
	addNode(9);

	printList();
	printf(size());
	printf(findNode(5));
	printf(deleteNode(5));
	printf(findNode(5));

	printList();
}
