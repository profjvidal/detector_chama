int sensorChama = 2; //declaração da variável do sensor

void setup() {
  pinMode(sensorChama, INPUT); //Configuração do pino do sensor como entrada
  Serial.begin(9600); // Configuração da comunicação serial
}

void loop() {
  int leituraSensor = digitalRead(sensorChama);// Passando o valor obtido no sensor para a variável "leituraSensor"
  // Se NÃO for detectado o espectro IR da chama imprime no serial "Tudo certo!"
  if (leituraSensor == HIGH) {
    Serial.println("Tudo certo!");
  }
  // Se for detectado o espectro IR da chama imprime no serial "Pegou fogo!"
  else {
    Serial.println("Pegou fogo!");
  }
  delay(1000);//intervalo entre as leituras e respostas
} // fim do código :)

