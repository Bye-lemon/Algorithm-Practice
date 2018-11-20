/*判断是否严格递增后恒定后递减*/
#include <stdio.h>

int main (void)
{
	int n, count, array[101];
	
	scanf ("%d", &n);
	for (count = 0; count < n; count ++)
		scanf ("%d", &array[count]);
	count --;
	while ((0 != count) && (array[count] < array[count-1]))
		count --;
	while ((0 != count) && (array[count] == array[count-1]))
		count --;
	while ((0 != count) && (array[count] > array[count-1]))
		count --;
	if (0 == count)
		printf ("YES");
	else 
		printf ("NO");
	return 0;
} 
