# Temperature Converter Challenge
## Task
In this challenge, write a program that takes in three arguments, a start temperature (in Celsius), an end temperature (in Celsius) and a step size. Print out a table that goes from the start temperature to the end temperature, in steps of the step size; you do not actually need to print the final end temperature if the step size does not exactly match. You should perform input validation: do not accept start temperatures less than a lower limit (which your code should specify as a constant) or higher than an upper limit (which your code should also specify). You should not allow a step size greater than the difference in temperatures. (This exercise was based on a problem from C Programming Language). 

Sample run:   
	Please give in a lower limit, limit >= 0: 10
	Please give in a higher limit, 10 > limit <= 50000: 20
	Please give in a step, 0 < step <= 10: 4

	Celsius         Fahrenheit
	-------         ----------
	10.000000       50.000000
	14.000000       57.200000
	18.000000       64.400000

## Sample Solution

	/*
	 *
	 * Kernighan & Ritchie - The C Programming Language
	 * Exercise 1.4
	 * Write a Program to print the corresponding Celsius to Fahrenheit table
	 * Extension: Scanf
	 *
	 * Author: Denis Meyer, www.calltopower.de
	 *
	 */
	#include <stdio.h>

	#define LOWER_LIMIT 0
	#define HIGHER_LIMIT 50000

	int main(void) {
		double fahr, cel;
		int limit_low = -1;
		int limit_high = -1;
		int step = -1;
		int max_step_size = 0;
		
		/* Read in lower, higher limit and step */
		while(limit_low < (int) LOWER_LIMIT) {
			printf("Please give in a lower limit, limit >= %d: ", (int) LOWER_LIMIT);
			scanf("%d", &limit_low);
		}
		while((limit_high <= limit_low) || (limit_high > (int) HIGHER_LIMIT)) {
			printf("Please give in a higher limit, %d < limit <= %d: ", limit_low, (int) HIGHER_LIMIT);
			scanf("%d", &limit_high);
		}
		max_step_size = limit_high - limit_low;
		while((step <= 0) || (step > max_step_size)) {
			printf("Please give in a step, 0 < step >= %d: ", max_step_size);
			scanf("%d", &step);
		}
		
		/* Initialise Celsius-Variable */
		cel = limit_low;
		
		/* Print the Table */
		printf("\nCelsius\t\tFahrenheit");
		printf("\n-------\t\t----------\n");
		while(cel <= limit_high) {
			fahr = (9.0 * cel) / 5.0 + 32.0;
			printf("%f\t%f\n", cel, fahr);
			cel += step;
		}
		printf("\n");
		
		return 0;
	}
