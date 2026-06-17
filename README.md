# Basic Project Eletronics - Traffic Light
Projeto básico de eletrônica para iniciar os estudos usando Arduino Uno.
Será demonstrado como construir um semáforo utilizando um microcontrolador.

# Ideia central
A principal ideia é utilizar o arduino uno para programar 3 leds ao mesmo tempo. 
Os leds funcionarão como um semáforo. O primeiro a ligar é o vermelho, depois de um tempo o amarelo e então o verde. Abaixo, estará listado os passos de como replicar este projeto para testes.
As imagens abaixo serão do [Thinkerpad](https://www.tinkercad.com/dashboard), um simulador usado para replicar projetos com componentes eletrônicos. Foi utilizado aqui principalmente para evitar queimar algum LED durante a construção dele.
Você também pode acessá-lo para testar este projeto, ou usá-lo para construir o seu próprio fisicamente, basta clicar em cima.

### Componentes de Software necessários:
- [IDE arduino](https://docs.arduino.cc/software/ide/).

### Componentes Físicos necessários:
- Um microcontrolador - Nesse caso, será usado o Arduino Uno.
- 3 LEDs (1 vermelho, 1 amarelo, 1 verde)
- 3 Resistores.
- 1 Protoboard.
- Jumpers Macho-Macho.

## HARDWARE: A alimentação do arduino e ligação com os LEDs.
Antes de tudo, é importante mostrar como é a distribuição de energia na protoboard.
- As trilhas laterais (as com símbolo de positivo + e negativo -) possuem transferência de energia na horizontal.
- As trilhas centrais possuem transferência de energia na vertical.

(COLOCAR UMA IMAGEM AQUI).

Vamos fazer a ligação entre o arduino e o led de forma correta. Primeiramente, pegue sua protoboard e conecte um cabo ao GND e a trilha positiva (com símbolo '+') da protoboard.
O GND é o aterramento do circuito, onde o nosso circuito se "fecha". No sentido convencional, a energia chega ao circuito pelos pinos de carga positiva, passa pelos componentes e vai ao GND para fechar o circuito.