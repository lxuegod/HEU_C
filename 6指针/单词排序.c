#include <stdio.h>
#include <string.h>
#define ROWS 5
#define COLUMNS 20
/*
@Filename: ex603.c
@Author: Ju Chengdong
@Version: 1.0
@Date: 2021-03-18
@Description: Sort Words 
@Features: 基于字符数组指针（行指针）实现
*/

/*
 * 函数名称：assign
 * 函数功能：通过键盘输入为多个一维字符数组（字串）赋值
 * 形式参数：arr为一维字符数组指针（行指针）；rows为int型，单词字串个数 
 * 返 回 值：无
 */
void assign(char (*arr)[COLUMNS], int rows){
	// 请编码实现assign函数
	int i;
			for(i=0;i<rows;i++)
			scanf("%s",(arr+i));

}

/*
 * 函数名称：show
 * 函数功能：输出显示所有单词（字串） 
 * 形式参数：arr为一维字符数组指针（行指针）；rows为int型，单词字串个数 
 * 返 回 值：无
 */
void show(char (*arr)[COLUMNS], int rows){
	// 请编码实现show函数
	int i;
			for(i=0;i<rows;i++)
			printf("%s\n",*(arr+i));

}

/*
 * 函数名称：sort
 * 函数功能：对多个一维字符数组（字串）进行排序 
 * 形式参数：arr为一维字符数组指针（行指针）；rows为int型，单词字串个数 
 * 返 回 值：无
 */
void sort(char(*arr)[COLUMNS], int rows){
	// 请编码实现sort函数
	char a[rows][COLUMNS];
			char (*q)[COLUMNS];
			q=a;
			int i,j,x;
			for(i=0;i<rows;i++)
			    for(j=0;j<COLUMNS;j++)
			    {
			    	a[i][j]=*(*(arr+i)+j);
			    }
			for(i=0;i<rows;i++)
			{
				x=0;
			    for(j=0;j<rows;j++)
			    {
			    	if(*(*(q+i))>*(*(q+j)))
			    	x++;
			    }
			    for(j=0;j<COLUMNS;j++)
			    *(*(arr+x)+j)=*(*(q+i)+j);
			   
		    }

}

int main(void){
	//ch为二维字符数组，包含ROWS个单词，每个单词最多COLUMNS个字母
	char ch[ROWS][COLUMNS];
	
	//p是一个指向字符数组的指针，称为行指针，请参见教材Page189
	//必须给p指定长度，否则编译不报错，运行也不报错，但会不正常
	//p与ch等价，因此既可引用p，也可引用ch
	char (*p)[COLUMNS] = ch;
	
	//从键盘输入ROWS个单词，为ch赋值
	assign(p, ROWS);
	
	//对ch中的ROWS个单词进行排序
	sort(p, ROWS);
	
	//输出显示单词排序结果
	show(p, ROWS);
	
	return 0;
}

