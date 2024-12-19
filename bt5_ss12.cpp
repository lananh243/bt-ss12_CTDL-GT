#include<stdio.h>

int binarySearch(int arr[], int n, int target){
	int low = 0;
	int high = n - 1;
	
	while(low <= high){
		int mid = low + (high - low) / 2;
		
		if(arr[mid] == target){
			return mid;
		}else if(arr[mid] > target){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return -1;
}
int main() {
	int n, target;
	printf("Nhap so luong phan tu cua mang : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i = 0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Nhap gia tri can tim : ");
	scanf("%d",&target);
	
	int result = binarySearch(arr, n, target);
	
	if(result != -1){
		printf("Phan tu %d nam o vi tri : %d",target,result);
	}else{
		printf("Ko tim thay phan tu trong mang");
	}
	return 0;
	
}

