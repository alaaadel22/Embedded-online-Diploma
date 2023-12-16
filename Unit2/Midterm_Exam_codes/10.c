#include <stdio.h>

int count_max1 (unsigned int num);

int main() 
{
	unsigned int num;
	printf("Enter number: ");
	scanf("%u", &num);
	int max1 = count_max1(num);
	if (max1 == 0) 
		printf("No sequence of ones found in the binary number.\n");
    else 
		printf("The maximum number of consecutive ones is: %d\n", max1);
	return 0;
}
int count_max1(unsigned int num) 
{
	int max_count = 0; // Stores the maximum number of 1s
	int current_count = 0; // Tracks the current sequence of ones
	for (int i = 0; i < sizeof(unsigned int) * 8; i++) 
	{
		if ((num >> i) & 1) 
			current_count++; 
        else 
		{
			max_count = current_count > max_count ? current_count : max_count;
			current_count = 0; 
		}
	}
	max_count = current_count > max_count ? current_count : max_count;
	return max_count;
}
