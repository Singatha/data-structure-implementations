#!/usr/bin/bash

stack=()

function push(){
	stack=("${stack[@]}" "$1")
	# stack+=("$1")  # Another way of pushing into an array 
}

function peek(){
	if [ ${#stack[@]} -gt 0 ]; then
		echo "${stack[-1]}"
	else
		echo "Stack Empty"
	fi
}

function pop(){
	if [ ${#stack[@]} -gt 0 ]; then
		local top="${stack[-1]}"
		# stack=("${stack[@]:1}") # Remove an item from array
		echo "$top"
	else
		echo "Stack Empty"
	fi
}

function isEmpty(){
	if [ ${#stack[@]} -gt 0 ]; then
		echo "Stack not Empty" 
	else
		echo "Stack Empty"
	fi
}

function printList(){
	for i in "${stack[@]}"; do
  		echo "$i"
	done
}

echo $(isEmpty)

push "1"
push "3"
push "5"
push "7"
push "9"

echo $(isEmpty)
echo $(printList)

peek_result=$(peek)
echo "$peek_result"

pop_result=$(pop)
echo "$pop_result"

echo $(printList)
