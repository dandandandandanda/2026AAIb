//week05-4 for 迴圈 陣列
int [] a = {10, 20, 30, 40}; Java陣列 左到右
size(401, 101);
for (int i=0; i<4; i++){
  fill(#FFFFF2);
  rect( i*100, 0, 100, 100);
  fill(0);
  textSize(30);
  text( "a[i]:" + a[i], i*100, 50);
}//要放的字 位置
