<?php
class Stack {
    function __contruct(){
        $this->arr = array();
    }

    function push($data){
        array_push($this->arr,$data);
    }

    function pop(){
        if (count($this->arr) === 0){
            echo "Stack Empty";
        }
        return array_pop($this->arr);
    }

    function peek(){
        if (count($this->arr) === 0){
            echo "Stack Empty";
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
$stack->isEmpty();

?>
