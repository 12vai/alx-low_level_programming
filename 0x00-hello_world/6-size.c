 #include <stdio.h>
 /**
  * main _ Entry point
  * Description: output various size of computer types
  *Return: 0
  */
 int main(void)

 {
 char c;
 int i;
 long int d;
 long long int e;
 float f;

 printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(c));
 printf("Size of an int : %lu byte(s)\n", (unsigned long)sizeof(i));
 printf("Size of a long int : %lu byte(s)\n", (unsigned long)sizeof(d));
 printf("Size of a long long int : %lu byte(s)\n", (unsigned long)sizeof(e));
 printf("Size of a float : %lu byte(s)\n", (unsigned long)sizeof(f));
 return (0);
 }
