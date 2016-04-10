#include <stdio.h>

using namespace std;

int main()
{
    int x, i;
    int Vn[13]= {1000, 900, 500, 400, 100, 90, 50,40, 10, 9, 5, 4,1};
    char *Vc[13]={"m","cm","d","cd","c","xc","l","xl","x","ix","v","iv","i"};
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        printf("%-4d  ",x);
        i=0;
        while(x>0){
            if(x>=Vn[i]){
                printf("%s",Vc[i]);
                x=x-Vn[i];

            }else
                i++;
        }
        printf("\n");
    }


    return 0;
}
