#include "search_algos.h"

/**                                                                                                     
* linear_search - searches for a value in an array using linear algorithm                                                                                      
* @array: Pointer to the beginning of an array                                                          
* @size: The size of the array                                                                          
* @value: value to search for                                                                           
* Return: Nothing                                                                                       
*/
int linear_search(int *array, size_t size, int value)
{
        size_t i;

        if (!array)
                return (-1);

        for (i = 0; i < size; i++)
        {
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
                if (array[i] == value)
                        return (i);
        }
        return (-1);
}