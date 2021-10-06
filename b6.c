#include <stdio.h>
#include <string.h> 
int demchuoi(char str[])
{   int length =sizeof str;
    int chuoi = 1;
    for (int i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            chuoi++;
        }
    }
    return chuoi;
}
void strdelete(char *s,int vt,int sl)
{  
    int n=strlen(s),i;
    for (i=vt;i<=n-sl;++i)
        s[i]=s[i+sl];
}
void chuanhoachuoi(char a[])
{
    int i;
    while(a[strlen(a)-1]==' ')// xoa het cac ki tu trong o cuoi chuoi
        a[strlen(a)-1]=0;
    while(a[0]==' ')          //xoa het cac ki tu trong o dau chuoi
        strdelete(a,0,1);
    i=0;
    while(i<strlen(a))
    {               //xoa hai ki tu trong lien tiep
        if((a[i]==' ')&&(a[i+1]==' '))
         strdelete(a,i,1);
        else ++i;
    }

    i=0;
    while(i<strlen(a))    //xoa cac ki tu khong phai la chu cai
    {    if((a[i]!=' ')&&(!isalpha(a[i])))
        strdelete(a,i,1);
        else ++i;
    }
    printf("so phan tu cua chuoi a la %d",demchuoi(a));
}
 
int main()
{
   char a[100];
   printf("Nhap vao chuoi:");
   fgets(a, sizeof a, stdin);
   chuanhoachuoi(a);
   printf("Chuoi sau chuan hoa:%s",a);
   return 0;
}