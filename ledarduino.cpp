// Projeto: Controle de LED com botão (com comportamento alternado e delay)
// Autor: meu pau na sua boca
// Data: 06/04/2025
// Descrição: O LED acende, apaga por 1 segundo, acende novamente e repete o ciclo até que o botão seja pressionado novamente.




const int ledPin = 13; // Configura o LED no pino 13
const int botao = 2;   // Configura o botão no pino 2
int aperteBotao = 0;   // Armazena os dados da variável

void setup(){
  pinMode(ledPin, OUTPUT);  // Configura como saída
  pinMode(botao, INPUT);    // Configura como entrada
}

void loop(){  
  aperteBotao = digitalRead(botao);   // Lê se o botão for pressionado
  if (aperteBotao == HIGH) {  // Se for pressionado
    digitalWrite(ledPin, HIGH); // LED acende
    delay(1000);  // Aguarde 1 segundo
    digitalWrite(ledPin, LOW);  // LED apaga
    delay(1000);  // LED acende
  }
  else {    // Se não
    digitalWrite(ledPin, LOW);   // LED apaga
  }
}


// Código aberto e bem simples de ser executado e feito. Use com sabedoria.
