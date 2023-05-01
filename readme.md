# Push Swap
A 42 School Project

## Running program

Provide a list of integers to sort, as below, with no duplicates

	`make push_swap`
	`./push_swap 2 13 3 45 50 7 600

## Testing with checker

	`ARG="4 67 9 23"; ./push_swap $ARG | ./checker_Mac $ARG

## Description
This project takes Stack_A (formatted as a list of integers) and sorts it into ascending order in Stack_B, minimising the no. operations used to sort.

The sorting operations are restricted to:
- Swaps
	Swapping the first two elements within either stack
- Pushes
	Pushes the first element of one stack into the first position of the other stack - effectively shifting the elements down one place
- Rotates
	Shifting all elements up/down one place - the 1st/first element would become the new last/first one

Link to subject sheet: blah

