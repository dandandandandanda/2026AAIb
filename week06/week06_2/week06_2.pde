//week06-2
//接續week06-1
int [][] b = new int[10][16];//java 2D陣列
void setup(){
  size(800, 500);
}
void draw(){
  background(255);
  for (int i=0; i<10; i++){//左手i for
    for (int j=0; j<16; j++){//右手j for
      if(b[i][j] > 0) {
        fill(#F5CBFF, b[i][j]*4);//if 陣列有值
        b[i][j]--;//慢慢變小
      } else fill(255);
      rect( j*50, i*50, 50, 50);// i=y, j=x
     }
   }
}
void mouseDragged() {//拖行
  int i = mouseY / 50, j = mouseX /50;// i=y, j=x
  b[i][j] = 60;//設為60 倒數計時畫紫色
}
