
#include "Sort.h"


/* this function receive array fron caller function the rearrange the orignal elemnts with the required sort 
param arr : pointer to the required sort array
param SizeOfArr : size of arr 
*/
void
SortFun (int arr[], int SizeOfArr)
{
  if (arr == NULL)		/* test input from user */
    return;


  if (SizeOfArr == 0)		/* not make sense if size of arr = 0 */
    return;


  uint IterateOdd = 0, IterateEven = 0, IterateOddOffset = 0, IterateEvenOffset = 0, SizeOFOdd = 0, SizeOfEven = 0;
  int *TempArrOdd = calloc (10, sizeof (int));	//  descending
  int *TempArrEven = calloc (10, sizeof (int));	// ascending

  for (int i = 0; i < SizeOfArr; i++)
    {

      if (arr[i] % 2 == 0)
	{
	  TempArrEven[(IterateEven++) + (10 * IterateEvenOffset)] = arr[i];
	  SizeOfEven++;		/* record the size of even elements arr */
	}
      if (arr[i] % 2 != 0)
	{
	  TempArrOdd[(IterateOdd++) + (10 * IterateOddOffset)] = arr[i];
	  SizeOFOdd++;		/* record the size of odd elements arr */
	}


      /* here check if it require to reallocate arr */
      if (IterateOdd >= 10)
	{
	  IterateOddOffset++;
	  TempArrOdd =
	    realloc (TempArrOdd,
		     (sizeof (int) * 10) * (IterateOddOffset + 1));
	}
      if (IterateEven >= 10)
	{
	  IterateEvenOffset++;
	  TempArrEven =
	    realloc (TempArrEven,
		     (sizeof (int) * 10) * (IterateEvenOffset + 1));

	}


    }



  /* sort each array with specific requierment in the assignment */
  SortAlgorithm (true, TempArrOdd, SizeOFOdd);
  SortAlgorithm (false, TempArrEven, SizeOfEven);





  /* here we overwitten the qriginal array with the true elemts sort */
  int i_arr = 0;
  for (int i = 0; i < SizeOfEven; i++)
    {
      arr[i_arr++] = TempArrEven[i];
    }

  for (int i = 0; i < SizeOFOdd; i++)
    {
      arr[i_arr++] = TempArrOdd[i];
    }






}



/*sort ascending or descending depend on boolean variable */
void
SortAlgorithm (bool IsAssending, int Arr[], int size)
{
  int Temp = 0;

  for (int i = 0; i < size; i++)
    {
      for (int j = i; j < size; j++)
	{

	  if (IsAssending == false)
	    {
	      if (Arr[j] < Arr[i])
		{
		  Temp = Arr[j];
		  Arr[j] = Arr[i];
		  Arr[i] = Temp;
		}
	    }
	  else
	    {
	      if (Arr[j] > Arr[i])
		{
		  Temp = Arr[j];
		  Arr[j] = Arr[i];
		  Arr[i] = Temp;
		}
	    }

	}


    }






}
