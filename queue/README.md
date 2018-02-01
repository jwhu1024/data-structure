# data-struture (queue) [![Build Status](https://travis-ci.org/jwhu1024/data-structure.svg?branch=master)](https://travis-ci.org/jwhu1024/data-structure)
1. cd /data-structure
2. cmake .
3. make
4. ./queue/bin/queue_main

![alt tag](https://www.tutorialspoint.com/data_structures_algorithms/images/queue_diagram.jpg)

```
[1517431373][main.c:16:main] BEGIN
[1517431373][queue.c:19:queue_init] BEGIN
[1517431373][queue.c:29:queue_init] END
[1517431373][main.c:30:main] Queue is empty
[1517431373][queue.c:62:queue_enqueue] BEGIN
[1517431373][queue.c:78:queue_enqueue] 33 enqueue to queue
[1517431373][queue.c:79:queue_enqueue] END
[1517431373][queue.c:62:queue_enqueue] BEGIN
[1517431373][queue.c:78:queue_enqueue] 2 enqueue to queue
[1517431373][queue.c:79:queue_enqueue] END
[1517431373][queue.c:62:queue_enqueue] BEGIN
[1517431373][queue.c:78:queue_enqueue] 32 enqueue to queue
[1517431373][queue.c:79:queue_enqueue] END
[1517431373][queue.c:62:queue_enqueue] BEGIN
[1517431373][queue.c:78:queue_enqueue] 53 enqueue to queue
[1517431373][queue.c:79:queue_enqueue] END
[1517431373][queue.c:62:queue_enqueue] BEGIN
[1517431373][queue.c:78:queue_enqueue] 15 enqueue to queue
[1517431373][queue.c:79:queue_enqueue] END
[1517431373][queue.c:104:queue_print] BEGIN
[1517431373][queue.c:108:queue_print] -----------
[1517431373][queue.c:111:queue_print] [0] -> 33
[1517431373][queue.c:111:queue_print] [1] -> 2
[1517431373][queue.c:111:queue_print] [2] -> 32
[1517431373][queue.c:111:queue_print] [3] -> 53
[1517431373][queue.c:111:queue_print] [4] -> 15
[1517431373][queue.c:113:queue_print] -----------
[1517431373][queue.c:114:queue_print] END
[1517431373][main.c:43:main] Queue is full
[1517431373][queue.c:84:queue_dequeue] BEGIN
[1517431373][queue.c:98:queue_dequeue] END
[1517431373][main.c:47:main] 33 dequeue from queue
[1517431373][queue.c:84:queue_dequeue] BEGIN
[1517431373][queue.c:98:queue_dequeue] END
[1517431373][main.c:48:main] 2 dequeue from queue
[1517431373][queue.c:84:queue_dequeue] BEGIN
[1517431373][queue.c:98:queue_dequeue] END
[1517431373][main.c:49:main] 32 dequeue from queue
[1517431373][queue.c:104:queue_print] BEGIN
[1517431373][queue.c:108:queue_print] -----------
[1517431373][queue.c:111:queue_print] [3] -> 53
[1517431373][queue.c:111:queue_print] [4] -> 15
[1517431373][queue.c:113:queue_print] -----------
[1517431373][queue.c:114:queue_print] END
[1517431373][queue.c:62:queue_enqueue] BEGIN
[1517431373][queue.c:78:queue_enqueue] 30 enqueue to queue
[1517431373][queue.c:79:queue_enqueue] END
[1517431373][queue.c:62:queue_enqueue] BEGIN
[1517431373][queue.c:78:queue_enqueue] 33 enqueue to queue
[1517431373][queue.c:79:queue_enqueue] END
[1517431373][queue.c:104:queue_print] BEGIN
[1517431373][queue.c:108:queue_print] -----------
[1517431373][queue.c:111:queue_print] [3] -> 53
[1517431373][queue.c:111:queue_print] [4] -> 15
[1517431373][queue.c:111:queue_print] [5] -> 30
[1517431373][queue.c:111:queue_print] [6] -> 33
[1517431373][queue.c:113:queue_print] -----------
[1517431373][queue.c:114:queue_print] END
[1517431373][queue.c:84:queue_dequeue] BEGIN
[1517431373][queue.c:98:queue_dequeue] END
[1517431373][main.c:58:main] 53 dequeue from queue
[1517431373][queue.c:84:queue_dequeue] BEGIN
[1517431373][queue.c:98:queue_dequeue] END
[1517431373][main.c:59:main] 15 dequeue from queue
[1517431373][queue.c:84:queue_dequeue] BEGIN
[1517431373][queue.c:98:queue_dequeue] END
[1517431373][main.c:60:main] 30 dequeue from queue
[1517431373][queue.c:104:queue_print] BEGIN
[1517431373][queue.c:108:queue_print] -----------
[1517431373][queue.c:111:queue_print] [6] -> 33
[1517431373][queue.c:113:queue_print] -----------
[1517431373][queue.c:114:queue_print] END
[1517431373][queue.c:35:queue_destroy] BEGIN
[1517431373][queue.c:46:queue_destroy] END
[1517431373][main.c:74:main] END
```
