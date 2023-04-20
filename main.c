#include <stdio.h> 
#include "fn.h"

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