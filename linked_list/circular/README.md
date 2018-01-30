# data-struture (circular list)

1. cd /data-structure
2. cmake .
3. make
4. ./linked_list/circular/bin/clist_main

```
[1517250923][main.c:147:main] BEGIN
[1517250923][clist.c:22:clist_init] BEGIN
[1517250923][clist.c:44:clist_init] END
[1517250923][clist.c:82:clist_insert_node_front] BEGIN
[1517250923][clist.c:103:clist_insert_node_front] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Aaron,		Age: 46
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:82:clist_insert_node_front] BEGIN
[1517250923][clist.c:103:clist_insert_node_front] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [2]	Name: Aaron,		Age: 46
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:109:clist_insert_node_tail] BEGIN
[1517250923][clist.c:146:clist_insert_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [2]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [3]	Name: Alastair,		Age: 2
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:109:clist_insert_node_tail] BEGIN
[1517250923][clist.c:146:clist_insert_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [2]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [3]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [4]	Name: Badger,		Age: 21
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:152:clist_insert_node_index] BEGIN
[1517250923][clist.c:82:clist_insert_node_front] BEGIN
[1517250923][clist.c:103:clist_insert_node_front] END
[1517250923][clist.c:202:clist_insert_node_index] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [2]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [3]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [4]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [5]	Name: Badger,		Age: 21
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:152:clist_insert_node_index] BEGIN
[1517250923][clist.c:202:clist_insert_node_index] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [2]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [3]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [4]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [5]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [6]	Name: Badger,		Age: 21
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:82:clist_insert_node_front] BEGIN
[1517250923][clist.c:103:clist_insert_node_front] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Rocky,		Age: 44
[1517250923][clist.c:342:clist_print] [2]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [3]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [4]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [5]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [6]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [7]	Name: Badger,		Age: 21
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:209:clist_remove_node_front] BEGIN
[1517250923][clist.c:237:clist_remove_node_front] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [2]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [3]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [4]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [5]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [6]	Name: Badger,		Age: 21
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:82:clist_insert_node_front] BEGIN
[1517250923][clist.c:103:clist_insert_node_front] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [2]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [3]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [4]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [5]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [6]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [7]	Name: Badger,		Age: 21
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:82:clist_insert_node_front] BEGIN
[1517250923][clist.c:103:clist_insert_node_front] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Rocky,		Age: 64
[1517250923][clist.c:342:clist_print] [2]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [3]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [4]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [5]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [6]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [7]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [8]	Name: Badger,		Age: 21
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:209:clist_remove_node_front] BEGIN
[1517250923][clist.c:237:clist_remove_node_front] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [2]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [3]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [4]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [5]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [6]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [7]	Name: Badger,		Age: 21
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:82:clist_insert_node_front] BEGIN
[1517250923][clist.c:103:clist_insert_node_front] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Donald,		Age: 93
[1517250923][clist.c:342:clist_print] [2]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [3]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [4]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [5]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [6]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [7]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [8]	Name: Badger,		Age: 21
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:243:clist_remove_node_tail] BEGIN
[1517250923][clist.c:279:clist_remove_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Donald,		Age: 93
[1517250923][clist.c:342:clist_print] [2]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [3]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [4]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [5]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [6]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [7]	Name: Casey,		Age: 52
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:109:clist_insert_node_tail] BEGIN
[1517250923][clist.c:146:clist_insert_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Donald,		Age: 93
[1517250923][clist.c:342:clist_print] [2]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [3]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [4]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [5]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [6]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [7]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [8]	Name: Derek,		Age: 95
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:109:clist_insert_node_tail] BEGIN
[1517250923][clist.c:146:clist_insert_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Donald,		Age: 93
[1517250923][clist.c:342:clist_print] [2]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [3]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [4]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [5]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [6]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [7]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [8]	Name: Derek,		Age: 95
[1517250923][clist.c:342:clist_print] [9]	Name: Egerton,		Age: 89
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:243:clist_remove_node_tail] BEGIN
[1517250923][clist.c:279:clist_remove_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Donald,		Age: 93
[1517250923][clist.c:342:clist_print] [2]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [3]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [4]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [5]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [6]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [7]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [8]	Name: Derek,		Age: 95
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:109:clist_insert_node_tail] BEGIN
[1517250923][clist.c:146:clist_insert_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Donald,		Age: 93
[1517250923][clist.c:342:clist_print] [2]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [3]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [4]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [5]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [6]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [7]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [8]	Name: Derek,		Age: 95
[1517250923][clist.c:342:clist_print] [9]	Name: Freeman,		Age: 63
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:285:clist_remove_node_index] BEGIN
[1517250923][clist.c:209:clist_remove_node_front] BEGIN
[1517250923][clist.c:237:clist_remove_node_front] END
[1517250923][clist.c:326:clist_remove_node_index] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [2]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [3]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [4]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [5]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [6]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [7]	Name: Derek,		Age: 95
[1517250923][clist.c:342:clist_print] [8]	Name: Freeman,		Age: 63
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:109:clist_insert_node_tail] BEGIN
[1517250923][clist.c:146:clist_insert_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [2]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [3]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [4]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [5]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [6]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [7]	Name: Derek,		Age: 95
[1517250923][clist.c:342:clist_print] [8]	Name: Freeman,		Age: 63
[1517250923][clist.c:342:clist_print] [9]	Name: Kelvin,		Age: 40
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:109:clist_insert_node_tail] BEGIN
[1517250923][clist.c:146:clist_insert_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [2]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [3]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [4]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [5]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [6]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [7]	Name: Derek,		Age: 95
[1517250923][clist.c:342:clist_print] [8]	Name: Freeman,		Age: 63
[1517250923][clist.c:342:clist_print] [9]	Name: Kelvin,		Age: 40
[1517250923][clist.c:342:clist_print] [10]	Name: Leonard,		Age: 17
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:109:clist_insert_node_tail] BEGIN
[1517250923][clist.c:146:clist_insert_node_tail] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [2]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [3]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [4]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [5]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [6]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [7]	Name: Derek,		Age: 95
[1517250923][clist.c:342:clist_print] [8]	Name: Freeman,		Age: 63
[1517250923][clist.c:342:clist_print] [9]	Name: Kelvin,		Age: 40
[1517250923][clist.c:342:clist_print] [10]	Name: Leonard,		Age: 17
[1517250923][clist.c:342:clist_print] [11]	Name: Lucas,		Age: 67
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][clist.c:285:clist_remove_node_index] BEGIN
[1517250923][clist.c:243:clist_remove_node_tail] BEGIN
[1517250923][clist.c:279:clist_remove_node_tail] END
[1517250923][clist.c:326:clist_remove_node_index] END
[1517250923][clist.c:332:clist_print] BEGIN
[1517250923][clist.c:342:clist_print] [1]	Name: Farley,		Age: 73
[1517250923][clist.c:342:clist_print] [2]	Name: Carver,		Age: 19
[1517250923][clist.c:342:clist_print] [3]	Name: Eagle,		Age: 95
[1517250923][clist.c:342:clist_print] [4]	Name: Aaron,		Age: 46
[1517250923][clist.c:342:clist_print] [5]	Name: Alastair,		Age: 2
[1517250923][clist.c:342:clist_print] [6]	Name: Casey,		Age: 52
[1517250923][clist.c:342:clist_print] [7]	Name: Derek,		Age: 95
[1517250923][clist.c:342:clist_print] [8]	Name: Freeman,		Age: 63
[1517250923][clist.c:342:clist_print] [9]	Name: Kelvin,		Age: 40
[1517250923][clist.c:342:clist_print] [10]	Name: Leonard,		Age: 17
[1517250923][clist.c:351:clist_print] ----------------------------------
[1517250923][clist.c:352:clist_print] END
[1517250923][main.c:181:main] clist length : 10
[1517250923][clist.c:362:clist_search_node] BEGIN
[1517250923][clist.c:387:clist_search_node] [3] Name: Eagle, Age: 95
[1517250923][main.c:185:main] Eagle is in the list
[1517250923][clist.c:51:clist_destroy] BEGIN
[1517250923][clist.c:74:clist_destroy] Release 10 data in list
[1517250923][clist.c:75:clist_destroy] END
[1517250923][main.c:194:main] END
```
