/*
* Author:Pruthvi Suryadevara
* Email: pruthvi.suryadevara@tifr.res.in
* Description: C code find Mean and Vriance of [1,2^2,3^2..... n^2] uisng Malloc
* Compiled Output: Mean_1.out 
*/

#include<stdio.h>
#include<stdlib.h>

float* Men_Var(float *ary,int n) //Defining the function
{
  // Men_Var function takes in the input array, its size and returns the
  // Mean and Variance 
  float *men_var=(float*)malloc(2*sizeof(float));
  men_var[0]=0;
  men_var[1]=0;
  for(int i=0;i<n;i++)
  {
    men_var[0]=men_var[0]+ary[i];
    men_var[1]=men_var[1]+(ary[i]*ary[i]);
  }
  men_var[0]=men_var[0]/n;
  men_var[1]=(men_var[1]/n)-(men_var[0]*men_var[0]);
  return(men_var);
}

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
