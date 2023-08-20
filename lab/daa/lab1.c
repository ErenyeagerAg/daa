#include <stdio.h>


int partition(int a[100],int s,int e){
    int key = a[s],i=s+1,j=e,temp;
    while (1)
    {
        while(key >= a[i]){
            i++;
        }
        while(key < a[j]){
            j--;
        }
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else{
            temp = a[j];
            a[j] = a[s];
            a[s] = temp;
            return j;
        }
    }
    
}

void Quicksort(int a[100],int s, int e){
    if(s<e){
        int p = partition(a,s,e);
        Quicksort(a,s,p-1);
        Quicksort(a,p+1,e);
    }
}

int main(){
    int a[100],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i = 0; i < n ; i++){
        scanf("%d",&a[i]);
    }
    Quicksort(a,0,n-1);
    printf("Sorted Array\n");
    for(int i =0; i < n; i++){
        printf("%d",a[i]);
    }
    return 0;
}