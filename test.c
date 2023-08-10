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
//int main()
//{
//	//// 4)strcpy(字符串1,字符串2) //问题 重要,字符串1申请的空间要尽量大
//	//char string3[8] = "China!";
//	//char string4[] = "I love delicious food!I love delicious food!";
//	//strcpy(string3, string4);
//	//// puts(string3);
//	//printf("%s\n", string3);
//	char* s[] = { "one" , "two" , "three" };//定义字符指针数组
//	int length = sizeof(s);//24 --为什么是24个?
//	printf("%d\n", length);
//}



//void main()
//{
//	char* s = "one"; //定义字符指针数组 , "two" , "three"
//	int length = sizeof(s);
//	printf("*s 的值：%c\n", *s);
//	printf("s 的值是地址：：%ld\n", s); //s 指向的是“one”中 的 o 对应的地址，一
//	//个地址值占8个字节
//		printf("s 所占的地址数：%ld\n", sizeof(s)); // 8
//	printf("%ld\n", sizeof(*s));
//	int n = 10;
//	int* p = &n;
//	printf("p所指向的地址值所占用的字节：%ld\n", sizeof(p));
//
//	printf("---------------\n");
//
//	char* ss[] = { "one" , "two" };
//    printf("%c\n" , **ss); //这是错的
//	printf("---------------\n");
//
//
//	printf("%ld\n", ss[0]);
//	printf("%ld\n", ss[1]);
//	printf("字符1:%c\n", *ss[0]);
//	printf("字符2:%c\n", *ss[1]);
//	printf("%ld\n", ss);
//	printf("%ld\n", sizeof(ss[0]));
//	printf("%ld\n", sizeof(ss[1]));
//	printf("%ld\n", sizeof(*ss[0]));
//	printf("%ld\n", sizeof(*ss[1]));
//	printf("%ld\n", sizeof(ss));
//	
//	printf("---------------\n");
//	int a[] = { 10,20 };
//	printf("%ld\n", sizeof(a));
//}



//void main()
//{
//	int i = 0;
//	char* s[] = { "one" , "two" , "three" };//定义字符指针数组
//	char* pa = s[0];
//	for (i = 0; i < 11; i++)
//		printf("%c ", pa[i]);
//
//
//	/*char string[] = "apple";
//	char* p = "apple";
//	printf("%d\n", p);
//	printf("%c\n", *p);
//	printf("%d\n", strlen(p));
//	int i, length = 0;
//	for (i = 0; i < 3; i++)
//		length += strlen(s[i]);
//	printf("指针数组个数：%d\n", length);
//	char* pa = s[0];
//	for (i = 0; i < length; i++)
//		printf("%c ", pa[i]);
//	printf("\n");*/
//	return 0;
//}




//void main()
//{
//	int n = 4;
//	switch (n)
//	{
//	default: printf("default语句");
//	case 1:
//		printf("1\n");
//	case 2: printf("2\n");
//	case 3: printf("3\n");
//	}
//}




//void main()
//{
//	int a = 5;
//	switch (a)
//	{
//	default:
//		a += 10;
//	case 1:
//		a += 1;
//		break;
//	case 0:
//		a += 0;
//		break;
//	case 2:
//		a += 2;
//		break;
//	case 3:
//		a += 3;
//		break;
//	}
//	printf("%d\n", a);
//}


//int main()
//{
//	(*(void (*) ()) 0) ();
//	return 0;
//}





typedef int (*myfun)(int, int);
int max11(int x, int y)
{
	return x > y ? x : y;
}
void main()
{
	myfun p = &max11; 
	printf("%d\n",p(100, 200));
	printf("%d\n",(*p)(20, 10));
	
}

// 1. 在键盘上输入一个3行3列矩阵的各个元素的值（值为整数），然后输出矩阵第一行与第三行元素之和。

//int main()
//{
//
//	printf("请输入一个三行三列的矩阵\n");
//	int arr[3][3] = { 0 };
//	int i, j, sum1 = 0, sum3 = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i == 0)
//			{
//				sum1 += arr[i][j];
//			}
//			if (i == 2)
//			{
//				sum3 += arr[i][j];
//			}
//		}
//	}
//	printf("第一行的元素为%d\n第二行的元素和为%d\n", sum1, sum3);
//
//	return 0;
//
//}



/* 2. 从键盘输入一个正整数，
判断其能否被5或7整除。输出"能被5整除"，或者"能被7整除"，
或者"既能被5整除又能被7整除"，或者"既不能被5整除也不能被7整除"等信息 */

//
//void main()
//{
//	int n;
//	printf("请从键盘输入一个正整数：");
//	scanf("%d", &n);
//	if (n % 5 == 0)
//	{
//		if (n % 7 == 0)
//			printf("既能被5整除又能被7整除");
//		else
//			printf("能被5整除");
//	}
//	else if (n % 7 == 0)
//		printf("能被7整除");
//	else
//		printf("不能被5或7整除");
//}



//3. 输入三角形的三个边的长度，判断出这是个什么三角形(等腰、等边或者不能构成三角形)。

//void main()
//{
//	int a, b, c;
//	printf("请输入三角形的3边长：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b <= c || a + c <= b || b + c <= a)
//		printf("不能构成三角形\n");
//	else if (a == b && b == c)
//		printf("等边三角形");
//	else if (a == b || b == c || c == a)
//		printf("等腰三角形");
//	else
//		printf("其他三角形");
//}



//int  main()
//{
//	int i = 0;
//	char* s[] = { "one" , "two" , "three" };//定义字符指针数组
//	char* pa = s[0];
//	for (i = 0; i < 11; i++)
//		printf("%c ", pa[i]);
//	return 0;
//}



//int main()
//{
//	int nums[5] = { -8,-3,1,4,6 };
//	int sz=sizeof(nums) / sizeof(nums[0]);
//	int* left = nums;
//	int* right = nums + sz-1;
//	int newnums[5] = {0};
//	int i=sz-1;
//	while (left<=right)
//	{
//		if (*left + *right > 0)
//		{
//			newnums[i] = (*right) * (*right);
//			i--;
//			right--;
//		}
//		else
//		{
//			newnums[i] = (*left) * (*left);
//			i--;
//			left++;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", newnums[i]);
//	}
//
//	return 0;
//}




int main()
{
	float i = 10.1;
	printf("%04.4f\n", i);
	return 0;
}

#include<stdio.h>



//void main() {
//	float x = 1, y;
//	y = (++x) * (x++) * (++x); 
//	printf("%f\n", x); 
//	printf("%f\n", y);
//
//
//
//
//	x = 1;
//	// 3 * 3 : ++x : 操作的是 x 的值，相当于 x 自增1； ++ 的运算符优先级 大于 * 的，所
//	//以先算 ++x ，再算 * ；
//		// 第一次 ++x ：2 * ++x ；
//		// 第二次 ++x : 2 * 3
//		// 第三次 ：因为 ++x 改变的是 x 的值，所以 此时 运算的时候， x 的值 为 3， 即：3
//	//	* 3 = 9
//		y = (x++) * (x++);
//	//
//	printf("%f\n", x); // 4
//	printf("%f\n", y);
//}

//void main() {
//	int a = 3, b = 3, c = 5;
//	int sum = 1 + b + (++b / 4);
//	printf("sum = %d\n", sum);
//
//
//
//	// 1. 3 + 然后算小括号的 ==> 3 + 1(b 的值自加1变为4) ==> 4 + 1 ==> 5
//	a = 3, b = 3;
//	int res = b + (++b / 4); // 4 + (4/4) = 5
//	printf("res = %d\n", res);
//}



//辗转相除法
int gcd(int a, int b) {

if (a < b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}
int m = 0;
m = a % b;
while (m != 0) {
	a = b;
	b = m;
	m = a % b;
}
return b;
}
//void main() {
//	// 1.a、b分别表示要求的2个数的最大公约数.
//	int a, b;
//	// 2.m 变量用来存放余数.
//	int m = 0;
//	printf("请输入2个数：\n");
//	scanf("%d%d", &a, &b);
//	if (a < b) {
//		int temp = 0;
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	m = a % b;
//	// 循环条件结束是 余数 m == 0 , 表示找到了最大公约数,最大公约数是循环结束时 b 的值.
//	while (m != 0) {
//		a = b; //b的值重新作为 被除数
//		b = m; //余数m作为除数
//		m = a % b;
//	}
//	printf("最大公约数是%d\n", b);
//	int x = 18, y = 9;
//	printf("%d和%d的最大公约数是 %d\n", x, y, gcd(x, y));
//}


int main()
{
	char arr[20] = "a0sfd\0saidjh";
	printf("%d\n", strlen(arr));

	return 0;
}
//int main()
//{
//	//char* p;
//	//scanf("%s", p);
//	//printf("%s\n", p);
//	return 0;
//}

int main()
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	if (str1 == str2)
		printf("Equal\n");
	else
		printf("Unequal\n");
	return 0;
}
int main()
{
	int i=0, j=100, count = 0;
	/*for (i = 0; i < 100; i++)
	{
		for (j = 100; j >= i; j -= 2)
		{
			count += j - i;
		}
	}*/

	while (i < 100)
	{
		j = 100;
		while (j >= i)
		{
			count += j - i;
			j -= 2;
		}
		i++;
	}




	printf("%d\n", count);
	return 0;
}

//int main()
//{
//	int i, n = 20;
//	double a = 2, b = 1, s = 0, t;
//	for (i = 1;
//		i<=n
//		; i++)
//	{
//		s =
//			s+a/b
//			;
//
//		t=a
//			;
//		a = a + b;
//
//		b=t
//			;
//	}
//	printf("sum=%16.10f\n",
//		s
//	);
//	return 0;
//}
// 
// 
// 

//有4个圆塔，圆心分别为（2，2）、（－2，2）、（－2，－2）、（2，－2），
//圆半径为1，如图4 - 8所示。这4个塔的高度为10m，塔以外无建筑物。今输入任一点的坐标，
//求该点的建筑高度（塔外的高度为零）。

//#include<stdio.h>
//int main()
//{
//	int h = 10;
//	float x1 = 2, y1 = 2, x2 = -2, y2 = -2, x3 = -2, y3 = -2, x4 = 2, y4 = -2, x, y, d1, d2, d3, d4;
//	printf("请输入一个点(x,y)：");
//	scanf("%f,%f", &x, &y);
//	d1 = (x - x4) * (x - x4) + (y - y4) * (y - y4);      //求该点到各中心点距离
//	d2 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
//	d3 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
//	d4 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
//	if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1)  h = 0;    //判断该点是否在塔外
//	printf("该点高度为%d\n", h);
//	return 0;
//}




//从键盘输入一个字符串，将其中的小写字母全部转换成大写字母，
//然后输出到一个磁盘文件“test”中保存。输入的字符串以“!”结束
//int main()
//{
//	printf("请输入一个字符串，以“！”为结尾：");
//	char* arr[100] = { 0 };
//	int n = 0;
//	scanf("%s", arr);
//	char* p = arr;
//	while (*p != '!')
//	{
//		if ((*p <= 'a') && (*p <= 'z'))
//		{
//			*p -= 32;
//		}
//		n++;
//	}
//	FILE* pf = fopen("test7.txt", "w");
//
//	fprintf(pf, "%s", arr);
//
//
//	fclose(pf);
//	pf = NULL;
//	printf("成功");
//
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE* fp;
	char ch;
	fp = fopen("text.txt", "w+");
	if (fp == NULL)
	{
		printf("Cannot open file strike any key exit!");
		exit(1);
	}
	printf("input the string:");
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '!') break;
		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		fprintf(fp, "%c", ch);
	}
	fclose(fp);
}
//int main()
//{
//
//	int i, j=0;
//	for (i = 1900; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0))
//		{
//			printf("%d ", i);
//			j++;
//			if (j % 10 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//
//	return 0;
//}




int is_huiwen(char* ps, int n)
{
	char* left = ps;
	char* right = ps + n - 1;
	while (left < right)
	{
		if ((*left) != (*right))
		{
			return 0;
		}
		left++;
		right--;
	}
	return 1;

}


int main()
{
	printf("请输入一行字符串：");
	char str[20] = { 0 };
	char* p = str;
	scanf("%s", p);
	int sz = strlen(p);
	int res = is_huiwen(p, sz);
	printf("%d\n", res);

	return 0;
}


#include <stdio.h>
//int main()
//{
//	int i = 1;
//	//dev编译器是6 因为dev和vs处理i++的方式不同
//	int ret = (i++) + (i++) + (i++);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	printf("请输入一个整数的二进制序列数:");
//	int i = 0,n=0,k=0,x=0;
//	char arr[32] = { 0 };
//	char odd[16] = { 0 };
//	char even[16] = { 0 };
//    scanf("%s", &arr[i]);
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i+=2)
//	{
//		even[k] = arr[i];
//		k++;
//	}
//	for (i = 1; i < sz; i += 2)
//	{
//		odd[x] = arr[i];
//		x++;
//	}
//	printf("%s\n", odd);
//	printf("%s\n", even);
//
//	return 0;
//}

//
//int diff_bit(int m, int n) {
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m, n;
//	printf("请输入两个数字： ");
//
//	scanf("%d %d", &m, &n);
//
//	int ret = diff_bit(m, n);
//
//	printf("ret=%d\n", ret);
//
//	
//	return 0;
//}



//int main()
//{
//	char a=0;
//	int b = 7;
//	int c = 127;
//	a = b + c;
//	printf("%d\n", a);
//
//	return 0;
//}

char* is_fanzhuan(char* str,int len)
{
	int left = 0;
	int right = len-1;  
	while (left <= right)
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
	return str;
}


//int main()
//{
//	char arr[20] = "abcdefg";
//	int len=strlen(arr);
//	printf("%s\n",is_fanzhuan(arr, len));
//	
//
//	return 0;
//}


int main()
{
	int a = 27;
	int i,count=0;
	for (i = 0; i < 8; i++)
	{
		if ((a >> i) & 1 == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
