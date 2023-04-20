#include <stdio.h> 
 
int  sceltaSnackFn(); 
void visualizzaDistributore(int showExit); 
float logicaCassa(float); 
 
int main() { 
     
    float prezzo = 0, restoSoldi; 
    int showExit = 0, i = 0; 
     
    while (i < 10) { 
         
        visualizzaDistributore(showExit); 
        
        int sceltaSnack = sceltaSnackFn(); 
     
        showExit = 1 ; 
     
        if (sceltaSnack == 0) { 
            printf("Grazie e Arrivederci!\n\n\n\n\n");
            break; 
        } 
         
        printf("Stai acquistando\a : "); 
         
        switch(sceltaSnack){ 
        case 1 : printf("-Coca cola-\n"); 
                prezzo = 2.49; 
                break; 
        case 2 : printf("-Fanta-\n"); 
                prezzo = 2.49; 
                break; 
        case 3 : printf("-Sprite-\n"); 
                prezzo = 2.49; 
                break; 
        case 4 : printf("-Pop Corn-\n"); 
                prezzo = 1; 
                break; 
        case 5 : printf("-Tuc-\n"); 
                prezzo = 1.25; 
                break; 
        case 6 : printf("-Patatine-\n"); 
                prezzo = 1; 
                break; 
        case 7 : printf("-Twix-\n"); 
                prezzo = 0.69; 
                break; 
        case 8 : printf("-Lion-\n"); 
                prezzo = 0.69; 
                break; 
        case 9 : printf("-Sneakers-\n"); 
                prezzo = 0.69; 
                break; 
        } 
     
        printf("Il totale da pagare è $ %.2f, inserisci le monete.\n", prezzo); 
         
        logicaCassa(prezzo); 
         
        printf("Grazie e Arrivederci!\n\n\n\n\n"); 
    
        i++;
    }     
    
    
    return 0; 
} 
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