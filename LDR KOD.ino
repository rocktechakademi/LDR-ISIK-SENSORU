#define led 3 //3.Pinde LED olduğunu tanımlıyoruz
void setup() {
  pinMode(led, OUTPUT); //LED'in çıkış elemanı olduğunu belirtiyoruz
  Serial.begin(9600); //9600 Baundluk bir seri haberleşme başlatıyoruz
}
void loop() {
  int isik = analogRead(A0); //Işık değişkenini A0 pinindeki LDR ile okuyoruz
  Serial.println(isik); //Okunan değeri seri iletişim ekranına yansıtıyoruz
  delay(20);
  if (isik > 900) { //Okunan ışık değeri 900'den büyük ise
    digitalWrite(led, HIGH); //LED yanmasın
  }
  if (isik < 850) { //Okunan ışık değeri 850'den küçük ise
    digitalWrite(led, LOW); //LED yansın
  }
}