<?php
class Node {
    function __contruct($data, $node){
        $this->data = $data;
        $this->link = $node;
    }

    function setLink($node){
        $this->link = $node;
    }

    function getLink(){
        return $this->link;
    }
}

class Stack {
    function __contruct(){
        $this->head = null;
    }

    function push($data){
        $temp = new Node($data, null);
        if ($this->head === null){
            $this->head = $temp;
        } else {
            $temp->link = $this->head;
            $this->head = $temp;
        }
    }

    function peek(){
        $temp = $this->head;
        if ($temp === null){
            echo "Stack Empty!";
        }
        return $temp->data;
    }

    function pop(){
        $temp = $this->head;
        if ($temp === null){
            echo "Stack Empty!";
        }
        $data = $temp->data;
        $this->head = $temp->link;
        return $data;
    }

    function isEmpty(){
        if ($this->head === null){
            return true;
        } else {
            return false;
        }
    }

    function size(){
        $temp = $this.head;
        $counter = 0;
        while($temp !== null){
            $counter++;
            $temp = $temp->link;
        }
        return $counter;
    }

    function printList(){
        $temp = $this.head;
        while($temp !== null){
            echo $temp->data;
            $temp = $temp->link;
        }
    }
}

$stack = new Stack();

echo $stack->isEmpty();

$stack->push(1);
$stack->push(3);
$stack->push(5);
$stack->push(7);
$stack->push(9);

echo $stack->peek();

$stack->printList();
echo $stack->pop();
echo $stack->isEmpty();
$stack->printList();

?>
