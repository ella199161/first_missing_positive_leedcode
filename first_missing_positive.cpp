#include <stdio.h>
//#include <tchar.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <random>
#include <fstream>
#include <iomanip>
#include <sys/stat.h>
#include <vector>
#include <string>
#include <sstream>
#include <sys/types.h>
using namespace std;
int main()
{
	int FMI = 1;
	int N = 1;
	vector<int> nums(N,0);
	int i = 0;
	for (i = 0; i < N; i++)
	{
		nums[i] = int(rand()% N * 2) - N;
		cout << nums[i] << "\t";
	}
	for (i = 0; i < N; i++)
	{
		if (nums[i] < 1) nums[i] = N + 2;
	}
	nums[0] = 1;
	for (i = 0; i < N; i++)
	{
		cout << nums[i] << "\t";
	}
	for (i = 0; i < N; i++)
	{
		if (abs(nums[i]) <= N) nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
	}
	for (i = 0; i < N; i++)
	{
		if (nums[i]>0)
		{
			FMI = i+1;
			return FMI;
		}
		if (i==N-1 && FMI==1)
		{
			FMI = N + 1;
			return FMI;
		}
	}
	cout << FMI;
	return FMI;
}