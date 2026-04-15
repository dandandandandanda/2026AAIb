//week08-1
size(500, 500);
PImage img;// 從機上載入
img = loadImage("balloon.png");
image(img, 0, 0, 96, 132);//看圖大小 依比例調整
//image(圖, x, y, 寬, 高);
image(img, 96, 0, 96*2, 132*2); ///double size
