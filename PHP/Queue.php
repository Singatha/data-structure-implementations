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

class Queue {
    function __contruct(){
        $this->front = null;
        $this->back = null;
    }

    function enqueue($data){
        $temp = new Node($data, null);
        if ($this->front === null){
            $this->back = $temp;
            $this->front = $this->back;
        } else {
            $temp->link = $this->back;
            $this->back = $temp;
        }
    }

    function peek(){
        if ($this->front === null){
            echo "Queue Empty!";
        }
        return $this->front->data;
    }

    function dequeue(){
        if ($this->front === null){
            echo "Queue Empty!";
        }
        $data = $this->front->data;
        $this->front = $this->front->link;
        return $data;
    }

    function isEmpty(){
        if ($this->front === null){
            return true;
        } else {
            return false;
        }
    }

    function size(){
        $temp = $this->front;
        $counter = 0;
        while($temp !== null){
            $counter++;
            $temp = $temp->link;
        }
        return $counter;
    }

    function printList(){
        $temp = $this->front;
        while($temp !== null){
            echo $temp->data;
            $temp = $temp->link;
        }
    }
}

$queue = new Queue();

echo $queue->isEmpty();

$queue->enqueue(1);
$queue->enqueue(3);
$queue->enqueue(5);
$queue->enqueue(7);
$queue->enqueue(9);

echo $queue->peek();

$queue->printList();
echo $queue->dequeue();
echo $queue->isEmpty();
$queue->printList();

?>
