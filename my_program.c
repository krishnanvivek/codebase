#include <stdio.h>

int a;
char b;
float c;

int *ptr_a;
char *ptr_b;
float *ptr_c;
int **p;

void main (void)
{

void print_datatype_size(void);
void print_datatype_value(void);
void print_pointer_size(void);
void print_pointer_value(void);

a = 5;
b = 'v';
c = 4.3454;

ptr_a = &a;
ptr_b = &b;
ptr_c = &c;

print_datatype_size();
print_datatype_value();
print_pointer_size();
print_pointer_value();

/* change values here */
printf("\nCHANGING THE VALUES for a,b,c\n");
a = 65536;
b = 'A';
c = 3.1454545;

print_datatype_size();
print_datatype_value();
print_pointer_size();
print_pointer_value();

int **ptr_ptr_a;
ptr_ptr_a = &ptr_a;
printf("*ptr_a; and value at *ptr_a is %d\n", *ptr_a);
printf("**ptr_ptr_a; and value at **ptr_ptr_a is %d\n", **ptr_ptr_a);
}

void print_datatype_size (void)
{
printf("\nSIZE OF DATA TYPES\n");
printf("==================\n");
printf("a is an integer and its size is %d\n",sizeof(int));
printf("b is an character and its size is %d\n",sizeof(char));
printf("c is an float  and its size is %d\n",sizeof(float));
}

void print_datatype_value (void)
{
printf("\nVALUE OF DATA TYPES\n");
printf("===================\n");
printf("a is an integer and its value is %d\n",a);
printf("b is an character and its value is %c\n",b);
printf("c is an float  and its value is %f\n",c);

}

void print_pointer_size (void)
{
printf("\nSIZE OF DATA TYPE POINTERS\n");
printf("==========================\n");
printf("ptr_a is an integer_pointer and its size is %d\n",sizeof(int*));
printf("ptr_b is an character_pointer and its size is %d\n",sizeof(char*));
printf("ptr_c is an float_pointer  and its size is %d\n",sizeof(float*));

}


void print_pointer_value (void)
{
printf("\nVALUE OF DATA TYPE POINTERS\n");
printf("===========================\n");
printf("a is an integer and its POINTERs value is %p\n",ptr_a);
printf("b is an character and its POINTERs value is %p\n",ptr_b);
printf("c is an float  and its POINTERs value is %p\n",ptr_c);
}
