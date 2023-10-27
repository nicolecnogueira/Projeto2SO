#include "trem.h"
#include <QtCore>
#include <mutex>
#include <iostream>


static QMutex mutex[7];

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}
//Função que recebe a velocidade e altera
void Trem::setVelocidade(int value){
    velocidade = value;
    if (value == 0){
        velocidade = 1;
    }
}

//Função booleana que verifica se a região é crítica
bool analisarRegCritica(int reg) {
   return mutex[reg].tryLock();
   std::cout << "ANALISAR";//flag
}

//Função que verifica a existencia de mais de uma região critica
bool analisarDuasRegCriticas(int reg1, int reg2) {
    //mutex[reg1].tryLock();
   // mutex[reg2].tryLock();
   if (mutex[reg1].tryLock() && mutex[reg2].tryLock()) {
        return true; // Ambos os mutexes foram bloqueados com sucesso
        std::cout << "ANALISAR"; //flag
   }

   // Se não foi possível bloquear ambos os mutexes, desbloqueia qualquer um que tenha sido bloqueado
   if (mutex[reg1].tryLock()) {
        mutex[reg1].unlock();
        std::cout << "ANALISAR";//flag
   }

   if (mutex[reg2].tryLock()) {
        mutex[reg2].unlock();
        std::cout << "ANALISAR";
   }

  return false;
  // Não foi possível bloquear ambos os mutexes
  std::cout << "ANALISAR";
}

//Função que desbloqueia a thread de acordo com a região
void liberarRegCritica(int reg) {

       // mutex[reg].tryLock();
        mutex[reg].unlock();
        std::cout << "LIBERA";
}



//Função a ser executada após executar trem->START
void Trem::run(){  
    while(true){
        if (velocidade != 0) {
        switch(ID){
        case 1:     //Trem 1
            //regiões críticas trem 1
            if (x == 460 && y == 20) {
                liberarRegCritica(0);
            }

            else if (x == 190 && y == 140) {
                liberarRegCritica(1);
            }

            else if (x == 320 && y == 140) {
                liberarRegCritica(2);
            }

            //percusso trem 1

            if (y == 20 && x <460){
                x+=10;
            }
            else if (x == 460 && y < 140){
                if(y == 110){
                    bool livre = analisarRegCritica(0);
                    if (livre) y +=10;
                }
                else{
                y+=10;
                }
            }
            else if (x > 190 && y == 140){
                if(x == 160){
                    bool livre = analisarDuasRegCriticas(1,2);
                    //duas zonas de colisão
                    if (livre) x +=10;
                }
                else
                   x-=10;
            }
            else if (x==190 && y > 20){
                y-=10;
            }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;

        case 2: //Trem 2
            //regiões críticas trem 2
            if (x == 460 && y == 20) {
                liberarRegCritica(0);
            }

            else if (x == 460 && y == 140) {
                liberarRegCritica(3);
            }

            else if (x == 590 && y == 140) {
                liberarRegCritica(4);
            }

            //percusso trem 2

            if (y == 20 && x <730){
                x+=10;
            }
            else if (x == 730 && y < 140){
                y+=10;
            }
            else if (x > 460 && y == 140){
                if (y==110){
                    bool livre = analisarDuasRegCriticas(3,4);
                    if (livre) x +=10;
                }
                else{
                    x-=10;
                }
            }
            else if (x==460 && y > 20){
                if (x==490){
                    bool livre = analisarRegCritica(0);
                    if (livre) y -=10;
                }
                else{
                    y-=10;
                }
            }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;

        case 3: //Trem 3


            //percusso trem 3

            if (y == 140 && x < 320){
                if (x==160){
                    bool livre = analisarRegCritica(1);
                    if (livre) x+=10;
                }
                else{
                    x+=10;
                }
            }
            else if (x == 320 && y < 260){
                if (x==290){
                    bool livre = analisarRegCritica(5);
                    if (livre) y +=10;
                }
                else{
                    y+=10;
                }
            }
            else if (x > 50 && y == 260){
                x-=10;
            }
            else{
                y-=10;
            }
            //regiões críticas trem 3
            if (x == 190 && y == 140) {
              liberarRegCritica(1);

            }

            else if (x == 320 && y == 140) {
               liberarRegCritica(5);

            }

            emit updateGUI(ID, x,y);    //Emite um sinal
            break;

        case 4: //Trem
            //regiões críticas trem 4
            if (x == 320 && y == 140) {
                liberarRegCritica(2);
            }

            else if (x == 460 && y == 140) {
                liberarRegCritica(3);
            }

            else if (x == 590 && y == 140) {
                liberarRegCritica(6);
            }

            else if (x == 320 && y == 140) {
                liberarRegCritica(5);
            }

            //percusso trem 4

            if (y == 140 && x <590){
                if (y == 170 || x==320){
                    bool livre = analisarDuasRegCriticas(2,3);
                    if (livre) x +=10;
                }
                else{
                    x+=10;
                }
            }
            else if (x == 590 && y < 260){
                if (x==560){
                    bool livre = analisarRegCritica(6);
                    if (livre) y +=10;
                }
                else{
                    y+=10;
                }
            }
            else if (x > 320 && y == 260){
                x-=10;
            }
            else{
                if (x==350){
                    bool livre = analisarRegCritica(5);
                    if (livre) y -=10;
                }
                else{
                    y-=10;
                }
            }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;

        case 5: //Trem 5
            //regiões críticas trem  5
            if (x == 590 && y == 140) {
                liberarRegCritica(4);
            }

            else if (x == 590 && y == 260) {
                liberarRegCritica(6);
            }

            //percusso trem 5

            if (y == 140 && x <860){
                if (x==590){
                    bool livre = analisarRegCritica(4);
                    if (livre) x +=10;
                }
                else{
                    x+=10;
                }
            }
            else if (x == 860 && y < 260){
                y+=10;
            }
            else if (x > 590 && y ==260){
                x-=10;
            }
            else{
                if (x==620){
                    bool livre = analisarRegCritica(6);
                    if (livre) y -=10;
                }
                else{
                    y-=10;
                }
           }
            emit updateGUI(ID, x,y);    //Emite um sinal
            break;
        default:
            break;
        }
       }
        msleep(velocidade);
    }
}





