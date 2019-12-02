/*
* Author:Pruthvi Suryadevara
* Email: pruthvi.suryadevara@tifr.res.in
* Description: C code find Mean and Vriance of [1,2^2,3^2..... n^2] uisng Imported Function
* Compiled Output: Mean_2.out using makefile
*/

#include<stdio.h>
#include<stdlib.h>
#include"Mean_Func.h"

int main()
{
  int n=100;
  float *ary=(float*)malloc(n*sizeof(float)); // Defining array of size n
  for(int i=0;i<n;i++)
    {
      ary[i]=((i+1)*(i+1)); // Assigning the values to elements of array
    }
  float *men_var=Men_Var(ary,n); //Calling the Function
  printf("Mean = %f \nVariance =  %f\n",men_var[0],men_var[1]);
  free(ary);
  free(men_var);
}
