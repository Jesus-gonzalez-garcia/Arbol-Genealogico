//
//  main.cpp
//  Arbol
//
//  Created by Jesus Gonzalez on 07/06/20.
//  Copyright © 2020 Jesus Gonzalez. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

int main() {
    int opcion;
    do{
   
    printf("\n\nBienvenido al arbol genealogico\n");
    printf("1.Mostrar Bisabuelos Paternos:\n");
    printf("2.Mostras Abuelos Paternos \n");
    printf("3.Mostrar Tios Paternos y Papa \n");
    printf("4.Mostrar Bisabuelos Maternos \n");
    printf("5.Mostrar Abuelos Maternos \n");
    printf("6.Mostrar Tios Maternos y Mama \n");
    printf("7.Mostrar Hermano y Hijo \n");
    printf("8.Mostrar Todo el arbol \n");
    printf("9.Mostrar arbol genealogico del lado paterno\n");
    printf("10.Mostrar arbol genealogico del lado materno\n");
    printf("11.Salir\n");
    printf("Seleccione la opcion que desea:\n");
    scanf("%d",&opcion);
    
    switch (opcion) {
        case 1:
            printf("Los Bisabuelos Paternos son:\n");
                printf("Salome Herrera \ty\t Elpidio Gonzalez || \t\tRosa Rios \ty\t Marcos Padron");
            
        break;

        
        case 2:
            printf("Los Abuelos Paternos son:\n");
                printf("Catalino Gonzalez \ty\t Maria De La Luz Padron");
                
                   
                   break;
        
        case 3:
            printf("Los tios Paternos y Papa son:\n");
                printf("Kino Gonzalez Padron ||\t Kana Gonzalez Padron||\t Chio Gonzalez Padron|| \t Arturo Gonzalez Padron(Papa)");
                   
                   break;
            
            
        case 4:
             printf("Los bisabuelos Maternos son:\n");
                 printf("Dolores Rangel Garcia  \ty\t Ramon Baltierra Mendez\t|| Maria Paz Mondragon \t y \t Francisco Garcia Mondragon");
                   
                   break;
            
        case 5:
             printf("Los abuelos Maternos son:\n");
                 printf("Ana Baltierra Rangel\ty\t Jesus Garcia Mondragon\t\t");
                   
                   break;
            
        case 6:
             printf("Los tios Maternos y Mama son:\n");
                 printf("Jesus Garcia Baltierra \t|| Roberto Garcia Baltierra \t|| Griselda Garcia Baltierra\t|| Guadalupe Garcia Baltierra(Mama)");
                   
                   break;
            
        case 7: printf("Los hijos son;\n");
                 printf("Arturo Gonzalez Garcia\t\t|| Jesus Gonzalez Garcia(Yo)");
                   
                   break;
            
        case 8:
            printf("El arbol genealogico completo es el siguiente:\n");
            printf("Salome Herrera\t\tElpidio Gonzalez\t\t\tRosa Rios\t\tMarcos Padron\t\t\tDolores Garcia\t\tRamon Baltierra \t\t\tMaria Mondragon\t\tFrancisco Garcia\n ");
            printf("\t | \t\t\t\t\t\t | \t\t\t\t\t\t | \t\t\t\t\t | \t\t\t\t\t | \t\t\t\t\t | \t\t\t\t\t\t\t | \t\t\t\t\t |\n");
                printf("\t-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\t | \t\t\t\t\t\t | \t\t\t\t\t\t | \t\t\t\t\t | \t\t\t\t\t | \t\t\t\t\t | \t\t\t\t\t\t\t | \t\t\t\t\t |\n");
                printf("\t---------------------------\t\t\t\t\t\t----------------------- \t\t\t\t----------------------- \t\t\t\t\t\t-----------------------\n");
                printf("\t\t\t\t | \t\t\t\t\t\t\t\t\t\t\t | \t\t\t\t\t\t\t\t\t\t | \t\t\t\t\t\t\t\t\t\t\t\t |\n");
                printf("\t\tCatalino Gonzalez\t\t\t\t\t\t\tMaria Luz Padron  \t\t\t\t\t\tAna Garcia Baltierra\t\t\t\t\t\t\tJesus Garcia Mondragon\n");
               printf("\t\t\t\t | \t\t\t\t\t\t\t\t\t\t\t | \t\t\t\t\t\t\t\t\t\t | \t\t\t\t\t\t\t\t\t\t\t\t |\n");
                printf("\t\t\t\t----------------------------------------------- \t\t\t\t\t\t\t\t\t---------------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t| \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");//
                printf("\t-------------------------------------------------------\t\t\t\t\t\t------------------------------------------------------------------------------\n");
                printf("\t|\t\t\t\t\t| \t\t\t\t |\t\t\t\t |\t\t\t\t\t\t |\t\t\t\t\t| \t\t\t\t\t| \t\t\t\t\t |\n");
                printf("Kino Gonzalez\t Kana Gonzalez \t Chio Gonzalez \t Arturo Gonzalez  \t \tGuadalupe Garcia\t Griselda Garcia\t Roberto Garcia \t Jesus Garcia  Baltierra\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t |\t\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t--------------------------\n");
             printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t |\n");
              printf("\t\t\t\t\t\t\t\t\t\t\t\t\t--------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t |\t\t\t\t\t\t|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
            printf("\t\t\t\t\t\t\t\t\t\t\tJesus Gonzalez \t\t\t\t\t Arturo Gonzalez");
            
            
            
                   
                   break;
            
            
       case 9:
           printf("El arbol genealogico del lado paternos es el siguiente:\n");
            printf("\t\t\tSalome Herrera\t\t\t\t\t\t\tElpidio Gonzalez \tRosa Rios\t\t\t\t\t\t\tMarcos Padron\n ");
            printf("\t\t\t\t| \t\t\t\t\t\t\t\t\t\t |\t\t\t\t\t |\t\t\t\t\t\t\t\t\t\t| \n");
                printf("\t\t\t\t------------------------------------------\t  \t \t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\t|\t\t \t\t\t\t\t | \t\t\t\t\t\t\t | \t\t\t\t\t\t\t |\n");
                printf("\t\t\t\t\t\t------------------------------\t\t\t\t\t\t\t-------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t | \t\t\t\t\t\t\t\t\t\t\t\t\t\t | \n");
                printf("\t\t\t\t\t\t\tCatalino Gonzalez\t\t\t\t\t\t\t\t\t\tMaria Luz Padron\n");
                printf("\t\t\t\t\t\t\t\t\t | \t\t\t\t\t\t\t\t\t\t\t\t\t\t | \n");
                printf("\t\t\t\t\t\t\t\t\t------------------------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
                printf("\t\t\t\t\t\t------------------------------------------------------------------------------------------\n");
                printf("\t\t\t\t\t\t| \t\t\t\t\t\t\t |\t\t\t\t\t\t\t |\t\t\t\t\t\t\t\t | \n");
                printf("\t\t\t\tKino Gonzalez Padron\t Kana Gonzalez Padron\t Chio Gonzalez Padron\t Arturo Gonzalez Padron(Papa)\n");
               
            
                   break;
            
        case 10:
            printf("El arbol genealogico del lado Materno es el siguiente:\n");
            printf("\t\t\tDolores Garcia\t\t\t\t\t\t\tRamon Baltierra \tMaria Mondragon\t\t\t\t\t\tFrancisco Garcia\n ");
            printf("\t\t\t\t| \t\t\t\t\t\t\t\t\t\t |\t\t\t\t\t |\t\t\t\t\t\t\t\t\t\t| \n");
              printf("\t\t\t\t------------------------------------------\t  \t \t\t\t-----------------------------------------\n");
                printf("\t\t\t\t\t\t|\t\t \t\t\t\t\t | \t\t\t\t\t\t\t | \t\t\t\t\t\t\t |\n");
                printf("\t\t\t\t\t\t------------------------------\t\t\t\t\t\t\t-------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t | \t\t\t\t\t\t\t\t\t\t\t\t\t\t | \n");
                printf("\t\t\t\t\t\t\tAna Garcia Baltierra\t\t\t\t\t\t\t\t\tJesus Garcia Mondragon\n");
                printf("\t\t\t\t\t\t\t\t\t | \t\t\t\t\t\t\t\t\t\t\t\t\t\t | \n");
                printf("\t\t\t\t\t\t\t\t\t------------------------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
                printf("\t\t\t\t\t\t------------------------------------------------------------------------------------------\n");
                printf("\t\t\t\t\t\t| \t\t\t\t\t\t\t |\t\t\t\t\t\t\t |\t\t\t\t\t\t\t\t | \n");
                printf("\t\t\t\tJesus Garcia Baltierra \t Griselda Garcia Baltierra\t Roberto Garcia Baltierra\t Guadalupe Garcia Baltierra(Mama)\n");
        
                   break;
            
        case 11:
            printf("Adios\n");
            break;
            
            
            
        default:
            printf("La opcion que ingresaste es incorrecta");
            break;
    }
    }
    while(opcion!=11);
    return 0;
    
}
