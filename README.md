# Make-utility
in this repo I will use make tool

## 1. why using make?
 1. To make sacripts to build executable files insted of make "gcc" every time
 2. make sacripts and tools
 3. To orgnize the compilation process 
 4. Fully comtrol on the output and the time

## 2. It's only name is makefiile?
 No you can write whatever name you want by this way -> make -f file_name
 
## 3.Syntax:
 1. general way to write : <br>
 target : prerequiste <br>
 <tab>  action
 2. How to define variable?:
  file= main.c <br>
  to call the var we use this way -> $(file-name) . <br>
  in our case :$(file).
