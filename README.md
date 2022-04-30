# logica-programacao-revisao
Excercícios em C para a disciplina de Logica de programação (IFPR) | REVISÃO
<br>
<br>

1. Faça um programa para receber um número inteiro de segundos do usuário e imprimir a quantidade correspondente em horas, minutos e segundos.
<br>

2. Dados seis números inteiros representando dois intervalos de tempo (horas, minutos e segundos), faça um programa para calcular a soma e a diferença desses intervalos. O resultado deverá ser apresentado em horas, minutos e segundos.
<br>

3. Desenvolva um programa para simular uma Calculadora. Além das 4 operações básicas (+, -, *, /), escolha 10 funções da biblioteca **math.h** listadas na tabela abaixo.
Monte um menu utilizando o comando case e solicite os números para os cálculos de
acordo com a operação.

<br>

4. Faça um programa que calcule e exiba a quantidade de latas de tinta necessárias e o custo para pintar tanques cilíndricos de combustível. Para o cálculo de tais informações, é necessário que o programa solicite a altura e o raio desse cilindro. Para a construção do algoritmo, leve em consideração que:
<ol type = a>
    <li> a área lateral é dada pela seguinte fórmula: 2 * PI * raio * altura do cilindro (utilize a constante da biblioteca math.h para representar o valor de PI);
    <li> a área da base é PI multiplicado pelo raio do cilindro elevado ao quadrado;
    <li> a área do cilindro é dada pela área da base mais a área lateral;
    <li> a quantidade total de litros é dada pela área do cilindro dividido por 3 (pois cada litro de tinta rende 3m 2 );
    <li> a quantidade de latas de tinta é dada pela quantidade total de litros dividido por 5 (pois cada lata tem 5L de tinta);
    <li> o custo é dado pela quantidade de latas de tinta multiplicado por R$ 50,00 (pois este é o custo de cada lata de tinta).
    <li> Cada lata de tinta é comprada integralmente, então, arredonde a quantidade de latas para cima (utilize uma das funções da biblioteca math.h).
 </ol>
<br>

5. Considere a situação em que um cliente faz uma determinada compra em uma loja. Ao realizar o pagamento, são oferecidas as seguintes condições para pagamento:
 - Pagamento à vista - 15% de desconto sobre o valor total da compra.
 - Pagamento com cheque pré-datado para 30 dias - 10% de desconto sobre o valor total da compra.
 - Pagamento parcelado em 3 vezes - 5% de desconto sobre o valor total da compra.
 - Pagamento parcelado em 6 vezes - não tem desconto.
 - Pagamento parcelado em 12 vezes - 8% de acréscimo sobre o valor total da compra.
 
De acordo com o valor total da compra, verifique a opção de pagamento do cliente,
calcule o valor final da compra e se a escolha for por pagamento parcelado, calcule
também o valor das parcelas.
Apresente ao usuário uma mensagem com o valor total da compra, o valor final da
compra, a diferença entre os dois, identifique como desconto se a diferença for positiva,
como juros se for negativa, mostre, também, a quantidade e o valor das parcelas.
