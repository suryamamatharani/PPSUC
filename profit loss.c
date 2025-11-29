#include<stdio.h>
int main()
{
    int costPrice, sellingPrice;
    scanf("%d %d", &costPrice, &sellingPrice);
    if(sellingPrice > costPrice){
        printf("Profit");
    }
    else if (sellingPrice < costPrice){
        printf("Loss");
    }
    else{
        printf("No Profit and No Loss");
    }
    return 0;
}
