#include <stdio.h>
#include<ctype.h>
#define maxn 1010
/*
输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
*/
char str[maxn];

int main(void)
{
    int letter=0, number=0, blank=0, others=0;
    gets(str); 
    //C 库函数 char *gets(char *str) 从标准输入 stdin 读取一行，并把它存储在 str 所指向的字符串中。
    //当读取到换行符时，或者到达文件末尾时，它会停止，具体视情况而定。
    //字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。
    for(int i=0; str[i]!='\0'; i++){
        if(isalpha(str[i])){
            letter++;
        }else if (isdigit(str[i])){
            number++;
        }else if (isgraph(str[i]))
        {
            others++;
        }else
        {
            blank++;
        }
    }
    printf("%d %d %d %d", letter, number, blank, others);
    return 0;
}