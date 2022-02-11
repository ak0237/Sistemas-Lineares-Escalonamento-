#include <stdio.h>
    float sistema [4][3];

float popula();

int main(){
    int l, c; 

    for( l = 0; l < 4; l++){
        printf("Descreva a  funcao \n");
        
        for( c = 0; c <= 3; c++){
            popula(l, c);

        }
            
    }
    

   /* for(i=0; i<4; i++){
        printf("%f \n", sistema[0][i]);
    }*/
}

float popula(l, c){
    char r;
    
        switch(c){
            case 0:
                printf("x: ");
                scanf("%f", &sistema[l][c]);
                break;
            
            case 1: 
                printf("y: ");
                scanf("%f", &sistema[l][c]);
                break;

            case 2: 
            printf("z: ");
            scanf("%f", &sistema[l][c]);
            break;

            case 3: 
                printf("solucao: ");
                scanf("%f", &sistema[l][c]);
                printf("Sua funcao e: %.0fx + %.0fy + %.0fz = %.0f\n", sistema[l][0], sistema[l][1], sistema[l][2], sistema[l][3]);
        }
        
        

    
}
