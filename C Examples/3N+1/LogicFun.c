
#include "LogicFun.h"



int* FunTest(int arr[]) /* depend on the requirement we will receive any function and stop only when we hit zero */
{
	int i = 0, num = 0, TempNum = 0;
	int ResArr[10], count = 1, max = 0, len = 0;

	while ((arr[i] != 0) || (arr[i + 1] != 0)) {
		num = arr[i + 1];
		len++;
		while ((num >= arr[i])) {

			TempNum = num;
			while ((TempNum > 1)) {

				if (TempNum % 2 == 0) {
					TempNum = TempNum / 2;
				} else {
					TempNum = 3 * TempNum + 1;
				}
				count++;
			}
			if (count > max)
				max = count; /* max is variable to hold the maximum number for each number */

			count = 0;  // rest count
			num--;     // move to next number
		}
		ResArr[i / 2] = max + 1;
		max = 0;

		i += 2;

	}

	/* allocate new space for Array of Results */
	int *Res = malloc(sizeof(int) * len * 3);
	/* iteration variables for arrays */
	int i_Res = 0, i_arr = 0, i_ResArr = 0;

	while (i_Res < (len * 3)) /* iterate till reach the and of the total send data */
	{
		/* store result as required by the assignment */
		Res[i_Res++] = arr[i_arr++];
		Res[i_Res++] = arr[i_arr++];
		Res[i_Res++] = ResArr[i_ResArr++];

	}

	/* here we only print the result on screen but this is only for testing 
	 * this function must return pointer to array of results that expected
	 *  to receive form caller 
	 */
	i_Res = 0;
	while (i_Res < (len * 3)) {
		printf("%d     ", Res[i_Res]); /* print all results */
		i_Res++;

		if ((i_Res ) % 3 == 0)
			printf("\n"); /* every 3 lines must print new line for readability */
	}
	
	return Res ;

}

