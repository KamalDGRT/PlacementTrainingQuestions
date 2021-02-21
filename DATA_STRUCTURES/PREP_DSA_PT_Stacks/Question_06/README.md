# Question 06

Ankit along with Karthick has opened new PVC pipe shop. They have 3 stacks of cylindrical pipes where each pipe has the equal diameter, but they may vary in height. They can change the height of a stack by removing and discarding its topmost pipe any number of times.

Find the maximum possible height of stacks such that all of the stacks are exactly the same height. This means that they must remove zero or more cylindrical pipes from the top of zero or more of the three stacks until they are all the same height, and then print the height. The removals must be performed in such a way as to maximize the height. Also, remember, an empty stack is still a stack.

Karthick is not clear about this arrangement. So Ankit, explained with an example. (Refer Sample Input). <br>
There are 3 stacks with different height. To make all stacks of equal height, they remove the first two cylinders from stack 1 and one cylinder each from stack 2 and 3.

### Input Format

The 1<sup>st</sup> line contains three space-separated integers N<sub>1</sub>, N<sub>2</sub> and N<sub>3</sub> (i.e. Number of pipes in stacks 1, 2, 3).<br>

The 2<sup>nd</sup> line contains N<sub>1</sub> space-separated integers describing the pipe heights in stack 1. The first element is the top of the stack. <br>

The 3<sup>rd</sup> line contains N<sub>2</sub> space-separated integers describing the pipe heights in stack 2. The first element is the top of the stack.<br>

The 4<sup>th</sup> line contains N<sub>3</sub> space-separated integers describing the pipe heights in stack 3. The first element is the top of the stack.

### Output Format

Display the maximum height at which all stacks will be of equal height.

## Sample Testcases

### Input 1

```
4 3 5
1 1 4 1
4 3 2
3 2 1 1 1
```

### Ouput 1

```
5
```
