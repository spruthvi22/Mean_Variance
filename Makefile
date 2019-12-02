Mean_out_1: Mean_Variance.c Mean_Func.c Mean_Func.h
	gcc Mean_Variance.c Mean_Func.c -o Mean_3.out

clean:
	rm Mean_3.out
