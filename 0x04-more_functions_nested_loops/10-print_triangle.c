#include "main.h"
/**
 * print_triangle - function that print a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangles(int size)
{
int sp, ro, tr;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (ro = 0; ro <= (size - 1); ro++)
{
for (sp = 0; sp <= (size - 1); sp++)
{
_putchar(' ');
}
for (tr = 0; tr <= ro; tr++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
