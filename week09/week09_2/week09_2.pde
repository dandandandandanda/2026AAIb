//week09-2
void setup(){
size(300, 300);  
}
int [][] a = { {0,0,0}, {0,0,0}, {0,0,0} };//java
void draw(){//60 per sec
   background(#FFFFF2);
   if(frameCount%60==0){// 1 mole per sec
     int i = int(random(3)), j =int(random(3));
     a[i][j] = 60;// i j set random then set to 60
   }
   for(int i=0; i<3; i++){//left i
     for (int j=0; j<3; j++){//right j
       int x =50 + j*100, y = 50 +i*100;
       if(a[i][j]>0){
         fill(#C61616, a[i][j]*4);
         a[i][j]--;
       }else fill(#FFFFF2);
       ellipse(x, y, 90, 90);//mole hole
     }
   }
}
