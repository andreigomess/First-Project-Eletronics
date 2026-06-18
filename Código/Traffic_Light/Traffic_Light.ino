int led_verde = 2; 
int led_amarelo = 7;
int led_vermelho = 11;

void setup() {
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
}

void loop() { 
  digitalWrite(led_vermelho, HIGH);
  delay(5000);
  digitalWrite(led_vermelho, LOW);
  
  digitalWrite(led_verde, HIGH);
  delay(3000);
  digitalWrite(led_verde, LOW);
  
  digitalWrite(led_amarelo, HIGH);
  delay(1500);
  digitalWrite(led_amarelo, LOW);
}