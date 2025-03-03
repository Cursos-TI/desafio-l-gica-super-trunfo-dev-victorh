#include <stdio.h>

int main(){
    //Conforme instrução em vídeo do professor Sergio, o código primeiramente irá ler todas as infos da carta 1 e imprimi-las após a leitura de todas. Posteriormente serão lidas todas
    //as infos da carta 2  e suas informações serão imprimidas na sequencia. Seguindo desta forma, não seria necessária a criação de uma variável para cada carta, pois a informação
    //armazenada nela seria escrita para 1, impressa para 1, sobrescrita para a 2 e impressa para a 2, logo não haveria prejuízo para a impressão delas, as informações ficariam
    //organizadas. Porém, professor Sergio solicitou a criação das variáveis para cada carta, então segui desta forma, pois sei que mais para frente isso será útil.
    
    char estado1[10], estado2[10]; 
    //Tive problema com o "Enter" para a alocação de valores como caractere para a variavel estado 2, por esse motivo decidi alterar para string para que o código 
    //não tivesse erro algum;    
    char codigocarta1[4],codigocarta2[4], cidade1[20], cidade2[20]; 
    //embora o exercício demande apenas 3 carecteres para código da carta, no momento da compilação a questão do "Enter" as vezes ser considerado caractere acabou ocasionando um
    //problema na atribuição do valor correto para a variável. Por esse motivo aumentei a string dos codigos em uma unidade e funcionou. 
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2, EscolhaAtributo1, EscolhaAtributo2;
    float area1, area2, pib1, pib2, DensPop1, DensPop2, PibPerC1, PibPerC2, SuperPoder1, SuperPoder2, Atributo1Carta1, Atributo1Carta2, Atributo2Carta1, Atributo2Carta2, Resultado1, Resultado2;

    printf("Favor, digitar a seguir as informacoes da Carta 1!\n"); //informando ao usuário que os dados solicitados a seguir serão referente a carta 1
    printf("Digite a letra do estado (A-H): "); //informando ao usuário que na carta aparecerá a letra de A a H
    scanf("%s", &estado1);
    
    printf("Digite o código da carta (Ex.: A01, D02, H04 etc.): ");//informando ao usuário como o código da carta aparecerá em sua carta
    scanf("%s", &codigocarta1);

    printf("Digite o nome da cidade: ");//por ser a forma usual como se escreve a cidade, não foi adicionada nenhuma nova instrução para o usuário
    scanf("%s", &cidade1);

    printf("Digite a populacao: ");//por ser a forma usual de identificação da qtd de população, não foi adicionada nenhuma nova instrução para o usuário
    scanf("%d", &populacao1);

    printf("Area da cidade: ");//por ser a forma usual de identificação de área, não foi adicionada nenhuma nova instrução para o usuário
    scanf("%f", &area1); 

    printf("Digite o PIB (em bilhoes de reais): "); //adicionada a informação de "bilhões de reais", pois existe a possibilidade da cidade ter o PIB em milhões de reais. 
                                                    //Comparação posteriormente seria feita de forma equivodada, pois compararia bilhões com milhões
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");//por ser a forma usual de identificação de quantidade, não foi adicionada nenhuma nova instrução para o usuário
    scanf("%d", &pontosturisticos1);

    DensPop1 = (float) populacao1 / area1;
    PibPerC1 = (float) pib1 / populacao1 * 1000000000; //Transformando bilhão de reais em apenas reais, já que o enunciado pede que o PIB per capita seja em reais e não bilhão de reais

    printf("\n");
    printf("Informações preenchidas da carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Popução: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); //considerada duas casas decimais pois no exemplo do exercícios está sendo impresso desta forma
    printf("PIB: %.2f bilhões de reais\n", pib1);//considerada duas casas decimais pois no exemplo do exercícios está sendo impresso desta forma
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensPop1);
    printf("PIB per Capita: %.2f reais\n \n", PibPerC1);

    ///////////////////////////////////////////////////Agora a leitura e impressão da carta 2///////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Favor, digitar a seguir as informacoes da Carta 2!\n"); //informando ao usuário que os dados solicitados a seguir serão referente a carta 2
    printf("Digite a letra do estado (A-H): "); //informando ao usuário que na carta aparecerá a letra de A a H
    scanf("%s", &estado2);
    
    printf("Digite o código da carta (Ex.: A01, D02, H04 etc.): ");//informando ao usuário como o código da carta aparecerá em sua carta
    scanf("%s", &codigocarta2);

    printf("Digite o nome da cidade: ");//por ser a forma usual como se escreve a cidade, não foi adicionada nenhuma nova instrução para o usuário
    scanf("%s", &cidade2);

    printf("Digite a populacao: ");//por ser a forma usual de identificação da qtd de população, não foi adicionada nenhuma nova instrução para o usuário
    scanf("%d", &populacao2);

    printf("Area da cidade: ");//por ser a forma usual de identificação de área, não foi adicionada nenhuma nova instrução para o usuário
    scanf("%f", &area2); 

    printf("Digite o PIB (em bilhoes de reais): "); //adicionada a informação de "bilhões de reais", pois existe a possibilidade da cidade ter o PIB em milhões de reais. 
                                                    //Comparação posteriormente seria feita de forma equivocada, pois compararia bilhões com milhões
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");//por ser a forma usual de identificação de quantidade, não foi adicionada nenhuma nova instrução para o usuário
    scanf("%d", &pontosturisticos2);

    DensPop2 = (float) populacao2 / area2;
    PibPerC2 = (float) pib2 / populacao2 * 1000000000; //Transformando bilhão de reais em apenas reais, já que o enunciado pede que o PIB per capita seja em reais e não bilhão de reais

    printf("\n");
    printf("Informações preenchidas da carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Popução: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2); //considerada duas casas decimais pois no exemplo do exercícios está sendo impresso desta forma
    printf("PIB: %.2f bilhões de reais\n", pib2);//considerada duas casas decimais pois no exemplo do exercícios está sendo impresso desta forma
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensPop2);
    printf("PIB per Capita: %.2f reais\n \n", PibPerC2);

    SuperPoder1 = populacao1 + area1 + pib1+ pontosturisticos1 + PibPerC1 + 1/DensPop1; //no enunciado do exercício ficou um pouco ambíguo se somamos o inverso da densidade populacional
    SuperPoder2 = populacao2 + area2 + pib2+ pontosturisticos2 + PibPerC2 + 1/DensPop2; //ou somamos tudo e dividimos pela densidade populacional. Meu intuito no código foi a primeira opção.
                                                                                        //Embora ela seja menos efetiva, pois estaremos adicionando um valor irrisório ao cálculo.

    
    printf("Comparação de cartas. Serão selecionados dois atributos.\nFavor escolher o primeiro atributo a ser comparado: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n"); 
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite de 1 a 7 para escolher o primeiro atributo conforme relação acima: ");
    scanf("%d", &EscolhaAtributo1);
    printf("\n");

    printf("Favor escolher o segundo atributo a ser comparado: \n");
    (EscolhaAtributo1 != 1) ? printf("1. População\n") : printf(""); //utilizei operador ternário para não imprimir o primeiro atributo escolhido
    (EscolhaAtributo1 != 2) ? printf("2. Área\n") : printf(""); 
    (EscolhaAtributo1 != 3) ? printf("3. PIB\n") : printf(""); 
    (EscolhaAtributo1 != 4) ? printf("4. Pontos Turísticos\n") : printf(""); 
    (EscolhaAtributo1 != 5) ? printf("5. Densidade Populacional\n") : printf(""); 
    (EscolhaAtributo1 != 6) ? printf("6. PIB per Capita\n") : printf(""); 
    (EscolhaAtributo1 != 7) ? printf("7. Super Poder\n") : printf(""); 
    printf("Digite um atributo disponível conforme relação acima: ");
    scanf("%d", &EscolhaAtributo2);
    printf("\n");

    if (EscolhaAtributo1 == EscolhaAtributo2 ){
        printf("Você escolheu o mesmo atributo! Reiniciar jogo. \n");
    } else if ( (EscolhaAtributo1 < 1 || EscolhaAtributo1 > 7) && (EscolhaAtributo2 < 1 || EscolhaAtributo2 > 7) ) {
        printf("Opção inválida para ambas as escolhas! Reiniciar jogo. \n");
    } else if (EscolhaAtributo1 < 1 || EscolhaAtributo1 > 7){
        printf("Opção inválida para a primeira escolha! Reiniciar jogo. \n");
    } else if (EscolhaAtributo2 < 1 || EscolhaAtributo2 > 7){
        printf("Opção inválida para a segunda escolha! Reiniciar jogo. \n");
    } else {
        switch (EscolhaAtributo1) {
        case 1:
            printf("O primeiro atributo escolhido foi população.\n");
            printf("Carta 1 (%s): %d\n", cidade1, populacao1);
            printf("Carta 2 (%s): %d\n", cidade2, populacao2);
            if (populacao1 > populacao2){ // como a lógica é mais complexa para estes casos, escolhi utilizar if else ao invés de ternário. Parece mais fácil de ler, no meu ponto de vista.
                printf("Carta 1 (%s) venceu o primeiro atributo!\n", cidade1);
            } else if (populacao1 < populacao2){
                printf("Carta 2 (%s) venceu o primeiro atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no primeiro atributo!\n");
            }
            Atributo1Carta1 = populacao1;
            Atributo1Carta2 = populacao2;            
        break;
        case 2:
            printf("O primeiro atributo escolhido foi área.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f\n", cidade2, area2);
            if (area1 > area2){
                printf("Carta 1 (%s) venceu o primeiro atributo!\n", cidade1);
            } else if (area1 < area2){
                printf("Carta 2 (%s) venceu o primeiro atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no primeiro atributo!\n");
            }
            Atributo1Carta1 = area1;
            Atributo1Carta2 = area2;
        break;
        case 3:
            printf("O primeiro atributo escolhido foi PIB.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f\n", cidade2, pib2);
            if (pib1 > pib2){
                printf("Carta 1 (%s) venceu o primeiro atributo!\n", cidade1);
            } else if (pib1 < pib2){
                printf("Carta 2 (%s) venceu o primeiro atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no primeiro atributo!\n");
            }
            Atributo1Carta1 = pib1;
            Atributo1Carta2 = pib2;
        break;
        case 4:
            printf("O primeiro atributo escolhido foi Pontos Turísticos.\n");
            printf("Carta 1 (%s): %d\n", cidade1, pontosturisticos1);
            printf("Carta 2 (%s): %d\n", cidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2){
                printf("Carta 1 (%s) venceu o primeiro atributo!\n", cidade1);
            } else if (pontosturisticos1 < pontosturisticos2){
                printf("Carta 2 (%s) venceu o primeiro atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no primeiro atributo!\n");
            }
            Atributo1Carta1 = pontosturisticos1;
            Atributo1Carta2 = pontosturisticos2;
        break;
        case 5:
            printf("O primeiro atributo escolhido foi Densidade Populacional.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, DensPop1);
            printf("Carta 2 (%s): %.2f\n", cidade2, DensPop2);
            if (DensPop1 < DensPop2){
                printf("Carta 1 (%s) venceu o primeiro atributo!\n", cidade1);
            } else if (DensPop1 > DensPop2){
                printf("Carta 2 (%s) venceu o primeiro atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no primeiro atributo!\n");
            }
            Atributo1Carta1 = DensPop1;
            Atributo1Carta2 = DensPop2;   
        break;
        case 6:
            printf("O primeiro atributo escolhido foi PIB per Capita.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, PibPerC1);
            printf("Carta 2 (%s): %.2f\n", cidade2, PibPerC2);
            if (PibPerC1 > PibPerC2){
                printf("Carta 1 (%s) venceu o primeiro atributo!\n", cidade1);
            } else if (PibPerC1 < PibPerC2){
                printf("Carta 2 (%s) venceu o primeiro atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no primeiro atributo!\n");
            }
            Atributo1Carta1 = PibPerC1;
            Atributo1Carta2 = PibPerC2;
        break;
        case 7:
            printf("O primeiro atributo escolhido foi Super Poder.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, SuperPoder1);
            printf("Carta 2 (%s): %.2f\n", cidade2, SuperPoder2);
            if (SuperPoder1 > SuperPoder2){
                printf("Carta 1 (%s) venceu o primeiro atributo!\n", cidade1);
            } else if (SuperPoder1 < SuperPoder2){
                printf("Carta 2 (%s) venceu o primeiro atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no primeiro atributo!\n");
            }
            Atributo1Carta1 = SuperPoder1;
            Atributo1Carta2 = SuperPoder2;
        break;
        default:
            printf("Opção inválida!\n");
        break;
        }
        printf("\n");
        
        switch (EscolhaAtributo2) {
        case 1:
            printf("O segundo atributo escolhido foi população.\n");
            printf("Carta 1 (%s): %d\n", cidade1, populacao1);
            printf("Carta 2 (%s): %d\n", cidade2, populacao2);
            if (populacao1 > populacao2){
                printf("Carta 1 (%s) venceu o segundo atributo!\n", cidade1);
            } else if (populacao1 < populacao2){
                printf("Carta 2 (%s) venceu o segundo atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no segundo atributo!\n");
            }
            Atributo2Carta1 = populacao1;
            Atributo2Carta2 = populacao2;
        break;
        case 2:
            printf("O segundo atributo escolhido foi área.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f\n", cidade2, area2);
            if (area1 > area2){
                printf("Carta 1 (%s) venceu o segundo atributo!\n", cidade1);
            } else if (area1 < area2){
                printf("Carta 2 (%s) venceu o segundo atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no segundo atributo!\n");
            }
            Atributo2Carta1 = area1;
            Atributo2Carta2 = area2;
        break;
        case 3:
            printf("O segundo atributo escolhido foi PIB.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f\n", cidade2, pib2);
            if (pib1 > pib2){
                printf("Carta 1 (%s) venceu o segundo atributo!\n", cidade1);
            } else if (pib1 < pib2){
                printf("Carta 2 (%s) venceu o segundo atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no segundo atributo!\n");
            }
            Atributo2Carta1 = pib1;
            Atributo2Carta2 = pib2;
        break;
        case 4:
            printf("O segundo atributo escolhido foi Pontos Turísticos.\n");
            printf("Carta 1 (%s): %d\n", cidade1, pontosturisticos1);
            printf("Carta 2 (%s): %d\n", cidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2){
                printf("Carta 1 (%s) venceu o segundo atributo!\n", cidade1);
            } else if (pontosturisticos1 < pontosturisticos2){
                printf("Carta 2 (%s) venceu o segundo atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no segundo atributo!\n");
            }
            Atributo2Carta1 = pontosturisticos1;
            Atributo2Carta2 = pontosturisticos2;
        break;
        case 5:
            printf("O segundo atributo escolhido foi Densidade Populacional.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, DensPop1);
            printf("Carta 2 (%s): %.2f\n", cidade2, DensPop2);
            if (DensPop1 < DensPop2){
                printf("Carta 1 (%s) venceu o segundo atributo!\n", cidade1);
            } else if (DensPop1 > DensPop2){
                printf("Carta 2 (%s) venceu o segundo atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no segundo atributo!\n");
            }
            Atributo2Carta1 = DensPop1;
            Atributo2Carta2 = DensPop2;
        break;
        case 6:
            printf("O segundo atributo escolhido foi PIB per Capita.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, PibPerC1);
            printf("Carta 2 (%s): %.2f\n", cidade2, PibPerC2);
            if (PibPerC1 > PibPerC2){
                printf("Carta 1 (%s) venceu o segundo atributo!\n", cidade1);
            } else if (PibPerC1 < PibPerC2){
                printf("Carta 2 (%s) venceu o segundo atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no segundo atributo!\n");
            }
            Atributo2Carta1 = PibPerC1;
            Atributo2Carta2 = PibPerC2;
        break;
        case 7:
            printf("O segundo atributo escolhido foi Super Poder.\n");
            printf("Carta 1 (%s): %.2f\n", cidade1, SuperPoder1);
            printf("Carta 2 (%s): %.2f\n", cidade2, SuperPoder2);
            if (SuperPoder1 > SuperPoder2){
                printf("Carta 1 (%s) venceu o segundo atributo!\n", cidade1);
            } else if (SuperPoder1 < SuperPoder2){
                printf("Carta 2 (%s) venceu o segundo atributo!\n", cidade2);
            } else {
                printf("Cartas empataram no segundo atributo!\n");
            }
            Atributo2Carta1 = SuperPoder1;
            Atributo2Carta2 = SuperPoder2;
        break;
        default:
            printf("Opção inválida!\n");
        break;
        }
        printf("\n");

        Resultado1 = Atributo1Carta1 + Atributo2Carta1;
        Resultado2 = Atributo1Carta2 + Atributo2Carta2;

        if (Resultado1 > Resultado2){ //melhor usar o if else do que ternário pela complexidade de leitura.
            printf("Carta 1 (%s) venceu o jogo!\n", cidade1);
        } else if (Resultado1 < Resultado2){
            printf("Carta 2 (%s) venceu o jogo!\n", cidade2);
        } else {
            printf("Cartas empataram no jogo!\n");
        }
        printf("Soma dos atributos da Carta 1 (%s): %.2f\n", cidade1, Resultado1);
        printf("Soma dos atributos da Carta 2 (%s): %.2f\n", cidade2, Resultado2);
    }  
    
    return 0;
}