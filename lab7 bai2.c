#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct user{
	char hovaten[100];
};
struct user *sv;
void nhap(struct user *sv){
	fflush(stdin);
	printf("\nNhap ten:");
	gets(sv->hovaten);
}
void chuanhoachucai(struct user *sv){
	int k;
	int i;
	strlwr(sv->hovaten);
	k=strlen(sv->hovaten);
	(sv->hovaten[0])=(sv->hovaten[0])-32;
	for(i=0;i<k;i++){
		if((sv->hovaten[i])==' '){
			(sv->hovaten[i+1])=(sv->hovaten[i+1])-32;
		}
	}
	printf("Ten cua ban la:\"%s\"",(sv->hovaten));
}
void chuanhoadaucach(struct user *sv){
	int k;
	int i;
	k=strlen(sv->hovaten); 
	
    while(sv->hovaten[0]==' ') strcpy(&sv->hovaten[0],&sv->hovaten[1]);
    
    for(i=0;i<k-1;i++){
    	if(sv->hovaten[i]==' ' && sv->hovaten[i+1]==' '){
    		strcpy(&sv->hovaten[i],&sv->hovaten[i+1]);
    		
		}
	}
	
	while(sv->hovaten[k-1]==' '){
		strcpy(&sv->hovaten[k-1], &sv->hovaten[k]);
	}
	
}
int main(){
	struct user *sv;
	sv=(struct user*)malloc(100*sizeof(struct user));
	nhap(sv);
	chuanhoadaucach(sv);
	chuanhoachucai(sv);
	return 0;
}
