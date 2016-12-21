#include<stdio.h>
#include<math.h>
void main(){ 
int number = 2; 
        int i; 
        char flag = 0; 
        for(number ; number<=100; number++){ 
                flag = 1; 
                for ( i=2; i<=sqrt(number); i++){ 
                        if (number%i == 0){ 
                                flag = 0;  //用标志变量来判断for循环是否成功进入if语句
                                break; 
                        } 
                } 

                if (flag == 1) {  
                        printf("%d\n",number);  
                  }}}
