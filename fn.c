#include <stdio.h> 
#include "fn.h"

int sceltaSnackFn(){ 
    int snack; 
 
    printf("\n\n\n\n\nInserire il numero corrispondente allo snack, 0 per terminare.\n\n"); 
    scanf("%d", &snack); 
    return snack; 
} 
void visualizzaDistributore(int showExit) { 
    if (showExit == 0) { 
    printf("\n\n\n\n---------------------Distributore---------------------\n"); 
    } else  { 
    printf("---------------------Distributore-------------[0]Exit-\n"); 
    } 
    printf("|****************************************************|\n"); 
    printf("|       (1) Coca Cola   (2) Fanta   (3) Sprite       |\n"); 
    printf("|           $ 2.49        $ 2.49      $ 2.49         |\n"); 
    printf("|       (4) Pop Corn    (5) Tuc     (6) Patatine     |\n"); 
    printf("|           $ 1.0        $ 1.25        $ 1.0         |\n"); 
    printf("|       (7) Twix        (8) Lion    (9) Sneakers     |\n"); 
    printf("|         $ 0.69         $ 0.69        $ 0.69        |\n"); 
    printf("|****************************************************|\n"); 
    printf("------------------------------------------------❤-❤-❤-\n"); 
     
} 
float logicaCassa(float prezzoSnack) { 
//PrezzoIniziale corrisponde al prezzo degli snacks
    float soldi = 0, prezzoIniziale = prezzoSnack; 
     
    while(soldi < prezzoIniziale){ 
         
        float soldiPrecedenti = soldi; 
        scanf("%f", &soldi); 
         
        prezzoSnack = prezzoSnack - soldi; 
                 
        if (soldi == 0) { 
            break;  
        } 
         
        soldi = soldi + soldiPrecedenti; 
 
 
         
        if (soldi < prezzoIniziale) {  
            printf("Attenzione, mancano $ %.2f \n", prezzoSnack); 
            printf("Inserisci le monete mancanti o digita 0 per la restituzione di quelle precedentemente inserite\n"); 
        }   
 
    } 
 
        if ( soldi == 0) {  
            printf("Acquisto annullato\n");  
            return -1; 
        }  
        
        if (soldi == prezzoIniziale) {
            printf("Hai inserito :  $ %.2f , importo corretto.\n", soldi); 
        }

        if (soldi > prezzoIniziale) {
            printf ("Hai inserito :  $ %.2f, ecco a te il tuo resto : $ %.2f\n",soldi, soldi - prezzoIniziale);
        }
}