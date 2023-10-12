int line = 0;
float x = 0.0;
float phase_shift = 0.0; // ตั้งค่า phase shift เป็น 0 เพื่อให้ sine wave และ cos wave มีเฟสเดียวกัน
float amplitude = 2.0; // ความสูงของคลื่น

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = x + 1;
  
  // Generate a sine wave with phase shift and amplitude
  float YsinValue = 0.5 * amplitude * sin(2 * PI * x / 50.0 + phase_shift);
  
  // Generate a cosine wave with amplitude
  float YcosValue = 0.5 * amplitude * cos(2 * PI * x / 50.0 + phase_shift);

  Serial.printf("%d %f %f\n", line, YsinValue, YcosValue);
}
