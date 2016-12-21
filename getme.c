#include<stdio.h>
/*void add(x)
{
    x=x+1;
}
void main()
{
    int a=1;
    add(a);
    printf("%d",a);
}


char *GetMemory3(int num)

{

    char *p = (char *)malloc (sizeof(char) * num);
    printf("%d",p);
    return p; //返回指针 p

}
 
void main(void)

{

    char *str = NULL;
    str = GetMemory3(100);  //这里指针 str也和指针 p的指向一样的内存块。
    printf("%d",str);
    strcpy(str, "hello");
    printf(str);
}*/

char *GetMemory2(void)

{

    char p[] = "hello world";
    printf("%d",p);
        return p;

}

void main(void)

{

    char *str = NULL;

    str = GetMemory2();
    printf("\n%d",str);
    printf(str);

}
/*
void GetMemory1(char *p)

{

    p = (char *)malloc(100);

}

void main(void)

{

    char *str = NULL;

    GetMemory1(str);

    strcpy(str, "hello world");

    printf(str);

}

void main(void)

{

   char *str = (char*)malloc(100);

   strcpy(str, "hello");
    printf("%d\n",str);
   free(str);
    printf("%d",str);
   if (str != NULL)

   {

      strcpy(str, "world");

     printf(str);

   }

}
*/
