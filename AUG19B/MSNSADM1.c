#include <stdio.h>
void func();
int main()
{
	int t;
	scanf("%d", &t);
	while(t > 0)
	{
		func();
		t--;
	}
	return 0;
}
void func()
{
	int a[150], f, i, max = 0, n;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &f);
		a[i] = a[i] * 20 - f * 10;
		if(a[i] > max)
			max = a[i];
	}
	printf("%d\n", max);
}
