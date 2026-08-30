Solved the Square of a Sorted Array problem where we have to square each number from an array of decreasing numbers and then store and display the array of squared numbers in increasing order.
The initial algorithm used a Middle Out approach to solve the problem but it always runs into error as the middle value might not be the smallest one. We need to search the value closest to 0.
The final algorithm uses the Outside In approach where we move from the outmost values to the smallest values as the outmost values will be the largest.
The final algorithm has a time complexity of O(N) and space complexity of O(1).
It has a runtime of 0ms and 30.31 MB of memory.
