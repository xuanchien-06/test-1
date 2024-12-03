#include<stdio.h>

int main(){
	int arr[100];
	int n,choice,position,value,max = 0;
	int vitri=0;
	do{
	printf("\nMenu\n");	
	printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2.In ra gia tri cac phan tu dang quan ly\n");
	printf("3.In ra gia tri lon nhat cua mang\n");
	printf("4.In ra cac phan tu la so nguyen to trong mang\n");
	printf("5.Them mot phan tu vao trong mang\n");
	printf("6.Xoa mot phan tu trong mang\n");
	printf("7.Sap xep mang theo thu tu tang dan\n");
	printf("8.Tim kiem phan tu(nguoi dung nhap) va in ra vi tri index cua phan tu do\n");
	printf("9.Thoat\n");
	scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu can nhap: ");
				scanf("%d",&n);
				printf("Nhap gia tri cac phan tu:\n");
				for(int i=0;i<n;i++){
					printf("arr[%d]: ",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				printf("In ra gia tri dang quan ly: ");
				for(int i=0;i<n;i++){
					printf("%3d",arr[i]);
				}
				printf("\n");
				break;
			case 3://in ra gia tri lon nhat cua mang
				
				for(int i=0 ; i<n ; i++){
					if(arr[i] > max){
						max=arr[i];
					}
				}
				printf("gia tri lon nhat cua mang la: %d\n",max);
				break;
			case 4:	
				int songuyento;
				printf("\nSo nguyen to co trong mang : ");
				for(int i = 0; i < n; i++){
					if( arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0){
						songuyento = arr[i];
						printf("%3d",songuyento);
					}
				}
				break;
			case 5://them mot phan tu vao trong mang
				printf("Nhap vi tri muon them: ");
				scanf("%d",&position);
				printf("Nhap gia tri muon them: ");
				scanf("%d",&value);
				if(position<0||position>n){
					printf("Vi tri muon them khong hop le\n");
				}else{
					for(int i=n;i>position;i--){
						arr[i]=arr[i-1];
					}
					arr[position]=value;
					n++;
				}	
				for(int i=0;i<n;i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
				case 6:
				printf("Nhap vao vi tri ban muon xoa: ");
				scanf("%d", &position);
				if(position <0 || position>n){
					printf("So ban nhap khong hop le. Vui long thu lai!");
				}
				for(int i =position; i<n-1;i++){
					arr[i]=arr[i+1];
				}
				n--;
				for(int i =0; i<n;i++){
					printf("%d\t", arr[i]);
				}
				printf("\n");
				break;
				case 7:
					for (int i=0;i<n-1;i++){
						for(int j=0;j<n-i-1;j++){
							if(arr[j] > arr[j+1]){
								int temp = arr[j];
								arr[j] = arr[j+1];
								arr[j+1] = temp;
							}
						}
					}	
					printf("Mang da duoc sap xep: ");
					for(int i=0 ;i<n;i++){
						printf("%3d",arr[i]);
					}
					printf("\n");
					break;
				case 8:
					int x;
					printf("Nhap gia tri can tim: ");
					scanf("%d",&x);
					for(int i=0;i<n;i++){
						if(arr[i]==x){
							printf("Phan tu %d o vi tri: %d",x,i);
							vitri=1;
						break;	
						}
					}
					if(vitri=0){
						printf("khong tim thay phan tu");
					}
					break;
				default :
				printf("lua chon khong hop le");		
		}
	}
	while(choice!=9);
	return 0;
}
