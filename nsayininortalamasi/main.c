#include <stdio.h>
#include <stdlib.h>

void ortalamabul(int kacadet, int dizim[])
{
    float ortalama;
    int i;
    float total = 0;
    for(i=0;i<kacadet;i++)
    {
        total = total + dizim[i];
    }
    ortalama = total/kacadet;
    printf("Ortalama = %.2f",(float)ortalama);
}


int main()
{
    int n,not;
    printf("Kac tane sayi gireceksiniz?\n");
    scanf("%d",&n);
    int dizi[n];
    for (int i=0;i<n;i++)
    {
        printf("%d.sayiyi giriniz",i+1);
        scanf("%d",&not);
        dizi[i]=not;
    }

    ortalamabul(n,dizi);
    return 0;
}
