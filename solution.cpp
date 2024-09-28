#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main ()
{
	int marks;
	cin >> marks;

	// (num%2)? printf("odd number") : printf("even number");

	if(marks >= 90)
		printf("A+ Grade");

	else if(marks >= 80 and marks < 90)
		printf("A Grade");

	else if(marks >= 70 and marks < 80)
		printf("B Grade");

	else if(marks >= 60 and marks < 70)
		printf("C Grade");

	if(marks >= 50 and marks < 60)
		printf("D Grade");

	else if(marks >= 25 and marks < 50)
		printf("E Grade");

	else
		printf("bhai kuch to padh leta :(");

	return 0;
}