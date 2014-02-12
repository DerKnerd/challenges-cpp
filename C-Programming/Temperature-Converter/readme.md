# Temperature Converter Challenge
## Task
In this challenge, write a program that takes in three arguments, a start temperature (in Celsius), an end temperature (in Celsius) and a step size. Print out a table that goes from the start temperature to the end temperature, in steps of the step size; you do not actually need to print the final end temperature if the step size does not exactly match. You should perform input validation: do not accept start temperatures less than a lower limit (which your code should specify as a constant) or higher than an upper limit (which your code should also specify). You should not allow a step size greater than the difference in temperatures. (This exercise was based on a problem from C Programming Language). 

## Sample run

	Please give in a lower limit, limit >= 0: 10
	Please give in a higher limit, 10 > limit <= 50000: 20
	Please give in a step, 0 < step <= 10: 4

	Celsius         Fahrenheit
	-------         ----------
	10.000000       50.000000
	14.000000       57.200000
	18.000000       64.400000