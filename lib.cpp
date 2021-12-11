//
// Created by Kenneth Haga on 11/12/21.
//

#include "lib.h"
float numeroMassimo (const float numeri[], int dim){
    numeri [dim];
    float massimo =numeri[0];
    for (int i=0;i<dim;i++){
        if(massimo < numeri[i]){
            massimo = numeri [i];
        }
    }
    return massimo;
}
