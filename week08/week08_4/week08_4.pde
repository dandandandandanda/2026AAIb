//week08-4 lots flying balloon
void setup(){
  size(500, 500);
  img = loadImage("balloon.png");
}
PImage img;
float []x = new float[100];
float []y = new float[100];
float []s = new float[100];
int N = 0;// now zero b
float s2 = 0.1;
void draw(){
  background(255);
  if(mousePressed){
  s2 *= 1.05;//size keep incresing
  image(img, mouseX-(96*s2)/2, mouseY-(132*s2), 96*s2, 132*s2);
  } else s2 = 0.1;
  for (int i=0; i<N; i++){ //draw many b
   image(img, x[i], y[i], 96 * s[i], 132 * s[i]); 
   if(y[i]>0) y[i] -= 1;
  }
} 
void mouseReleased() {
  s[N] = s2;
  x[N] = mouseX-(96*s2)/2; //變數設定
  y[N] = mouseY-(132*s2);
  N++;
}
