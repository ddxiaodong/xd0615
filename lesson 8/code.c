int pos = 0;//初始化

void setup()
{
  pinMode(8, OUTPUT);//设引脚6.7.8 为输出
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  // 关闭 8 处的音调功能；
  noTone(8);
  // 在 6 上播放 200ms 的音调，频率为 880 :
  tone(6, 880, 200); 
  delay(200); //等待 200 毫秒；
  // 关闭 6 处的音调功能；
  noTone(6);
  // 在 7 上播放 500ms 的音调，频率设为988；
  tone(7, 988, 500); 
  delay(500); // 等待 500ms；
  // 关闭 7 处的音调功能
  noTone(7);
  // 在 8 上播放300ms,频率1047的音调；
  tone(8, 1047, 300); 
  delay(300); // 等待300ms；
}