#include<cstdio>
#include<cstring>
int main()
{
	char str1[270];
	int i, k, j, t;
	gets_s(str1, 270);
	for (i = 0; str1[i] != '\0'; i++);// 计数
	t = i % 2;
	for (k = i - 1, j = 0; str1[k] == str1[j]; k--, j++)//回文检测
	{
		if ((t != 0 && k == j) || (t == 0 && k == j + 1)) {
			printf("YES"); break;
		}
	}
	if (k > j && k != j + 1)
		printf("NO");
	return 0;
}