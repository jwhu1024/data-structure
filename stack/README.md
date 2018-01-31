# data-struture (stack) [![Build Status](https://travis-ci.org/jwhu1024/data-structure.svg?branch=master)](https://travis-ci.org/jwhu1024/data-structure)
1. cd /data-structure
2. cmake .
3. make
4. ./stack/bin/stack_main

![alt tag](https://www.tutorialspoint.com/data_structures_algorithms/images/stack_representation.jpg)

```
[1517336268][main.c:16:main] BEGIN
[1517336268][stack.c:20:stack_init] BEGIN
[1517336268][stack.c:34:stack_init] END
[1517336268][main.c:30:main] Stack is empty
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 25 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 57 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 8 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 95 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 50 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 91 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 16 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 81 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 37 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][stack.c:40:stack_push] BEGIN
[1517336268][stack.c:51:stack_push] 22 pushed to stack
[1517336268][stack.c:52:stack_push] END
[1517336268][main.c:56:main] Stack is full
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:59:main] 22 popped from stack
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:60:main] 37 popped from stack
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:61:main] 81 popped from stack
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:62:main] 16 popped from stack
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:63:main] 91 popped from stack
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:64:main] 50 popped from stack
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:65:main] 95 popped from stack
[1517336268][stack.c:93:stack_print] BEGIN
[1517336268][stack.c:95:stack_print] |-----------
[1517336268][stack.c:98:stack_print] | [2] -> 8
[1517336268][stack.c:98:stack_print] | [1] -> 57
[1517336268][stack.c:98:stack_print] | [0] -> 25
[1517336268][stack.c:100:stack_print] |-----------
[1517336268][stack.c:101:stack_print] END
[1517336268][stack.c:71:stack_peek] BEGIN
[1517336268][main.c:68:main] 8 peek from stack
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:70:main] 8 popped from stack
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:71:main] 57 popped from stack
[1517336268][stack.c:58:stack_pop] BEGIN
[1517336268][main.c:72:main] 25 popped from stack
[1517336268][stack.c:107:stack_destroy] BEGIN
[1517336268][stack.c:113:stack_destroy] Free the memory for stack pointer
[1517336268][stack.c:117:stack_destroy] END
[1517336268][main.c:81:main] END
```
