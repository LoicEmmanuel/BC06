#include "Servo.h"
#include "Arduino.h"

int mesNotes [8][2] = {//hauteur fixée à 140
	{67,40}, //do faible socle baguette bas hauteur = 80; 0
	{62,40}, //ré 1
	{58,40}, //mesNotesi 2
	{54,40}, //fa 3
	{50,40}, //sol 4
	{46,40}, //la 
	{42,40}, //si 6
	{38,40} //do
};


Servo ServomoteurAxeBras;
Servo ServomoteurBaguette;
Servo ServomoteurAxeSocle;

void Initialisation(){
    Serial.begin(9600);
    BlueT.begin(9600);
    ServomoteurBaguette.attach(6);
    ServomoteurAxeBras.attach(9);
    ServomoteurAxeSocle.attach(3);
    ServomoteurAxeBras.write(140);
    ServomoteurAxeSocle.write(45);
    Serial.println(ServomoteurAxeBras.readMicroseconds());
}

void JoueNote(int ID) {
	ServomoteurAxeSocle.write(mesNotes[ID][0]);
    delay(500);
    //ServomoteurBaguette.write(mesNotes[ID][1]);
    //delay(200);
    /*for(int i =85;i>=25; i=i-5){
      ServomoteurBaguette.write(i);
      delay(14);
    };*/
    ServomoteurBaguette.write(55);
    delay(165);
    ServomoteurBaguette.write(85);
    delay(180);
}

void JingleBells(){
	//3 MI
	JoueNote(2);
	JoueNote(2);
	JoueNote(2);
    delay(300);

    //3 MI
	JoueNote(2);
	JoueNote(2);
	JoueNote(2);
    delay(500);

    JoueNote(2);
    JoueNote(4);
    JoueNote(0);
    JoueNote(1);
    JoueNote(2);
    delay(300);
    
    JoueNote(3);
	JoueNote(3);
	JoueNote(3);
    delay(300);

    JoueNote(3);
    JoueNote(3);
    JoueNote(2);
	JoueNote(2);
	JoueNote(2);
    JoueNote(2);
    JoueNote(2);
    JoueNote(1);
	JoueNote(1);
	JoueNote(2);
	JoueNote(1);
	JoueNote(4);
    delay(1000);

}
void GameOfThrones(){
    delay(300);
    JoueNote(5); //LA
    delay(100);
    JoueNote(1); //RE
    delay(300);

    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(5);//LA

    delay(300);
    JoueNote(1);//RE
    delay(300);


    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(5);//LA

    delay(300);
    JoueNote(1);//RE
    delay(300);

    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(2);//MI

    delay(300);
    JoueNote(4);//SOL
    delay(300);
    JoueNote(0);//DO
    delay(300);

    JoueNote(2);//MI
    JoueNote(3);//FA
    JoueNote(4);//SOL

    delay(300);
    JoueNote(0);//DO
    delay(300);

    JoueNote(2);//MI
    JoueNote(3);//FA
    JoueNote(4);//SOL

    delay(300);
    JoueNote(0);//DO
    delay(300);

    JoueNote(3);//FA
    JoueNote(2);//MI
    JoueNote(1);//RE
    delay(1000);
    
}
void BrilleBrille(){
    JoueNote(0);//DO
    JoueNote(0);//DO
    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(5);//LA
    JoueNote(5);//LA
    JoueNote(4);//SOL
    delay(300);

    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(2);//MI
    JoueNote(2);//MI
    JoueNote(1);//RE
    JoueNote(1);//RE
    JoueNote(0);//DO
    delay(300);


    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(2);//MI
    JoueNote(2);//MI
    JoueNote(1);//RE
    delay(300);

    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(2);//MI
    JoueNote(2);//MI
    JoueNote(1);//RE
    delay(300);

    JoueNote(0);//DO
    JoueNote(0);//DO
    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(5);//LA
    JoueNote(5);//LA
    JoueNote(4);//SOL
    delay(300);

    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(2);//MI
    JoueNote(2);//MI
    JoueNote(1);//RE
    JoueNote(1);//RE
    JoueNote(0);//DO
    delay(300);
}

void ClairDeLune(){
    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(5);//LA
    delay(300);

    JoueNote(4);//SOL
    delay(300);

    JoueNote(3);//FA
    JoueNote(5);//LA
    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(3);//FA
    delay(300);

    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(5);//LA
    delay(300);

    JoueNote(4);//SOL
    delay(300);

    JoueNote(3);//FA
    JoueNote(5);//LA
    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(3);//FA
    delay(300);

    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(1);//RE
    delay(300);

    JoueNote(1);//RE
    delay(300);

    JoueNote(4);//SOL
    JoueNote(3);//FA
    JoueNote(2);//MI
    JoueNote(1);//RE
    JoueNote(0);//DO
    delay(300);

    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(5);//LA
    delay(300);

    JoueNote(4);//SOL
    delay(300);

    JoueNote(3);//FA
    JoueNote(5);//LA
    JoueNote(4);//SOL
    JoueNote(4);//SOL
    JoueNote(3);//FA
    delay(300);
}
void SmokeOnWater(){
    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(3);//FA
    delay(300);

    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(3);//FA
    JoueNote(2);//MI
    delay(300);

    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(3);//FA
    delay(300);

    JoueNote(1);//RE
    delay(100);

    JoueNote(0);//DO
    JoueNote(0);//DO
    delay(300);

    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(3);//FA
    delay(300);

    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(3);//FA
    JoueNote(2);//MI
    delay(300);

    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(3);//FA
    delay(300);

    JoueNote(1);//RE
    delay(100);

    JoueNote(0);//DO
    JoueNote(0);//DO
    delay(300);
    }
void Aristochats(){
    JoueNote(0);//DO
    JoueNote(2);//MI
    JoueNote(4);//SOL
    JoueNote(7);//DO
    JoueNote(7);//DO
    JoueNote(4);//SOL
    JoueNote(2);//MI
    JoueNote(0);//DO

    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(2);//MI
    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(5);//LA
    JoueNote(6);//SI
    JoueNote(7);//DO
    JoueNote(6);//SI
    delay(50);

    JoueNote(4);//SOL
    delay(50);

    JoueNote(4);//SOL
    delay(100);


    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(2);//MI
    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(5);//LA
    JoueNote(6);//SI
    JoueNote(7);//DO

    JoueNote(6);//SI
    delay(50);

    JoueNote(5);//LA
    delay(50);

    JoueNote(3);//FA
    delay(100);

    JoueNote(0);//DO
    JoueNote(2);//MI
    JoueNote(4);//SOL
    JoueNote(2);//MI

    JoueNote(0);//DO
    JoueNote(2);//MI
    JoueNote(4);//SOL
    JoueNote(2);//MI

    JoueNote(3);//FA
    JoueNote(5);//LA
    JoueNote(7);//DO
    JoueNote(5);//LA
    JoueNote(7);//DO
    delay(100);

    JoueNote(7);//DO
    JoueNote(6);//SI
    JoueNote(5);//LA
    JoueNote(4);//SOL
    JoueNote(3);//FA
    JoueNote(2);//MI
    JoueNote(1);//RE
    JoueNote(0);//DO
    JoueNote(1);//RE
    delay(100);

    JoueNote(0);//DO
    JoueNote(0);//DO
    delay(200);

    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(2);//MI
    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(5);//LA
    JoueNote(6);//SI
    JoueNote(7);//DO
    JoueNote(6);//SI
    delay(50);

    JoueNote(4);//SOL
    delay(50);

    JoueNote(4);//SOL
    delay(100);


    JoueNote(0);//DO
    JoueNote(1);//RE
    JoueNote(2);//MI
    JoueNote(3);//FA
    JoueNote(4);//SOL
    JoueNote(5);//LA
    JoueNote(6);//SI
    JoueNote(7);//DO

    JoueNote(6);//SI
    delay(50);

    JoueNote(5);//LA
    delay(50);

    JoueNote(3);//FA
    delay(100);

    JoueNote(0);//DO
    JoueNote(2);//MI
    JoueNote(4);//SOL
    JoueNote(2);//MI

    JoueNote(0);//DO
    JoueNote(2);//MI
    JoueNote(4);//SOL
    JoueNote(2);//MI

    JoueNote(3);//FA
    JoueNote(5);//LA
    JoueNote(7);//DO
    JoueNote(5);//LA
    JoueNote(7);//DO
    delay(100);

    JoueNote(7);//DO
    JoueNote(6);//SI
    JoueNote(5);//LA
    JoueNote(4);//SOL
    JoueNote(3);//FA
    JoueNote(2);//MI
    JoueNote(1);//RE
    JoueNote(0);//DO
    JoueNote(1);//RE
    delay(100);

    JoueNote(0);//DO
    JoueNote(0);//DO
    delay(200);

    JoueNote(7);//DO
}
