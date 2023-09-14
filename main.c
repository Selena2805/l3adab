#include <stdio.h>
#include <stdlib.h>

int main()
{int a, b, c, r;



    printf("1_addition\n 2_soustraction \n 3_division \n 4_multiplication\n");
    scanf("%d",&a );

    printf("choose a number");
    scanf("%d",&b );

    printf("choose anther number");
    scanf("%d",&c );

    if (a== 1) {
     r=b+c;
        printf("la somme est %d" ,r );
    }
else if (a== 2){
    r=b-c;
    printf(" la  reponse est %d", r);
}
else if (a== 3){
    r=b/c;
    printf(" la  reponse est %d", r);

}
else if (a== 4){
   r=b*c;
    printf(" la  reponse est %d", r);
}
    return 0;
}

