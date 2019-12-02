/*
* Author:Pruthvi Suryadevara
* Email: pruthvi.suryadevara@tifr.res.in
* Description: C code find Mean and Variance using GSL library
* Compiled Output: Mean_7.out using makefile
*/

#include<stdio.h>
#include<stdlib.h>
#include"Mean_Func.h"
#include <gsl/gsl_math.h>
#include <gsl/gsl_statistics_float.h> 

int main()
{
  int n=100;
  float *ary=(float*)calloc(n,sizeof(float)); // Defining array of size n
  for(int i=0;i<n;i++)
    {
      ary[i]=((i+1)*(i+1)); // Assigning the values to elements of array
    }
  float *men_var=Men_Var(ary,n); //Calling the Function
  printf("Mean = %f \nVariance =  %f\n",men_var[0],men_var[1]);
  float* men_var_GSL=(float*)malloc(2*sizeof(float));
  men_var_GSL[0]= gsl_stats_float_mean(ary,1,n);  // Calling GSL library functions for mean and variance
  men_var_GSL[1]= gsl_stats_float_variance(ary,1,n);
  printf("Mean_GSL = %f \nVariance_GSL =  %f\n",men_var_GSL[0],men_var_GSL[1]);
  free(ary);
  free(men_var);
}
