void main(){
	int arr[6]={10,20,30,40,50,60};
	for(int i =0;i<6;i++){
		printf("arr[%d]: %d ",i,arr[i]);
	}
	printf("\n");
	int x,y;
	printf("Enter x position : ");
	scanf("%d",&x);
	printf("Enter y position : ");
	scanf("%d",&y);
	
	poss(arr,x,y);
	for(int i =0;i<6;i++){
		printf("arr[%d]: %d ",i,arr[i]);
	}
}
void poss(int* arr,int x,int y){
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y]=temp;
}