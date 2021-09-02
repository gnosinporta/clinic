

void menuPrincipal()
{
    int flag=1, a;

    while(flag)
    {
        system("cls");

        printf("MENU PRINCIPAL\n\n");
        printf("1 - medicos\n2 - pacientes\n3 - turnos\n4 - habitaciones\n\n0- salir\n\n> ");
        scanf("%i", &a);

        switch(a)
        {
            case 1: menuMedicos(); break;
            case 2: menuPacientes(); break;
            case 3: menuTurnos(); break;
            case 4: menuHabitaciones();  break;
            case 0: flag=0; break;
            default: error(); break;
        }
    }
}

void menuMedicos()
{
    int flag=1, a;

    while(flag)
    {
        system("cls");

        printf("MEDICOS\n\n");
        printf("1 - listado de medicos actualmente en el hospital\n2 - buscar un medico\n");
        printf("3 - dar de alta un nuevo medico\n4 - dar de baja un medico\n\n");
        printf("0 - menu principal\n\n> ");
        scanf("%i", &a);

        switch(a)
        {
            case 1: break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 0: flag=0; break;
            default: error(); break;
        }


    }
}

void menuPacientes()
{
    int flag=1, a;

    while(flag)
    {
        system("cls");

        printf("PACIENTES\n\n");
        printf("1 - buscar un paciente\n2 - iniciar nueva historia clinica\n");
        printf("3 - listado de pacientes actualmente en el hospital\n4 - ingresar un paciente a internacion\n");
        printf("5 - informar alta de internacion de un paciente\n6 - dar de baja un paciente\n\n");        
        printf("0 - menu principal\n\n> ");
        scanf("%i", &a);

        switch(a)
        {
            case 1: break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 5: break;
            case 6: break;
            case 0: flag=0; break;
            default:
                printf("\nese numero no es una opcion...\n");
                sleep(2);
        }


    }
}

void menuTurnos()
{
    int flag=1, a;

    while(flag)
    {
        system("cls");

        printf("TURNOS\n\n");
        printf("1 - dar un turno\n2 - cancelar o modificar un turno\n");
        printf("3 - listado de turnos por dia\n4 - consultar un turno\n\n");
        //printf("5 - informar alta de internacion de un paciente\n6 - dar de baja un paciente\n\n");        
        printf("0 - menu principal\n\n> ");
        scanf("%i", &a);

        switch(a)
        {
            case 1: break;
            case 2: break;
            case 3: break;
            case 4: break;
            //case 5: break;
            //case 6: break;
            case 0: flag=0; break;
            default:error(); break;
        }


    }
}

void menuHabitaciones()
{
    int flag=1, a;

    while(flag)
    {
        system("cls");

        printf("HABITACIONES\n\n");
        printf("1 - consultar habitacion\n2 - mostrar todas las habitaciones de un piso\n");
        printf("3 - mostrar todas las habitaciones\n\n");
        //printf("5 - informar alta de internacion de un paciente\n6 - dar de baja un paciente\n\n");        
        printf("0 - menu principal\n\n> ");
        scanf("%i", &a);

        switch(a)
        {
            case 1: break;
            case 2: break;
            case 3: break;
            //case 4: break;
            //case 5: break;
            //case 6: break;
            case 0: flag=0; break;
            default: error(); break;
                
        }


    }
}

void error()
{
    printf("\nese numero no es una opcion...\n");
    sleep(1);
}



