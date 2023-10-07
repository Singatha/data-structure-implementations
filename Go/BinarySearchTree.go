package main
import "fmt"

type Node struct {
	data int
	left *Node
	right *Node
}

var root *Node

func insert(data int){
	if root == nil {
		root = &Node{data, (&Node{}), (&Node{})}
	} else {
		return insertNode(data,root)
	}
}

func insertNode(data int, node *Node){
	if node == nil {
		node = &Node{data, (&Node{}), (&Node{})}
	} else if data < node.data {
		return insertNode(data, node.left)
	} else {
		return insertNode(data, node.right)
	}
}


func search(data int) bool {
	if root == nil {
		fmt.Println("Binary Search Tree Empty !")
		return false
	} else {
		return searchNode(data, root)
	}
}

func searchNode(data int, node *Node) bool {
	if data == node.data {
		return true
	} else if data < node.data {
		return searchNode(data, node.left)
	} else {
		return searchNode(data, node.right)
	}
}

// func delete(){}
// func deleteNode(){}

func size() int {
	if root == nil {
		return 0
	} else {
		return sizeNode(root.left) + sizeNode(root.right) + 1
	}
}

func sizeNode(node *Node){
	if node == nil {
		return 0
	} else {
		return sizeNode(root.left) + sizeNode(root.right) + 1
	}
}

func preOrder(node *Node){
	if node != nil {
		fmt.Println(node.data)
		preOrder(node.left)
		preOrder(node.right)
	}
}

func postOrder(node *Node){
	if node != nil {
		fmt.Println(node.data)
		postOrder(node.left)
		postOrder(node.right)
	}
}

func inOrder(node *Node){
	if node != nil {
		fmt.Println(node.data)
		inOrder(node.left)
		inOrder(node.right)
	}
}

func main(){
}
