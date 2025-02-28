#include <stdio.h>

int main(){
    //Conforme instrução em vídeo do professor Sergio, o código primeiramente irá ler todas as infos da carta 1 e imprimi-las após a leitura de todas. Posteriormente serão lidas todas
    //as infos da carta 2  e suas informações serão imprimidas na sequencia. Seguindo desta forma, não seria necessária a criação de uma variável para cada carta, pois a informação
    //armazenada nela seria escrita para 1, impressa para 1, sobrescrita para a 2 e impressa para a 2, logo não haveria prejuízo para a impressão delas, as informações ficariam
    //organizadas. Porém, professor Sergio solicitou a criação das variáveis para cada carta, então segui desta forma, pois sei que mais para frente isso será útil.
    
    char estado1[10], estado2[10]; 
    //Tive problema com o "Enter" para a alocação de valores como caractere para a variavel estado 2, por esse motivo decidi alterar para string para que o código 
    //não tivesse erro algum; V2 comentários: No exemplo do tema 2, o estado que antes era uma letra de A a H, agora é o UF padrão do estado. Alterações no código foram
    //feitas para atender essa mudança.    
    char codigocarta1[4],codigocarta2[4], cidade1[20], cidade2[20]; 
    //embora o exercício demande apenas 3 carecteres para código da carta, no momento da compilação a questão do "Enter" as vezes ser considerado caractere acabou ocasionando um
    //problema na atribuição do valor correto para a variável. Por esse motivo aumentei a string dos codigos em uma unidade e funcionou. 
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2, DensPop1, DensPop2, PibPerC1, PibPerC2, SuperPoder1, SuperPoder2;

    printf("Favor, digitar a seguir as informacoes da Carta 1!\n"); //informando ao usuário que os dados solicitados a seguir serão referente a carta 1
    printf("Digite a UF do estado: "); //antes era solicitada uma letra de A-H, agora estamos solicitando a UF, conforme exemplo do Tema 2.
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
    printf("Digite a UF do estado: "); //antes era solicitada uma letra de A-H, agora estamos solicitando a UF, conforme exemplo do Tema 2.
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

    
    printf("Comparação de cartas (Atributo: População):\n\n");//escolhi o atributo população para ser comparado.
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1); //nas instruções anteriores, o estado era pra ser uma letra de A a H. Agora no código está demonstrando como UF.
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2); //Alterei o código para que o estado reflita a UF, conforme exemplo no desafio.
    
    if ( populacao1 > populacao2 ){ 
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);   
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }   
    
    return 0;
}