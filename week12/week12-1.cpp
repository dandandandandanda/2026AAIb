//week12-1 地鼠
PImage img;
//drag image into code
void setup() {
  size(300,300);
  img = loadImage("gopher.png");
}
float a = 0;
void draw(){
  a += 0.03;
  background(128);
  //float x = 100 +50*cos(a), y = 100+50*sin(a);//三角函數
  float x = 100 +0*cos(a), y = 250+50*sin(a);//三角函數
  image(img, x, y, 100, 100);
  //image(img, 0, 0, 100, 100);
  //圖, x, y, 寬, 高
}
