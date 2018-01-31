# data-struture (stack) [![Build Status](https://travis-ci.org/jwhu1024/data-structure.svg?branch=master)](https://travis-ci.org/jwhu1024/data-structure)
1. cd /data-structure
2. cmake .
3. make
4. ./stack//bin/stack_main

![alt tag](https://www.tutorialspoint.com/data_structures_algorithms/images/stack_representation.jpg)

```
[1517335404][main.c:16:main] BEGIN
[1517335404][stack.c:20:stack_init] BEGIN
[1517335404][stack.c:34:stack_init] END
[1517335404][main.c:30:main] Stack is empty
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 69 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 81 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 89 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 75 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 70 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 78 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 19 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 25 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 52 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][stack.c:40:stack_push] BEGIN
[1517335404][stack.c:51:stack_push] 84 pushed to stack
[1517335404][stack.c:52:stack_push] END
[1517335404][main.c:56:main] Stack is full
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:59:main] 84 popped from stack
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:60:main] 52 popped from stack
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:61:main] 25 popped from stack
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:62:main] 19 popped from stack
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:63:main] 78 popped from stack
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:64:main] 70 popped from stack
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:65:main] 75 popped from stack
[1517335404][stack.c:81:stack_print] BEGIN
[1517335404][stack.c:83:stack_print] |-----------
[1517335404][stack.c:86:stack_print] | [2] -> 89
[1517335404][stack.c:86:stack_print] | [1] -> 81
[1517335404][stack.c:86:stack_print] | [0] -> 69
[1517335404][stack.c:88:stack_print] |-----------
[1517335404][stack.c:89:stack_print] END
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:69:main] 89 popped from stack
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:70:main] 81 popped from stack
[1517335404][stack.c:58:stack_pop] BEGIN
[1517335404][main.c:71:main] 69 popped from stack
[1517335404][stack.c:95:stack_destroy] BEGIN
[1517335404][stack.c:101:stack_destroy] Free the memory for stack pointer
[1517335404][stack.c:105:stack_destroy] END
[1517335404][main.c:80:main] END
```
