#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strncpy:��str2�и���ǰn���ַ�����str1
//void my_cpy(char * str1, const char * str2, int n){
//	int i;
//	for (i = 0; i < n; ++i){
//		str1[i] = str2[i];
//	}
//	puts(str1);
//}
//int main(){
//	char str2[20] = "abcdefgh" ;
//	char str1[20]="1234";
//	my_cpy(str1, str2, 3);
//	system("pause");
//	return 0;
//}

//strncat:��str2�е�ǰn���ַ�ƴ�ӵ�str1�ĺ���
//void my_cat(char *str1, const char *str2, int n){
//	int i;
//	int ret = strlen(str1);
//	for (i = 0; i < n; ++i){
//		str1[ret + i] = str2[i];
//	}
//	puts(str1);
//}
//int main(){
//	char str2[20] = "abcdefgh";
//	char str1[20]="1234";
//	my_cat(str1, str2, 3);
//	system("pause");
//	return 0;
//}

//strncmp:��str1��str2����ǰn���ַ������бȽ� 
//���ڷ���1��С�ڷ���-1�����ڷ���0
int my_cmp(const char * str1, const char * str2, int n){
	int i, j;
	for (i = 0; i < n; ++i){
		for (j = 0; j < n; ++j){
			}
		if (str1[i] == str2[j]){
				return 0;
		}
		else if (str1[i]>str2[j]){
			return 1;
		}
		else
			return -1;
	}
}
int main(){
	char str2[20] = "125defgh";
	char str1[20]="1234";
	int ret=my_cmp(str1, str2, 3);
	printf("%d\n", ret);
	system("pause");
	return 0;
}