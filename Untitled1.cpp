#include <stdio.h>
#include<string.h>
#include<malloc.h>
#include<conio.h>
struct user{
	char str3[100];
	char str4[100]; 
};

struct user *p;

int	main()
{
    struct user *p;
	p = (struct user*)malloc(100*sizeof(struct user));
		
	char other[] = "Hello it me";
	char str1[20], str2[20];
	char str5[20];
	    
	//print ket qua dau tien
	printf("%s\n", other);
	
	//ki tu null cat doan ki tu
	//NULL luon la ket thuc cua chuoi ki tu la la: '\0'
	other[5] = '\0';
	printf("%s\n", other);
	
	//ham in hoa toan bo chuoi
	strupr(other);
	printf("%s\n", other);
	
	//ham in thuong toan bo chuoi
	strlwr(other);
	printf("%s\n", other);
	
	//ham so sanh chuoi: strcmp(chuoi 1, chuoi 2) == 0 neu chuoi 1 = chuoi 2
    //                   strcmp(chuoi 1, chuoi 2) == 1 neu chuoi 1 > chuoi 2                                              	
	//                   strcmp(chuoi 1, chuoi 2) == -1 neu chuoi 1< chuoi 2 
	//so sanh dua tren bang chu cai, ki tu dung sau ki tu truoc se lon hon, so sanh giong nhu chu so 
	//VD so sanh abasfaga va ac, ac=13 va ab=12(null) thi du sau 12 co bn ki tu thi ac > ab
	//strcmp se phan biet chu cai in hoa hay thuong, con stricmp se khong phan biet in hoa hay in thuong, chu thuong se lon hon chu hoa
	// VI DU CU THE

    printf("Nhap chuoi 1:");
    gets(str1); 
    printf("Nhap chuoi 2:");
    gets(str2);
    if (strcmp(str1, str2) == 0) {
    printf("2 chuoi bang nhau.");
    } else if (strcmp(str1, str2) > 0) {
    int k=strcmp(str1, str2);
    printf("Chuoi 1 lon hon chuoi 2 , k=%d", k);
    } else {
    int k=strcmp(str1, str2);
    printf("Chuoi 1 nho hon chuoi 2 , k=%d", k);
    }
    getch();
    
    //ham copy: chep toan bo chuoi nguon (source) sang chuoi diem den (destination). 
    //cu phap: strcpy(str destination, str source);
    
	strcpy(str1,str2);  //copy chuoi thu 2 sang chuoi thu 1;
	
	printf("\n\ncopy chuoi thu 2 sang chuoi thu 1");
    printf("\nchuoi thu 1:\"%s\"", str1);
    printf("\nchuoi thu 2:\"%s\"", str2);
    getch();
	 
    //copy chuoi nhung chi lay 1 so ki tu dau: strncpy(str destination, str source, n);
    //n la so ki tu ban muon cpy tinh tu ki tu dau tien;
    
    printf("\n\ncopy chuoi thu 4 sang chuoi thu 3 voi n ki tu");
    printf("\nNhap chuoi 3:");
    gets(p->str3); 
    printf("\nNhap chuoi 4:");
    gets(p->str4);    
    int n=3;
    strncpy(p->str3, p->str4, n); //copy chuoi 4 sang chuoi 3 nhung chi lay n ki tu
    printf("\nchuoi thu 3:\"%s\"", p->str3);
    printf("\nchuoi thu 4:\"%s\"", p->str4);
 
    //strdup:dung de tao ra mot chuoi moi giong het chuoi da cho, nhung lai luu giu bang con tro, phai su dung con tro de cap co the cap phat bo nho.
	
	printf("\nnhap chuoi thu 5:");
    gets(str5);
    printf("Tao ra mot chuoi moi giong het chuoi 5");
    char *s = strdup(str5);
    printf("\ns = %s", s);
	getch();
}






































