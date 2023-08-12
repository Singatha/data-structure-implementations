#!/usr/bin/bash

queue=()

function enqueue(){
	queue=("${queue[@]}" "$1")
	# queue+=("$1") # Another way of pushing into array 
}

function peek(){
	if [ ${#queue[@]} -gt 0 ]; then
		echo "${queue[0]}"
	else
		echo "Queue Empty"
	fi
}

function dequeue(){
	if [ ${#queue[@]} -gt 0 ]; then
		local front="${queue[0]}"
		# queue=("${queue[@]:1}") # Remove item from array
		echo "$front"
	else
		echo "Queue Empty"
	fi
}

function isEmpty(){
	if [ ${#queue[@]} -gt 0 ]; then
		echo "Queue not Empty" 
	else
		echo "Queue Empty"
	fi
}

function printList(){
	for i in "${queue[@]}"; do
  		echo "$i"
	done
}

echo $(isEmpty)

enqueue "1"
enqueue "3"
enqueue "5"
enqueue "7"
enqueue "9"

echo $(isEmpty)
echo $(printList)

peek_result=$(peek)
echo "$peek_result"

dequeue_result=$(dequeue)
echo "$dequeue_result"

echo $(printList)
