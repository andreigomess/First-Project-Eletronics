# Basic Project Eletronics - Traffic Light
Projeto básico de eletrônica para iniciar os estudos usando Arduino Uno.
Será demonstrado como construir um semáforo utilizando um microcontrolador (Nesse caso, Arduino Uno).

# Ideia central
A principal ideia é utilizar o Arduino Uno para programar 3 leds ao mesmo tempo. 
Os leds funcionarão como um semáforo. O primeiro a ligar é o vermelho, depois de um tempo o amarelo e então o verde. Abaixo, estará listado os passos de como replicar este projeto para testes.
As imagens abaixo serão do [Thinkerpad](https://www.tinkercad.com/dashboard), um simulador usado para replicar projetos com componentes eletrônicos. Foi utilizado aqui principalmente para evitar queimar algum LED durante a construção dele.
Você também pode acessá-lo para testar este projeto, ou usá-lo para construir o seu próprio fisicamente, basta clicar em cima.

### Componentes de Software necessários:
- [IDE arduino](https://docs.arduino.cc/software/ide/).

### Componentes Físicos necessários:
- 1 microcontrolador - Nesse caso, será usado o Arduino Uno.
- 3 LEDs (1 vermelho, 1 amarelo, 1 verde)
- 3 Resistores.
- 1 Protoboard.
- Jumpers Macho-Macho (Fios).

## HARDWARE: A alimentação do Arduino e ligação com os LEDs.
- Primeiramente, a alimentação do Arduino é por meio da sua entrada USB tipo B que é conectada ao computador ou utilizando uma fonte de alimentação. A tensão máxima do Arduino é 5V, portanto cuidado ao conectar qualquer fonte para alimentá-lo.
- Para começar o projeto, conecte seu Arduino no computador, para alimentá-lo e ser possível programá-lo.

Antes de começar, é importante mostrar como é a distribuição de energia na Protoboard:
- As trilhas laterais (as com símbolo de positivo + e negativo -) possuem transferência de energia na horizontal.
- As trilhas centrais possuem transferência de energia na vertical.
- Veja as linhas na imagem abaixo. Elas mostram visualmente por onde a corrente passa quando as trilhas estão energizadas.

![Proboard](Imagens/Protoboard.png)

Agora, vamos aos passos para montar o circuito.

### 1. Conectar o GND a Protoboard:
- Vamos fazer a ligação entre o Arduino e o LED de forma correta. Primeiramente, pegue sua Protoboard e conecte um cabo ao GND do Arduino e a trilha positiva (com símbolo '+') da Protoboard.
- O GND é o aterramento do circuito, onde o nosso circuito se "fecha". No sentido convencional, a energia chega ao circuito pelos pinos de carga positiva, passa pelos componentes e vai ao GND para fechar o circuito.
Veja a figura:

![ProboardGND](Imagens/ProtoboardGND.png)

É nessa trilha que o GND está "correndo".

### 2. Energizar uma trilha.
- Agora, escolha três pinos diferentes de onde a energia do Arduino sairá para chegar até o LED e conecte-os a uma trilha da Protoboard

![ConexaoPinos](Imagens/ConexaoPinos.png)

- Veja que agora as trilhas 10, 14 e 19 da Protoboard estão energizadas, exatamente daquela forma que foi mostrado, pelos pinos 11, 7 e 2 do Arduino, respectivamente.

### 3. Energizar o LED e fechar o circuito.
- Para energizar efetivamente o LED, vamos precisar de colocá-lo na Protoboard. A ligação deve ser da seguinte forma:
1. Identifique o ânodo do LED (é a perna **maior**).
2. **NÃO CONECTE** diretamente o LED na trilha energizada pelos pinos do Arduino, você poderá **QUEIMÁ-LO**. Conecte um resistor até a trilha superior (que ainda não está energizada, apenas a debaixo, como está na imagem). O resistor atua como um condutor (bem como os fios de ligação) que diminui a potência da corrente. Portanto a corrente chegará ao LED de forma segura.
3. Na outra perna do LED (a menor) conectaremos a trilha positiva + (onde foi conectado o GND do Arduino) a esta perna, fechando o circuito.

![CircuitoCompleto](Imagens/CircuitoCompleto.png)

- Observe que alguns resistores e alguns fios estão conectados em lugares diferentes na mesma trilha. Isso **não importa**, pois o que importa é a corrente na trilha. Fiz isso para mostrar visualmente que funciona.
- A parte de hardware está completa, agora vamos para a programação.

## SOFTWARE: A programação do Arduino para funcionamento do Semáforo.