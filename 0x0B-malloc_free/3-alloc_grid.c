#include "main.h"
/**
 * **alloc_grid - creates a dimmessional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int v, g;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (v = 0; v < height; v++)
	{
		array[v] = (int *) malloc(sizeof(int) * width);
		if (array[v] == NULL)
		{
			free(array);
			for (g = 0; g <= v; g++)
				free(array[v]);
			return (NULL);
		}
	}
	for (v = 0; v < height; v++)
	{
		for (g = 0; g < width; g++)
		{
			array[v][g] = 0;
		}
	}
	return (array);
}
