//week09-1
void setup(){
size(300, 300);  
}
void draw(){//60 per sec
   background(#FFFFF2);
   for(int i=0; i<3; i++){//left i
     for (int j=0; j<3; j++){//right j
       int x =50 + j*100, y = 50 +i*100;
       ellipse(x, y, 90, 90);//mole hole
     }
   }
}
