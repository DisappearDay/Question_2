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
