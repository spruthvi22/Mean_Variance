/*
* Author:Pruthvi Suryadevara
* Email: pruthvi.suryadevara@tifr.res.in
* Description: C code find Mean and Variance of [1,2^2,3^2..... n^2] and print to a binary file
* Compiled Output: Mean_6.out using makefile
*/

#include<stdio.h>
#include<stdlib.h>
#include"Mean_Func.h"

int main()
{
  int n=100;
  float *ary=(float*)calloc(n,sizeof(float)); // Defining array of size n
  for(int i=0;i<n;i++)
    {
      ary[i]=((i+1)*(i+1)); // Assigning the values to elements of array
    }
  float *men_var=Men_Var(ary,n); //Calling the Function
  FILE *outfile;
  outfile=fopen("Men_Var.bin","w");
  fwrite(men_var,sizeof(float),2,outfile); // Saving it as a Binary file saves data when only saving numbers
  fclose(outfile);
  free(ary);
  free(men_var);
}
