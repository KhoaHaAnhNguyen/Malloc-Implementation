## Description

In this assignment you will build your own implementation of malloc and free. That is, you will need to implement a library that interacts with the operating system to perform heap management on behalf of a user process as demonstrated in class.

## Building and Running the Code

The code compiles into four shared libraries and six test programs. To build the code, change to your top level assignment directory and type:
```
make
```
Once you have the library, you can use it to override the existing malloc by using
LD_PRELOAD. The following example shows running the ffnf test using the First Fit shared library:
```
$ env LD_PRELOAD=lib/libmalloc-ff.so tests/ffnf
```

To run the other heap management schemes replace libmalloc-ff.so with the appropriate library:
```
Best-Fit: libmalloc-bf.so
First-Fit: libmalloc-ff.so
Next-Fit: libmalloc-nf.so
Worst-Fit: libmalloc-wf.so
```

## Debugging
While running the tests, you may encounter some segfaults and other memory errors. Because we are side-loading our own malloc implementation, you will need to do the following to debug a test application using gdb.
```
$ gdb ./tests/ffnf
...
(gdb) set exec-wrapper env LD_PRELOAD=./lib/libmalloc-ff.so
(gdb) run
...
(gdb) where
```