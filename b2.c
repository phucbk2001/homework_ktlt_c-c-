#include<stdio.h>

int main() {
	char c;  scanf("%s",&c);
    if(('a'<=c)&&('z'>=c)){
        printf("c la la chu thuong \n");
    }
    else if((c>= 'A') && (c<='Z')){
        printf("c la Chu hoa \n");
  }
    else if((c==' ')||(c=='\t')||(c=='\n')){
        printf("c la khoang trang \n");
  }
    else if((c>'0')&&(c<'9')){
        printf("c la mot chu so \n");
  }
	return 0;
}