Parallely two compilation pipeplines are running, one for main.c, and another for hello.c

hello.c         main.c
-------         -------
PreProc         PreProc
Compiler        Compiler
Assembler       Assembler
    |               |
    V               V
 hello.o         main.o
========== LINKER =================
          hello (Executable)
===================================

LOADER - loads this executable... and a process is launched... executed---termianted.
======================================================================================================

Symbol Table:
=============
Datastructure created by compiler, and has
    - symbols
        - global and static variables, functions.
    - it shows which symbol resides where.
    - it shows a given symbol is resolved or not

4 storage class specifier:
    - Auto      -- Block Scope, Temporary variable, Storage: Stack

    - Static    -- 
                -- Global Static -> Scope: File Scope, Lifetime: through-out Program, Storage: Data Segment
                -- Local Static -> Scope: Block Scope, Lifetime: through-out Program, Storage: Data Segment

    - Register  --  Block Scope, Temporary variable, CPU registers

    - Extern    -- Global Variables, Scope: through-out Program , Lifetime: through-out Program, Storage: Data Segment

Process Memory Map:
===================
    1. Text / Code Segment (T)
    2. Data Segment
        - BSS - UnInitialized Data Segment
        - Initialized Data Segment
    3. Heap Segment
    4. Stack Segment

    Process: a program under execution


Shared objects (.so) - Shared Libraries - Dynamic Link Libraries. (DLL)
Static Libraries (.a) -  (.lib)

Compile Time - Compiler error
Link Time - Linker error
Run/Load Time - Runtime error

Logical Errors - more dangerous :)


glibc ... number of functions....may be used  multiple executables

Case#1:
=======
exe-1        exe-2       exe-3      2KB
glibc        glibc       glibc      4KB



Case#2:
=======
exe-1        exe-2       exe-3      2KB
========================================
            glibc  (.so)            4KB
==========================================


=========================================================
clean.c

make
..
..
make
up to date.

make clean
up to date.


Build a project:
==================
make

Rebuild the project:
====================
make clean
make


Make
CMake --make
Bazel
colcon -- make
Yocto...poky -- make
