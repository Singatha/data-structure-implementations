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

class LinkedList {
    function __contruct(){
        $this->head = null;
    }

    function addNode($data){
        $temp = new Node($data, null);
        if ($this->head === null){
            $this->head = $temp;
        } else {
            $temp->link = $this->head;
            $this->head = $temp;
        }
    }

    function deleteNode($data){
        $temp = $this->head;
        $prevNode = null;
        while($temp !== null){
            if ($temp->data === data){
                $prevNode->link = $temp->link;
            }
            $prevNode = $temp;
            $temp = $temp->link;
        }
    }

    function findNode($data){
        $temp = $this->head;
        $flag = false;
        while($temp !== null){
            if ($temp->data === data){
                $flag = true;
                break;
            }
            $temp = $temp->link;
        }
        return $flag;
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

$linkedLinked = new LinkedList();

$linkedLinked->addNode(1);
$linkedLinked->addNode(3);
$linkedLinked->addNode(5);
$linkedLinked->addNode(7);
$linkedLinked->addNode(9);

$linkedLinked->printlList();
echo $linkedLinked->size();

echo $linkedLinked->findNode(5);
$linkedLinked->deleteNode(5);
echo $linkedLinked->findNode(5);
$linkedLinked->printList();

?>
