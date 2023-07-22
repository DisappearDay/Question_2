//int main()
//{
//	/*char* p;
//	p = "qsiahsnk";
//	char s[] = { "0,1,2,3,4,5" };
//	char ch[] = "I love China!";
//	printf("%s\n",p );*/
//	int a[] = { 1, 100, 3 }, b = 30, c = 40;
//	int* p[3] = { a, &b, &c };
//	// 假如要输出 a[1] = 100;
//	// int *pa = a;
//	// printf("%d\n", *(++pa));
//	printf("%d\n", *(p[0] + 1));
//	printf("%d\n", *p[2]);
//
//	return 0;
//}

#define PI 3.14
void main()
{
	printf("请输入圆的半径：");
	int r;
	scanf("%d", &r);
	printf("半径：%d\n", r);
	double s = PI * r * r;
	printf("该圆的面积为：%4.2f\n", s);
	printf("%f\n", PI);
#undef PI 3.14
	//printf("%d\n", PI);
}
struct Student222
{
	int no;
	char name[20];
	int age;
};
// 使用指针变量传递改变实参的值
void inputStruct(struct Student222* p)
{
	printf("请输入学号、姓名、年龄：\n");
	scanf("%d%s%d", &(p->no), p->name, &(p->age));
}
void outputStruct(struct Student222* p)
{
	printf("%d\t%s\t%d\n", p->no, p->name, p->age);
}
void main()
{
	struct Student222 stu;
	inputStruct(&stu);
	outputStruct(&stu);
}
//int is_max(int* p, int len)
//{
//	int i,max=0;
//	for (i = 0; i < len; i++)
//	{
//		if (max < *(p+i))
//		{
//			max = *(p+i);
//		}
//	}
//	return max;
//}
//
//
//int main()
//{
//
//	int arr[20] = { 1,4,67,89,21,43,21,60,85,35,23,0,54,75,24,54,12,35,37,86 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("最大值是%d",is_max(arr, sz));
//	return 0;
//}


//具体转换规则如下：90~100为A; 80~89为B; 70~79为C; 60~69为D; ? 0~59为E; 
char grade(int n)
{
	switch (n)
	{
		case 10:
		case 9:
			return 'A';
			break;
		case 8:
			return 'B';
			break;
		case 7:
			return 'C';
			break;
		case 6:
			return 'D';
			break;
		default:
			return 'E';
			break;

	}
}

int main()
{
	int n, score=0;
	printf("请输入你的成绩：");
	scanf("%d", &n);
	score = n / 10;
	printf("你的等级为%c\n",grade(score));
	
	return 0;
}
