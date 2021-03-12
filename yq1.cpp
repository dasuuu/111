#include<stdio.h>
#include<string.h>

int main(){
	FILE *ff=fopen("D:\\yq_in.txt","r");
	char buff[108];
	char buff1[108];
	char dest[30];
	char pro[30];
	char shu[30];

	fgets(pro,30,(FILE*)ff);
	strncpy(dest,pro,7);
	printf("%s\n",dest);
	char *t=&pro[7];
	printf("%s",t);
	//memcpy(shu,pro,sizeof(char)*20);
	for(int i=0;i<=127;i++){
		fgets(buff,30,(FILE*)ff);
		if(i==11||i==23||i==44||i==57||i==71||i==87||i==100||i==119){
			strncpy(dest,buff,7);
			char *m=&buff[7];
			printf("\n%s\n%s",dest,m);
		}
		else{

			char *n=&buff[7];
			printf("%s",n);
		}
	}
}

