Solved the Valid parentheses problem where we have to check if the opening and closing of the like braces are in correct order or not.
Used a stack to track the last seen open parantheses and pushed the opposite closing parantheses to check later.
The algorithm initially took 3ms of runtime but by replacing the index looping to for(char c:s) i.e. range based looping I was able to achieve the optimal 0ms runtime.
The final algorithm has a time complexity of O(N) and space complexity of O(N) which is optimal.
It has a runtime of 0ms and 10.04 MB memory.