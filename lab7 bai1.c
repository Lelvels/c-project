#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct user{
	char ho[50];
	char td[50];
    char ten[50];
    char fullname[100];
};
struct user *sv;
void nhap(struct user *sv, int i){
	fflush(stdin);
	printf("\nNhap ten\nHo:");
	gets((sv+i)->ho);
	printf("\nTen dem:");
	gets((sv+i)->td);
	printf("\nTen:");
	gets((sv+i)->ten);
}
void chuanhoa(struct user *sv, int i){
	
	strlwr((sv+i)->ho);
	(sv+i)->ho[0]=(sv+i)->ho[0]-32;
   
	strlwr((sv+i)->td);
	(sv+i)->td[0]=(sv+i)->td[0]-32;

	strlwr((sv+i)->ten);
	(sv+i)->ten[0]=(sv+i)->ten[0]-32;
}
void hovaten(struct user *sv, int i)
{	
	strcat((sv+i)->fullname,(sv+i)->ho);
	strcat((sv+i)->fullname," ");
	
	strcat((sv+i)->fullname,(sv+i)->td);
	strcat((sv+i)->fullname," ");
	
	strcat((sv+i)->fullname,(sv+i)->ten);
	strcat((sv+i)->fullname," ");
	
	printf("\nFull name = %s",(sv+i)->fullname);
}
int main(){
	struct user *sv;
	int i;
	int n;
	sv=(struct user *)malloc(100 * sizeof(struct user));
	printf("So nguoi:");
	scanf("%d", &n);
	for(i=0;i<n;i++){
	nhap(sv,i);
	}
	
	for(i=0;i<n;i++){
	chuanhoa(sv,i);
	}
	
	for(i=0;i<n;i++){
	hovaten(sv,i);
	}
}
