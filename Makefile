Mean_out_1: Mean_Variance.c Mean_Func.c Mean_Func.h
	gcc -Wall Mean_Variance.c Mean_Func.c -lm -lgsl -lgslcblas -o Mean_7.out

clean:
	rm Mean_7.out
