<?php
class Node {
    public $data;
    public $left;
    public $right;
    
    function __contruct($data, $leftNode, $rightNode){
        $this->data = $data;
        $this->left = $leftNode;
        $this->right = $rightNode;
    }

    function setLink($node){
        $this->link = $node;
    }

    function getLink(){
        return $this->link;
    }
}

class BinarySearchTree {
    public $root;

    function __contruct(){
        $this->root = null;
    }

    function insert($data){
        if ($data == null){
            $this->root = new Node($data, null, null);
        } else {
            insertNode($data, $this->root);
        }
    }

    function insertNode($data, $node){
        if ($node == null){
            $node = new Node($data, null, null);
        } else if ($data < $node->data){
            insertNode($data, $node->left);
        } else {
            insertNode($data, $node->right);
        }
    }
    
    // function delete(){}
    // function deleteNode($data){}

    function find($data){
        if ($this->root == null){
            echo "Binary Search Tree Empty !"
            return false;
        } else {
            return findNode($data, $this->root);
        }
    }

    function findNode($data, $node){
        if ($data == $node->data){
            return true;
        } else if ($data < $node->data){
            return findNode($data, $node->left);
        } else {
            return findNode($data, $node->right);
        }
    }

    function size(){
        if ($this->root == null){
            return 0;
        } else {
            return sizeNode($this->root) + sizeNode($this->root) + 1;
        }
    }

    function sizeNode($node){
        if ($node == null){
            return 0;
        } else {
            return sizeNode($this->root) + sizeNode($this->root) + 1;
        }
    }

    function preOrder($node){
        if ($node != null){
            echo $node->data;
            preOrder($node->left);
            preOrder($node->right);
        }
    }

    function postorder(){
        if ($node != null){
            postOrder($node->left);
            postOrder($node->right);
            echo $node->data;
        }
    }
    
    function inOrder(){
        if ($node != null){
            preOrder($node->left);
            echo $node->data;
            preOrder($node->right);
        }
    }
}

$binarysearchtree = new BinarySearchTree();


?>
