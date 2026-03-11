//week03-2
void setup(){
  size(800, 100);
}
void draw(){
  background(#F585DB);//開色彩選擇器
  for(int x = 0; x< 800; x += 100){
    if(x < mouseX && mouseY < x +100 ) fill(0,255,0);
    else fill(#F585DB); //依照 mouseX 決定色彩
    rect(x, 0, 100, 100);
  
  }

}
