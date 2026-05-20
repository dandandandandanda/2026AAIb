//week13-1
//follow week12-1
PImage img; //外面宣告變數
void setup() {
  size(300,400);
  img = loadImage("gopher.png");//drag image into code
}
int [][]a= { {0,0,0} , {0,0,0} , {0,0,0} }; // mole pop up or not
void draw(){
 background(0xFFFFFFF2);
  if(frameCount%60==0){ //60frames per 1 mole
  int i =int(random(3)), j =int(random(3));
  a[i][j] = 60; //random per sec
  }
  for (int i=0; i<3; i++){ //left i
    for (int j=0; j<3; j++){ //right j
    float x = j*100, y = i*100+100;
    //if(i==0 && j==0) y += mouseY;
    if (a[i][j]>0){//if mole
      a[i][j] -= 1; //life countdown
      y -= 100*sin(a[i][j]*PI/60);
     }
     image(img, x, y, 100, 100);
    }
   rect(0, 100+i*100, 300, 100); ///cover low area with
  }
}
