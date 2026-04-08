//week07-1
size(620, 620);
background(245, 216, 142);
for(int i=0; i<10; i++){// left i
  for(int j=0; j<10; j++){// right j
    int x = 10 + j * 60, y = 10 + i * 60;
    fill(245, 216, 142);
    strokeWeight(2);
    rect(x, y ,60, 60);
  }
}
