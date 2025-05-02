///week11_4_bubble_happy_part1(要File-Save As week11_4_bubble_happy_part1)
///修改自week10_1_bubble_happy_part2(可在Github 2025aaia 整個下產zip)
PImage happy1, happy2, happy3; // 第3張圖
PImage[]happy = new PImage[200];//200張小圖片,Java的陣列宣告,有200格
int N = 0;
int[]x=new int[200];
int[]y=new int [200];
void setup(){
  size(600, 675); // 大小和圖片一樣哦!
  happy1 = loadImage("happy1.jpg");
  happy2 = loadImage("happy2.jpg");
}
void mousePressed(){//每次mouse按下去 就變出1張小圖
  happy[N] = happy2.get(mouseX-30,mouseY-30,60,60);
  x[N] = mouseX;//記下[要放小圖]的位置
  y[N]= mouseY;//記下[要放小圖]的位置
  N++;///
}
void draw(){
  background(happy1);
  for(int i=0;i<N;i++){//把每一張小圖片,用for 迴圈[畫出來]
     image(happy[i],x[i]-30,y[i]-30); 
  }
}
