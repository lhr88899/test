aa:a.o fun.o fun1.o
    gcc -o $@ -I. $^
%.o:%.c
    gcc -o $@ $^ -I. -c 
