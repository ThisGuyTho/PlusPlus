// ElijahPembertonProj09.cpp.
//12/2/18

#include "pch.h"
#include <iostream>
#include <stdio.h>

int str_length(char s[], int start) {//this will look for the length of a string.

	if (s[start] == '\0') {

		return start;

	}

	else {

		return str_length(s, start + 1);

	}

}

int sum(int n) {//this will look for the sum of a number.

	if (n == 0) {

		return 0;

	}

	else {

		return n + sum(n - 1);

	}

}

int main()

{

	char s[100] = "Hello World";

	printf("String length is %d\n", str_length(s, 0)+1);//this prints out the string length.


	int n = 100;
	printf("Sum of %d is %d\n", n, sum(n));//this prints out the number length.

	return 0;

}