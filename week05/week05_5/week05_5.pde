//week05-5
int[]a = {10, 20, 30, 40, 50, 60, 70};//陣列  決定發亮
int[]b = {0, 0, 0, 0, 0, 0, 0};
void setup(){
  size(700, 100);
}
void draw(){
  for(int i=0; i<7; i++){///for 迴圈檢查
    if (b[i]==0){ ///0為黃色
      fill(#FFFFF2);
      rect( i*100, 0, 100, 100);
    }else {///否則
      fill(#F5CBFF); ///1為紫色
      rect( i*100, 0, 100, 100);
    }
  }
}
void mousePressed(){
  int i =mouseX/100;//換算座標
  if(b[i]==0) b[i] = 1;//0變1
  else b[i] = 0;//1變0
}




  
