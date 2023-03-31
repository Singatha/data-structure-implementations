<?php
class Queue {
    function __contruct(){
        $this->arr = array();
    }

    function enqueue($data){
        array_unshift($this->arr, $data);
    }

    function dequeue(){
        if (count($this->arr) === 0){
            echo "Queue Empty";
        }
        return array_pop($this->arr);
    }

    function peek(){
        if (count($this->arr) === 0){
            echo "Queue Empty";
        }
        return $this->arr[count($this->arr)-1];
    }

    function isEmpty(){
        if (count($this->arr) === 0){
            return true;
        }
        return false;
    }

    function size(){
        return count($this->arr);
    }

    function printList(){
        foreach($this->arr as $item){
            echo $item;
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

echo $queue->dequeue();
echo $queue->peek();
echo $queue->isEmpty();

?>
