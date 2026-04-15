//week08-3 flying balloon
void setup(){
  size(500, 500);
  img = loadImage("balloon.png");
}
PImage img;
float x, y;
float s = 0.1; //balloon size
void draw(){
  background(255);
  if(mousePressed){
  s *= 1.1;//size keep incresing
  image(img, mouseX-(96*s)/2, mouseY-(132*s), 96*s, 132*s);
  } else{
    image(img, x, y, 96*s, 132*s);
    y--;
  }
}
void mouseReleased() {
  x = mouseX-(96*s)/2; //變數設定
  y = mouseY-(132*s);
}
