//importando a biblioteca Nextion
#include "Nextion.h"

//declaração de objeto -- id page, id componente e nome do componente;
NexDSButton bt0 = NexDSButton(0, 1, "bt0");
NexDSButton bt1 = NexDSButton(0, 2, "bt1");

uint32_t estado_botao; //armazena o estado do botão

void setup(){
    nexInit();
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
}

void loop(){
    bt0.getValue(&estado_botao);
    if(estado_botao > 0)
    {
        digitalWrite(13, HIGH);
        delay(5000);
        bt0.setValue(0);
    } 
    else 
    {
        digitalWrite(13, LOW);
    }

    bt1.getValue(&estado_botao);
    if(estado_botao > 0 )
    {
      digitalWrite(12, HIGH);
       delay(5000);
       bt1.setValue(0);
    } 
    else 
    {
      digitalWrite(12,LOW);
    }
}
