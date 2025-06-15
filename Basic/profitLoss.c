#include<stdio.h>
int main(){
    int bp, mp, d, sp;
    printf("Enter the buying Price: ");
    scanf("%d", &bp);
    printf("Enter the marked price: ");
    scanf("%d", &mp);
    printf("Enter the discount: ");
    scanf("%d", &d);
    sp = mp - (d*mp)/100;
    if (sp>bp)
    {
        float profit = (float)sp - (float)bp;
        float profit_percent = (profit*100)/bp;
        printf("Seller has made a profit of %f",profit_percent);
    }
    else if (bp>sp)
    {
        float loss = (float)bp - (float)sp;
        float loss_percent = (loss*100)/bp;
        printf("Seller has made a loss of %f", loss_percent);
    }
    else{
        printf("Seller has made neither profit nor loss");
    }
    
    
return 0;
}