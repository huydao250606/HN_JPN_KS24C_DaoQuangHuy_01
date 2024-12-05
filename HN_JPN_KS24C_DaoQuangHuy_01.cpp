#include<stdio.h>

int main(){
	int arr[50];
	int ans;
	int leng;
	do{
		printf("\tMENU\n");
		printf("1.nhap so phan tu va gia tri cho mang.\n");
		printf("2.in ra gia tri cac phan tu trong mang.\n");
		printf("3.dem so luong cac so nguyen to co trong mang.\n");
		printf("4.tim gia tri nho thu 2 trong mang.\n");
		printf("5.them mot phan tu vao vi tri ngau nhien trong mang.\n");
		printf("6.xoa mot phan tu tai vi tri cu the.\n");
		printf("7.sap xep mang theo thu tu giam dan.\n");
		printf("8.tim kiem phan tu trong mang.\n");
		printf("9.xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat co o trong mang.\n");
		printf("10.dao nguoc thu tu cac phan tu trong mang.\n");
		printf("11.thoat.\n");
		printf("nhap lua chon cua ban: \n");
		scanf("%d",&ans);
		switch(ans){
			case 1:
				printf("nhap so phan tu cua mang: ");
				scanf("%d",&leng);
				if(leng<0){
					printf("vui long nhap lai!!\n");
					break;
				}else{
				    for(int i=0;i<leng;i++){
					    printf("nhap gia tri phan tu [%d]: ",i+1);
					    scanf("%d",&arr[i]);
				    }
				    break;
		     	}
		    case 2:
			    if(leng<0){
			    	printf("mang rong! vui long nhap mang!!\n");
			    	break;
				}else{
					for(int i=0;i<leng;i++){
						printf("arr[%d]: %d\n",i,arr[i]);
					}
					break;
				}
		    case 3:
		    	if(leng<0){
			    	printf("mang rong! vui long nhap mang!!\n");
			    	break;
				}else{
					
					
				}
			case 4:
				if(leng<0){
			    	printf("mang rong! vui long nhap mang!!\n");
			    	break;
				}else{
					for(int i=0;i<leng;i++){
					    int temp=arr[i];
						if(arr[i+1]<arr[i]){
							arr[i+1]=arr[i];
							arr[i]=temp;
						}
					}
                    for(int i=0;i<leng;i++){
						printf("arr[%d]: %d\n",i,arr[i]);
					}
					break;
				}
			case 5:
				if(leng<0){
			    	printf("mang rong! vui long nhap mang!!\n");
			    	break;
				}else{
				    printf("nhap gia tri can them: ");
	                int a;
	                scanf("%d",&a);
	                printf("nhap vi tri can them: ");
	                int b;
	                scanf("%d",&b);
	                for(int i=leng;i>b;i--){
		                arr[i]=arr[i-1];
	                }
	                arr[b]=a;
	                leng++;
				break;
			    }
			case 6:
			    if(leng<0){
			    	printf("mang rong! vui long nhap mang!!\n");
			    	break;
				}else{
	                printf("nhap vi tri can xoa: ");
	                int b;
	                scanf("%d",&b);
	                for(int i=b;i<leng;i++){
		                arr[i]=arr[i+1];
	                }
	                leng--;
				break;
				}
			case 7: 
			    if(leng<0){
			    	printf("mang rong! vui long nhap mang!!\n");
			    	break;
				}else{
					
					
				break;	
				}
			case 8:
				if(leng<0){
			    	printf("mang rong! vui long nhap mang!!\n");
			    	break;
				}else{
					printf("nhap phan tu can tim: ");
					int find;
					scanf("%d",&find);
					for(int i=0;i<leng;i++){
						if(arr[i]==find){
							printf("phan tu %d co ton tai trong mang!\n",find);
							break;
						}
					}	
				}
			case 9:
			 	if(leng<0){
			    	printf("mang rong! vui long nhap mang!!\n");
			    	break;
				}else{
					for(int i=0;i<leng;i++){
						for(int j=i+1;j<leng;j++){
							if(arr[i]=arr[j]){
								
							}
						}
					}
				}
			case 10:
				if(leng<0){
			    	printf("mang rong! vui long nhap mang!!\n");
			    	break;
				}else{
					for(int i=0;i<leng;i++){
						for(int j=leng;j>0;j--){
							arr[i]=arr[j];
						}
					}
				}
		}	
	}while(ans!=11);
	return 0;
}
