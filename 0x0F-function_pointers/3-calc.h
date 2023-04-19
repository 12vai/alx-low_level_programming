#ifndef HEADER_
#define HEADER_
/**
 * struct op - struct op
 *
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int v, int g);
} op_t;

int op_add(int v, int g);
int op_sub(int v, int g);
int op_mul(int v, int g);
int op_div(int v, int g);
int op_mod(int v, int g);
int (*get_op_func(char *s))(int, int);
#endif
