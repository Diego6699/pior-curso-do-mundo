/**
 * @file main.c
 * @author Prof. Dr. David Buzatto
 * @brief Modelo para desenvolvimento de exercícios criativos usando a engine
 * de jogos Raylib (https://www.raylib.com/).
 *
 * @copyright Copyright (c) 2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <raylib.h>

int main(void)
{

    /*-----------------------------------------------------
     * A lógica inicial do seu programa deve vir aqui:
     *     - declaração de variáveis;
     *     - entrada de dados;
     *     - processamentos adicionais.
     ----------------------------------------------------*/

    int a;
    int b;
    int c;

    printf("a: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d",&b);

    printf("c: ");
    scanf("%d",&c);

    // ativa a suavização (antialiasing)
    SetConfigFlags(FLAG_MSAA_4X_HINT);

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow(800, 600, "Título da Janela");

    // configura a quantidade de quatros por segundo da engine
    SetTargetFPS(60);

    // enquanto não é sinalizado que a janela deve ser fechada
    while (!WindowShouldClose())
    {

        // inicia o processo de desenho
        BeginDrawing();

        // limpa a tela usando uma cor
        ClearBackground(WHITE);

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve vir aqui.
         ---------------------------------------------------------------------*/

        // Verifica se 'a' é o menor
        if (a <= b && a <= c)
        {
            DrawRectangle(100,200,50,80,PURPLE);
            DrawText(TextFormat("%d",a),100,300,30,BLACK);
            if (b <= c){
                DrawRectangle(200,150,50,130,VIOLET);
                DrawText(TextFormat("%d",b),200,300,30,BLACK);
                DrawRectangle(300,100,50,180,DARKPURPLE);
                DrawText(TextFormat("%d",c),300,300,30,BLACK);
            }
            else{
                DrawRectangle(200,150,50,130,VIOLET);
                DrawText(TextFormat("%d",c),200,300,30,BLACK);
                DrawRectangle(300,100,50,180,DARKPURPLE);
                DrawText(TextFormat("%d",b),300,300,30,BLACK);
            }
        }
        // Verifica se 'b' é o menor
        else if (b <= a && b <= c)
        {
            DrawRectangle(100,200,50,80,PURPLE);
            if (a <= c){
                DrawRectangle(200,150,50,130,VIOLET);
                DrawText(TextFormat("%d",a),200,300,30,BLACK);
                DrawRectangle(300,100,50,180,DARKPURPLE);
                DrawText(TextFormat("%d",c),300,300,30,BLACK);
            }
            else{
                DrawRectangle(200,150,50,130,VIOLET);
                DrawText(TextFormat("%d",c),200,300,30,BLACK);
                DrawRectangle(300,100,50,180,DARKPURPLE);
                DrawText(TextFormat("%d",a),300,300,30,BLACK);
            }
        }
        // Caso 'c' seja o menor
        else
        {
            DrawRectangle(100,200,50,80,PURPLE);
            DrawText(TextFormat("%d",c),100,300,30,BLACK);

            if (a <= b){
                DrawRectangle(200,150,50,130,VIOLET);
                DrawText(TextFormat("%d",a),200,300,30,BLACK);

                DrawRectangle(300,100,50,180,DARKPURPLE);
                DrawText(TextFormat("%d",b),300,300,30,BLACK);
            }
            else{
                DrawRectangle(200,150,50,130,VIOLET);
                DrawText(TextFormat("%d",b),200,300,30,BLACK);

                DrawRectangle(300,100,50,180,DARKPURPLE);
                DrawText(TextFormat("%d",a),300,300,30,BLACK);
            }
        }

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve terminar na linha acima.
         ---------------------------------------------------------------------*/

        // termina o desenho
        EndDrawing();
    }

    // fecha a janela
    CloseWindow();
    return 0;
}
