void titleBar(void)
{
    int i;
    for(i = 0;i < 42; i++)
    {
        printf("*");
    }
}

void title(void)
{
    system("clear");
    titleBar();
    printf("\n\n            Dance of Numbers\n\n");
    titleBar();
    printf("\n");
    system("sleep 10s");
}

void start(void)
{

    int option = 0;

    while (option != 2)
    {
        system("clear");
        printf("        Main Menu\n\n");
        printf("    0 - Settings\n");
        printf("    1 - Play\n");
        printf("    2 - Exit\n");
        printf("    ::");
        scanf("%d", &option);

        switch (option)
        {
            case 0:
        {
            defineSettings();
        }
            break;
        
        default:
            break;
        }
    }
    
    system("clear");

    

}

void defineSettings(void)
{
    
}