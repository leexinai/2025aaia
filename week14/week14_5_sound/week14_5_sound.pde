//week14_5_sound
//Sketch-Library-Manage Libraries...
//安裝sound 後 開始寫
//選單 File - Examples 選 Libraries 核心函式庫 Sound-Soundfile-Jumblesounfile
//在自己寫
import processing.sound.*;//Java 使用Sound外掛
SoundFile music, sword, monkey, intro;//宣告一個變數music
void setup(){
  size(640,360);//記得要把音樂檔 拉到程式裡
  music = new SoundFile(this,"In Game Music.mp3");
  sword = new SoundFile(this,"sword slash.mp3");
  monkey = new SoundFile(this,"Monkey 1.mp3");
  intro = new SoundFile(this, "Intro Song_Final.mp3");
  music.play();// play()播放
}
void draw(){
  //裡面是空白
}
