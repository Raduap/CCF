#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	int min = a[1] - a[0];
	for (int i = 0; i < n; i++)
	{
		int temp = abs(a[i + 1] - a[i]);
		if (min > temp)
			min = temp;
	}
	printf("%d", min);
	return 0;
}