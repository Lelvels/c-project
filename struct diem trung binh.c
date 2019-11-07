#include<stdio.h>
#include<malloc.h>
struct SV {
	float toan;
	float ly;
	float hoa;
	float tb;
};
struct SV *sv1;
void nhap(struct SV *sv1, int i){
	printf("Hay nhap diem \n toan=");
	scanf("%f",&((sv1+i)->toan));
	printf("\nly=");
	scanf("%f",&((sv1+i)->ly));
	printf("\nhoa=");
	scanf("%f",&((sv1+i)->hoa));
}

void hien(struct SV *sv1, int i){
	printf("Diem cac mon cua ban thu %d la:", i+1);
	printf("\ntoan=%f",(sv1+i)->toan);
	printf("\nly=%f",(sv1+i)->ly);
	printf("\nhoa=%f\n",(sv1+i)->hoa);
}
void trungbinh(struct SV *sv1, int i){
	(sv1+i)->tb=(((sv1+i)->hoa+(sv1+i)->toan+(sv1+i)->ly)/3);
	printf("\nDiem trung binh cua ban thu %d la:", i+1);
	printf("%f",(sv1+i)->tb);
}
void sapxep(struct SV *sv1){
	int i,j;
	int n;
	for(i=0;i<n-1;i++){
	  for(j=0;j<n-1-i;j++){
	  	if(((sv1+j)->tb)>((sv1+j+1)->tb)){
	  		float temp=(sv1+j)->tb;
	  		(sv1+j)->tb=(sv1+j+1)->tb;
	  		(sv1+j+1)->tb=temp;
		  }
	  }	
	}
}

int main(){
	int n;
	int i;
	printf("so sinh vien=");
	scanf("%d",&n);
	sv1=(struct SV*)malloc(n*sizeof(struct SV*));
	for(i=0;i<n;i++){
	nhap(sv1,i);
}
    for(i=0;i<n;i++){
	hien(sv1,i);
}
    for(i=0;i<n;i++){
	trungbinh(sv1,i);
}
printf("\ndiem trung binh sau sap xep la:");
sapxep(sv1);
for(i=0;i<n;i++){
printf("%f\t", (sv1+i)->tb);
}
printf("EZ VL");	
}

