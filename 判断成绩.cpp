#include <stdio.h>
int main()
{
	const int PASS=60;
	double score;
	printf("���꣬������ĳɼ���");
	scanf("%lf",&score);
	if (score>=PASS)
	{
		printf("��ĳɼ��ǣ�%.1lf\n",score);
		printf("��ϲ�㣬���꣬�ɹ�����\n");
		printf("�����Ժ�����������·��лл��\n");
	 } 
	 else
	 {
	 	printf("��ĳɼ���:%.1lf\n",score);
	 	printf("Ŷ�����꣬�㲢û�м���\n");
	 	printf("�������ֵܣ�׼�������Ʋðɣ�\n");
	 }
	 return 0;
}
