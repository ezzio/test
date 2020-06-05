#include<stdio.h>

void swap(long long* a, long long* b)
{
    long long t = *a;
    *a = *b;
    *b = t;
}
long long partition (long long* arr[], long long low, long long high)
{
    long long pivot = arr[high];  
    long long i = (low - 1);
 	long long j;
    for ( j = low; j <= high- 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;    
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}















void quickSort(long long arr[], long long low, long long high)
{
    if (low < high)
    {
        long long pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main(){
long long n, m;
int i;
	scanf("%lld", &n);
	scanf("%lld", &m);
	long long arr[n];
	for(i =0;i<n;i++){
		scanf("%lld", &arr[i]);
	}
		quickSort(arr,0,n-1);
	long long tong =0;
		for(i = 1;i<=m;i++){
	if(arr[n-1] < arr[n-2]){
	long long k = n-1;
	while(arr[k] < arr[k-1]){
		swap(&arr[k], &arr[k-1]);
		k--;
	}
		tong+=arr[n-1];
		arr[n-1]--;
	}
	else{
		tong+=arr[n-1];
		arr[n-1]--;
	}

}

printf("%lld",tong);
}
