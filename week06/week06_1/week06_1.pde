//week06-1
//接續week05-5
int [][] b = new int[10][16];//java 2D陣列
void setup(){
  size(800, 500);
}
void draw(){
  background(255);
  for (int i=0; i<10; i++){//左手i for
    for (int j=0; j<16; j++){//右手j for
      if(b[i][j]==1) fill(#F5CBFF); //if 陣列有 1
      else fill(255);
      rect( j*50, i*50, 50, 50);// i=y, j=x
     }
   }
}
void mousePressed() {
  int i = mouseY / 50, j = mouseX /50;// i=y, j=x
  b[i][j] = 1;//設為1 等畫紫色
}
