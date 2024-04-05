#include <stdio.h>

int main()
{
    //Arrays das Diciplinas
    float racLog[4];
    float gerProj[5];
    float ing[4];
    float metAgil[6];
    float javaScr[5];
    
    //Variáveis 
    float notaMin, notaMax, notaFinal;
    float notaRacL = 0, notaGer = 0, notaIng = 0, notaAgil = 0, notaJava = 0;
    //Variável para o "for"
    int i;
   
   //Entrada das notas de Raciocínio Lógico
    printf("Digite as notas de Raciocínio Lógico: \n");
    for(i = 0; i < 4; i++)
    {
        scanf("%f", &racLog[i]);
    }
    
    //Atribue o primeiro valor inserido para "notaMax" e "notaMin"
    notaMin = racLog[0];
    notaMax = racLog[0];
    
    //loop para encontrar a nota mínima e a máxima, além de somar as notas
    for(i = 0; i < 4; i++)
    {
        if(racLog[i] < notaMin) //verifica se a nota atual é menor que a mínima
        {
            notaMin = racLog[i]; //atualiza a minima 
        }
        
        if(racLog[i] > notaMax) //verifica se a nota atual é maior que a máxima
        {
            notaMax = racLog[i]; //atualiza a máxima
        }
        //soma das notas
        notaRacL = notaRacL + racLog[i];
    }
    //subtrai a nota mínima e a nota máxima do nota "principal"
    notaRacL = notaRacL - notaMin - notaMax;
    
    //repetição para todas as diciplinas:
    
    printf("Digite as notas de Conceitos de Gerenciamento de Projetos: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%f", &gerProj[i]);
    }
    
    notaMin = gerProj[0];
    notaMax = gerProj[0];
    
    for(i = 0; i < 5; i++)
    {
        if(gerProj[i] < notaMin)
        {
            notaMin = gerProj[i];
        }
        
        if(gerProj[i] > notaMax)
        {
            notaMax = gerProj[i];
        }
        notaGer = notaGer + gerProj[i];
    }
    
    notaGer = notaGer - notaMin - notaMax;
    
    printf("Digite as notas de Língua Inglesa: \n");
    for(i = 0; i < 4; i++)
    {
        scanf("%f", &ing[i]);
    }
    
    notaMin = ing[0];
    notaMax = ing[0];
    
    for(i = 0; i < 4; i++)
    {
        if(ing[i] < notaMin)
        {
            notaMin = ing[i];
        }
        
        if(ing[i] > notaMax)
        {
            notaMax = ing[i];
        }
        notaIng = notaIng + ing[i];
    }
    
    notaIng = notaIng - notaMin - notaMax;

    printf("Digite as notas de Conceitos de Metodologia Ágil: \n");
    for(i = 0; i < 6; i++)
    {
        scanf("%f", &metAgil[i]);
    }
    
    notaMin = metAgil[0];
    notaMax = metAgil[0];
    
    for(i = 0; i < 6; i++)
    {
        if(metAgil[i] < notaMin)
        {
            notaMin = metAgil[i];
        }
        
        if(metAgil[i] > notaMax)
        {
            notaMax = metAgil[i];
        }
        notaAgil = notaAgil + metAgil[i];
    }
    
    notaAgil = notaAgil - notaMin - notaMax;
    
    printf("Digite as notas de Linguagem Javascript: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%f", &javaScr[i]); 
    }
    
    notaMin = javaScr[0];
    notaMax = javaScr[0];
    
    for(i = 0; i < 5; i++)
    {
        if(javaScr[i] < notaMin)
        {
            notaMin = javaScr[i];
        }
        
        if(javaScr[i] > notaMax)
        {
            notaMax = javaScr[i];
        }
        notaJava = notaJava + javaScr[i];
    }
    
    notaJava = notaJava - notaMin - notaMax;
    
    //cálculo da nota final 
    notaFinal = notaRacL + notaGer + notaIng + notaAgil + notaJava;
    
    //Saída das notas
    printf("===========================SAÍDA===========================\n");
    printf("Nota Raciocínio Lógico: %.2f \n", notaRacL);
    printf("Nota Conceitos de Gerenciamento de Projetos: %.2f \n", notaGer);
    printf("Nota Lìngua Inglesa: %.2f \n", notaIng);
    printf("Nota Conceitos de Metodologia Ágil: %.2f \n", notaAgil);
    printf("Nota Linguagem JavaScript: %.2f \n", notaJava);
    printf("Nota final do candidato: %.2f", notaFinal);
    
    return 0;
    
}