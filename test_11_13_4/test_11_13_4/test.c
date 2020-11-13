#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//A:B第二，我第三
	//B:我第二，E第四
	//C:我第一，D第二
	//D:C最后，我第三
	//E:我第四，A第一
	//各选手都只说对了一半，求比赛后的名次
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 3) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							//防止出现重复名次
							if (a*b*c*d*e == 120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
