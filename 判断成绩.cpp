#include <stdio.h>
int main()
{
	const int PASS=60;
	double score;
	printf("少年，输入你的成绩：");
	scanf("%lf",&score);
	if (score>=PASS)
	{
		printf("你的成绩是：%.1lf\n",score);
		printf("恭喜你，少年，成功及格！\n");
		printf("查完以后给不及格的让路，谢谢。\n");
	 } 
	 else
	 {
	 	printf("你的成绩是:%.1lf\n",score);
	 	printf("哦豁，少年，你并没有及格。\n");
	 	printf("害怕吗兄弟，准备接受制裁吧！\n");
	 }
	 return 0;
}
