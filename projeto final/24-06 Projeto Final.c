/*********************************

Nome 1..: Leonardo Canuto Junior
Nome 2..: Vitor Gabriel Menck Diniz
Turma..: EC31C-C11
Data..: 24/06/2022
Enenciado: Fazer um programa em Linguagem C (ANSI C) que simule uma carteira de vacinação (COVID), 
conforme as ações listadas no PDF.

*********************************/

#include <stdio.h>  // Biblioteca utilizada para funções printf, scanf, gets e setbuf; 
#include <string.h> // Biblioteca utilizada para funções strcpy e strcmp;
#include <stdlib.h> // Biblioteca para utilização da função rand();
#include <locale.h> // Biblioteca para a utilização do setlocale();

#define LIMITE_PAC 100 // Número limite de pacientes no programa;

#define LIMITE_VAC 5 // Número limite de vacinas possíveis por paciente;

// DECLARAÇÃO DE VARIÁVEIS GLOBAIS
int a, b, i, j, k; // Variáveis para uso em for (a,b,i,j,k) e sorteio (k);

int l, m, n; // Variáveis para transcrição de dados;

int opcao; // Viarável para uso na decisão de opção do menu;

int validacao; // Variável para comparação de validação;
   
int LOG=15; // Número de pacientes no programa; 
            // a definição será dos iniciais gerados; (Padrão: 15)
            // 0 <= LOG <= 25 (0 a 25)

float num; // Número flutuante para cálculos de porcentagem;

// DECLARAÇÃO DE ARRAYS PARA SORTEIO
// Array de strings: Nomes aleatórios (25)
char nome_random[25][100] = { {"Lucas Dalan"}, {"Sonia Baracat"}, {"Lara Gomes"}, {"Vanessa Soares"}, {"Paulo Gomes"},
                              {"Sofia Espanha"}, {"Erika Pereira"}, {"Bruno Silva"}, {"Julia Beiroco"}, {"Rodrigo Barros"}, 
                              {"Gustavo Gentil"}, {"Teste Da Silva Junior"}, {"Chico Bento"}, {"Vitor Mendes"}, {"Leonardo Canuto Junior"},
                              {"Amanda Oliveira"}, {"Maria Eduarda Zago"}, {"João Pedro Silva"}, {"Hélio Pereira Junior"}, {"Ivo Aparecido"}, 
                              {"João Pereira Silva"}, {"Joana Silva Souza"}, {"Teodoro Santiago"}, {"Maicon Souza"}, {"Douglas Silva"} };

// Array de strings: Telefones aleatórios (25)    
char telefone_random[25][20] = { {"014998912487"}, {"011995634050"}, {"012995201234"}, {"011995272460"}, {"095765234050"}, 
                                 {"054995402050"}, {"023987024050"}, {"011992345503"}, {"014995223550"}, {"081991324050"}, 
                                 {"025995873504"}, {"027995568050"}, {"068995092150"}, {"034975204050"}, {"097995908050"}, 
                                 {"052935424050"}, {"026987092050"}, {"010994345503"}, {"011983223551"}, {"089981324051"}, 
                                 {"021958873504"}, {"021998968050"}, {"061889109215"}, {"031297520405"}, {"080995908154"} };
    
// Array de strings: Fabricantes aleatórios (5)
char fabricantes[5][20] = { {"pfizer"}, 
                            {"janssen"}, 
                            {"astrazeneca"}, 
                            {"moderna"}, 
                            {"sinopharm"} };
   
// Array de strings: Lotes aleatórios (25) 
char lote_random[25][15] = { {"XXII01_001"}, {"XXII01_002"}, {"XXII01_003"}, {"XXII01_004"}, {"XXII01_005"}, 
                             {"XXII02_001"}, {"XXII02_002"}, {"XXII02_003"}, {"XXII02_004"}, {"XXII02_005"}, 
                             {"XXII03_001"}, {"XXII03_002"}, {"XXII03_003"}, {"XXII03_004"}, {"XXII03_005"}, 
                             {"XXII04_001"}, {"XXII04_002"}, {"XXII04_003"}, {"XXII04_004"}, {"XXII04_005"}, 
                             {"XXII05_001"}, {"XXII05_002"}, {"XXII05_003"}, {"XXII05_004"}, {"XXII05_005"} };

// String para uso de pesquisa por strings no struct;                  
char BUSCA[100];

// ESTRUTURA DE DADOS (STRUCT)
typedef struct Data{
    int dia;
    int mes;
    int ano;
} Data;
    
typedef struct Vacina{
    char fabricante[20];
    char lote[15];
    Data data_aplicacao;
} Vacina;
    
typedef struct Carteira{
    char nome[100];
    char telefone[20];
    Data data_nascimento;
    Vacina vacinas[5];
    int doses;
} Carteira;

// Aqui será definido que o struct de Carteira poderá ter até LIMITE_PAC pacientes;
Carteira pacientes[LIMITE_PAC];
// Aqui será definido o struct temporário para uso de ordenação;
Carteira pacientesTEMP;

/*--- PROTÓTIPOS DAS FUNÇÕES ---*/
void gerador(int gerados);
void menu(void);
int validarNome(char nome[100]);
int validarTel(char telefone[20]);
int validarVac(char vacina[20]);
int validarDataNas(Data nasValida);
int validarDataVac(Data vacValida);
void cadastro_vacina(char pesquisar[100]);
void cadastro_paciente(void);
void busca_str(char banco[100], char pesquisa[100], int x);
void ordena(void);
void tabela(int tamanho);
void vac_fab(char fab[20]);
void vac_doses(int doses);
void lista_completa(void);


/*-------------------------------
Função...: Gerador de pacientes;
Parâmetro: gerados – número de pacientes que será gerado;

Descrição: Utiliza das arrays_random pra gerar aleatoriamente, proporcionalmente 
ou inversamente proporcional os valores de cada paciente e em seguida escreve no
struct Carteira pacientes[];
---------------------------------*/
void gerador( int gerados )
{
    // Irá passar pelo número definido como pacientes a serem gerados;
    for (i=0; i < gerados; i++){
        pacientes[i].doses = 0; // Garante que não exista confusão entre memória;
    
        // Reescrita Proporcional - nome_random -> struct de pacientes.nome
        strcpy (pacientes[i].nome, nome_random[i]); 
        
        // Reescrita Inversamente proporcional - telefone_random -> struct de pacientes.telefone
        strcpy (pacientes[i].telefone, telefone_random[( gerados - 1 ) - i]); 
    
        // Define um número aleatório entre 1 a 30;
        pacientes[i].data_nascimento.dia = 1 + ( rand() % 30 ); 
        // Define um número aleatório entre 1 a 12;
        pacientes[i].data_nascimento.mes = 1 +( rand() % 12 ); 
        // Define um número aleatório entre 1950 a 2010;
        pacientes[i].data_nascimento.ano = 1950 + ( rand() % 61 ); 
        
        //Define um número aleatório para as vacinas tomadas por pessoa de 0 a LIMITE_VAC (número máximo de vacinas por paciente);
        k = ( rand () % LIMITE_VAC ); 
        
         // Nesse bloco de comandos será gerado automaticamente as possíveis vacinas tomadas pelo paciente
        for (j = 0; j < ( 1 + k ); j++){
            // Gera um valor de 0 a 4 para seleção das vacinas possíveis;
            strcpy (pacientes[i].vacinas[j].fabricante, fabricantes[ ( rand() % 5 ) ]); 
            // Gera um valor de 0 a 24 para seleção dos lotes possíveis;
            strcpy (pacientes[i].vacinas[j].lote, lote_random[ ( rand() % 25 ) ]); 
            // Define um valor entre 2021 a 2022;
            pacientes[i].vacinas[j].data_aplicacao.ano = 2021 + ( rand() % 2 ); 
            // Define um número aleatório entre 1 a 30;
            pacientes[i].vacinas[j].data_aplicacao.dia = 1 + ( rand() % 30 ); 
            
            // Se o ano sorteado é 2022
            if (pacientes[i].vacinas[j].data_aplicacao.ano == 2022){             
                // Define um valor de 1 a 6;
                pacientes[i].vacinas[j].data_aplicacao.mes = 1 + ( rand() % 6 );  
            // Se o ano sorteado é 2021
            }else if (pacientes[i].vacinas[j].data_aplicacao.ano == 2021){                                                                
                // Define um valor de 1 a 12;
                pacientes[i].vacinas[j].data_aplicacao.mes = 1 + ( rand() % 12 ); 
            }
                // A cada rotação incluí ao paciente +1 vacina tomada;
                pacientes[i].doses += 1; 
        }
    }
    // Irá retornar ao console que foi gerado com sucesso;
    printf("  [Status]: %d pacientes foram gerados automaticamente.", LOG); 
}


/*-------------------------------
Função...: Menu de escolhas;

Descrição: Mostra as opções disponíveis no switch com a legenda 
e recebe o valor digitado no scanf.
---------------------------------*/
void menu(void)
{
    m = 0;
    printf("\n*------------------------------------------*\n");
    printf("            Menu         \n");
    printf("\n  0. Sair");
    printf("\n  1. Cadastro de paciente");
    printf("\n  2. Cadastro de vacinas");
    printf("\n  3. Buscar pelo nome do paciente");
    printf("\n  4. Buscar pelo telefone do paciente");
    printf("\n  5. Listar todos pacientes");
    printf("\n  6. Quantidade de doses aplicadas por fabricante");
    printf("\n  7. Quantidade de pacientes por dose");
    printf("\n\n*------------------------------------------*");
    printf("\n  Digite a opção desejada: ");
    setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
    apagada e não influencie no menu */
    scanf("%d", &opcao);
}


/*-------------------------------
Função...: Validação de nome;
Parâmetro: nome[100] - string que receberá o nome que deverá ser validado;

Descrição: Será inserido um string que deverá cumprir com os requisitos propostos,
caso contrário a função irá resultar em 0.
(dois nomes e maiores que 2 caracteres cada)
Retorno..: se validação correta 1, se incorreta 0.
---------------------------------*/
int validarNome( char nome[100] )
{
    // O bloco irá passar por todos pacientes registrados;
    for (i = 0; i < LOG; i++){
        
        // Caso possua alguém com o mesmo nome, retorna -1 a função;
        if (strcmp(pacientes[i].nome, nome) == 0){
            return -1;
        }
    }
    
    /* O for se inicia passando pela string inteira caractere por caractere 
    até que ela se encerre com '\0' */ 
    for (i = 0; nome[i] != '\0'; i++){
        
        // Comparar se a sequência terá mais de 2 caracteres;
        if (i > 2){ 
            
            // Checar se a sequência terá espaço;
            if (nome[i]==' '){
                
                // Verificar se após o espaço há mais de 2 caracteres;
                if (nome[i+1]!='\0' && nome[i+2]!='\0' && nome[i+3]!='\0')
                    return 1;
            }
        }
    }
    return 0;
}


/*-------------------------------
Função...: Validação de telefone;
Parâmetro: telefone[20] - string que receberá o telefone que deverá ser validado;

Descrição: Será inserido um string que deverá cumprir com os requisitos propostos,
caso contrário a função irá resultar em 0.
(começar com 0 e ter de 11 a 12 digitos)
Retorno..: se validação correta 1, se incorreta 0.
---------------------------------*/
int validarTel( char telefone[20] )
{
    // O bloco irá passar por todos pacientes registrados;
    for (i = 0; i < LOG; i++){
        
        // Caso possua alguém com o número digitado, retorna -1 a função;
        if (strcmp(pacientes[i].telefone,telefone) == 0){
        return -1;
        }
    }
    
    n = 0; // Definindo a variável de cálculo como 0;
    // O bloco irá passar pelo número de caracteres do string
    for (i = 0; i < strlen(telefone); i++){
        
        // Caso o caractere seja de 0 a 9, somará 1 ao n;
        if (telefone[i] >= '0' && telefone[i] <= '9')
            n+=1;
        
        // Caso o caractere seja diferente de 0 a 9, subtrai 1 ao n;
        else
            n-=1;
    }
    
    // Caso o string comece com 0;
    if (telefone[0] == '0'){
        
        // Caso o string termine nos índices 11 ou 12;
        if (telefone[11] == '\0' || telefone[12] == '\0'){
            
            // Caso n seja 11 ou 12 (n será a contagem dos caracteres válido pela string)
            if (n >= 11 && n <= 12)  
                    return 1;
        }
    }
    return 0;
}


/*-------------------------------
Função...: Validação de vacina;
Parâmetro: vacina[20] - string que receberá o fabricante que deverá ser validado;

Descrição: Será inserido um string que deverá cumprir com os requisitos propostos,
caso contrário a função irá resultar em 0.
(estar dentro do vetor de fabricantes[])
Retorno..: se validação correta 1, se incorreta 0.
---------------------------------*/
int validarVac( char vacina[20] )
{
    // O bloco passará por todas vacinas listadas no programa;
    for (i = 0; i < 5; i++){
        
        // Verifica se a fabricante pesquisada está no vetor de fabricantes;
        if (strcmp(fabricantes[i],vacina) == 0)
            return 1;
    }
    return 0;
}


/*-------------------------------
Função...: Validação de data;
Parâmetro: Data nasValida - struct de comparação de data para validar-se;

Descrição: Será comparado o valor inserido na variável da função com os valores de comparação
dia (1 a 30), mês (1 a 12) e ano (1900 a 2022).
Retorno..: se validação correta 1, se incorreta 0.
---------------------------------*/
int validarDataNas( Data nasValida )
{
    // Comparar se o dia varia de 1 a 30;
    if (nasValida.dia >= 1 && nasValida.dia <= 30) {
        
        // Comparar se o mês varia de 1 a 12;
        if (nasValida.mes >= 1 && nasValida.mes <= 12) {
            
            // Comparar se o ano varia de 1900 a 2022;
            if (nasValida.ano >= 1900 && nasValida.ano <= 2022) {
                return 1;
            }
        }
    }
    return 0;
}


/*-------------------------------
Função...: Validação de data de vacina;
Parâmetro: Data vacValida - struct de comparação de data para validar-se;

Descrição: Será comparado o valor inserido na variável da função com os valores de comparação
de ano (2021 a 2022), 
se 2021 mês (1 a 12)
se 2022 mês (1 a 6) e dia (1 a 30).
Retorno..: se validação correta 1, se incorreta 0.
---------------------------------*/
int validarDataVac( Data vacValida )
{
    // Comparar se o ano varia de 2021 e o meses de 1 a 12 ou 2022 e o meses variam de 1 a 6;
    if (vacValida.ano == 2021 && vacValida.mes >= 1 && vacValida.mes <= 12 || vacValida.ano == 2022 && vacValida.mes >= 1 && vacValida.mes <= 6) {
            
            // Comparar se o dia varia de 1 a 30
            if (vacValida.dia >= 1 && vacValida.dia <= 30)
                return 1;
    }
    return 0;
}


/*-------------------------------
Função...: Cadastro de nova vacina por paciente;

Descrição: Será disponibilizado o menu de cadastro e receberá os dados
para o cadastro do paciente no struct.
---------------------------------*/
void cadastro_vacina( char pesquisar[100] )
{
    l=-1; /* l será o número do índice do paciente, antes de buscar inicia-se 
    com -1 simbolizando nenhum paciente; */
    
    // O bloco passará por todos pacientes do banco;
    for (i = 0; i < LOG; i++){
        
        // Se o nome pesquisado é igual ao nome dos pacientes cadastrados;
        if (strcmp(pacientes[i].nome, pesquisar) == 0){
            
            // Encontrando o nome do paciente no banco, irá inserir em m seu índice;
            l = i;
            break;
            
        // Caso o nome não seja encontrado no banco, quando na última verificação avisará que o paciente não foi encontrado;
        }else if (i == ( LOG - 1))
            printf("  Paciente não encontrado.\n");
    }
    
    // Se o paciente foi encontrado e se ainda não passou o número máximo de doses por paciente;
    if (l > -1 && pacientes[l].doses < LIMITE_VAC){
        
        printf("\n*------------------------------------------*\n");
        printf("            Cadastro da vacina         \n\n");
        
        // Se a pessoa tiver mais de uma dose tomada
        if (pacientes[l].doses > 1)
            printf("  Esse paciente já tomou %02d doses.\n", pacientes[l].doses);
        
        // Se a pessoa tiver 0 doses tomadas
        else if (pacientes[l].doses == 1)
            printf("  Esse paciente já tomou %02d dose.\n", pacientes[l].doses);
        
        // Se a pessoa tiver 0 doses tomadas
        else if (pacientes[l].doses == 0)
            printf("  Esse paciente não possui vacinas registradas ainda.\n");
       
        printf("  Vacinas disponíveis: ");
        // Nesse bloco exibirá o vetor completo das fabricantes;
        for (i = 0; i < 5 ; i++){
            if (i < 4)
                printf("%s | ", fabricantes[i]);
            else if (i == 4)
                printf("%s\n", fabricantes[i]);
        }
        
        validacao == 0; // Aproveitando a variável e garantindo que a validação reinicie do 0;
        do {
            printf("\n  Digite a vacina que o paciente tomou: ");
            setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
            apagada e não influencie no gets */
            gets(pacientes[l].vacinas[ pacientes[l].doses ].fabricante);
            
            /* Irá chamar a função validarVac e receberá um valor entre 0 e 1;
            Caso receba 0 a função se repete até que cumpra com os requisitos da função,
            caso receba 1 será registrado o nome e seguirá para o próximo bloco de comandos; */
            validacao = validarVac( pacientes[l].vacinas[ ( pacientes[l].doses ) ].fabricante );
            
            // Irá avisar caso a vacina não seja válida;
            if (validacao != 1)
                printf("    - Vacina inserida é inválida! Escolha uma entre as vacinas disponíveis.\n\n");
        
        }while (validacao == 0);
        
        // Irá gerar um lote aleatório para a vacina que o paciente tomou;
        strcpy (pacientes[l].vacinas[ ( pacientes[l].doses ) ].lote, lote_random[ ( rand() % 25 ) ]);
        
        validacao == 0; // Aproveitando a variável e garantindo que a validação reinicie do 0;
        do {
            printf("  Digite a data de aplicação (xx/xx/xxxx): ");
            setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
            apagada e não influencie no scanf */
            scanf("%d/%d/%d", &pacientes[l].vacinas[ ( pacientes[l].doses ) ].data_aplicacao.dia, &pacientes[l].vacinas[ ( pacientes[l].doses ) ].data_aplicacao.mes, &pacientes[l].vacinas[ ( pacientes[l].doses ) ].data_aplicacao.ano);
            
            /* Irá chamar a função validarDataVac e receberá um valor entre 0 e 1;
            Caso receba 0 a função se repete até que cumpra com os requisitos da função,
            caso receba 1 será registrada a data e seguirá para o próximo bloco de comandos; */
            validacao = validarDataVac( pacientes[l].vacinas[ ( pacientes[l].doses ) ].data_aplicacao );
            
            // Irá avisar caso a data não esteja validada;
            if (validacao != 1)
                printf("    - Data inserida é inválida! Siga o padrão do dia 01/01/2021 até os dias atuais.\n\n");
        
        }while (validacao == 0);
        
        // Registra e informa que mais uma vacina foi cadastrada;
        pacientes[l].doses += 1;
        printf("\n  [Status]: Cadastro de vacina concluído com sucesso!\n  [%d/%d] vacinas tomadas.\n", pacientes[l].doses, LIMITE_VAC);
    
    // Caso o paciente já tenha tomado as 5 doses;
    }else if (pacientes[l].doses == LIMITE_VAC)
        printf("  Esse paciente já tomou todas vacinas disponíveis.\n");
}


/*-------------------------------
Função...: Cadastro de novo paciente;

Descrição: Será disponibilizado o menu de cadastro e receberá os dados
para o cadastro do paciente no struct.
---------------------------------*/
void cadastro_paciente(void)
{
    // Comparando se o número máximo de pacientes já foi ultrapassado;
    if ( LOG >= LIMITE_PAC )
    // Caso ultrapassado, avisará ao console e retornará ao menu;
    printf("[Status]: O limite de %d pacientes já foi concluído.\n", LOG);

    // Caso ainda não tenha batido o limite de pacientes;
    else{
        m = 0, n = 0;
        printf("\n*------------------------------------------*\n");
        printf("            Cadastro de paciente         \n\n");
        
        validacao == 0; // Aproveitando a variável e garantindo que a validação reinicie do 0;
        do {
            printf("    Digite seu nome completo: ");
            setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
            apagada e não influencie no gets */
            gets(pacientes[LOG].nome);
            
            /* Irá chamar a função validarNome e receberá um valor entre 0 e 1;
            Caso receba 0 a função se repete até que cumpra com os requisitos da função,
            caso receba 1 será registrado o nome e seguirá para o próximo bloco de comandos; */
            validacao = validarNome( pacientes[LOG].nome );
            
            // Irá avisar caso o nome não esteja validado;
            if (validacao == 0)
                printf("    - Nome inserido é inválido! Siga o padrão: no mínimo 3 caracteres seguidos de espaço.\n\n");
            // Irá avisar caso o nome já existe no banco;
            if (validacao == -1)
                printf("    - Nome inserido já existe! Insira um novo nome.\n\n");
                
        }while (validacao <= 0);
        
        
        validacao == 0; // Aproveitando a variável e garantindo que a validação reinicie do 0;
        do {
            printf("    Digite seu telefone: ");
            setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
            apagada e não influencie no gets */
            gets(pacientes[LOG].telefone);
            
            /* Irá chamar a função validarTel e receberá um valor entre 0 e 1;
            Caso receba 0 a função se repete até que cumpra com os requisitos da função,
            caso receba 1 será registrado o telefone e seguirá para o próximo bloco de comandos; */
            validacao = validarTel( pacientes[LOG].telefone );
            
            // Irá avisar caso o telefone não esteja validado;
            if (validacao == 0)
                printf("    - Telefone inserido é inválido! Siga o padrão: começar com 0 e no máximo 11 ou 12 números (0 a 9).\n\n");
            // Irá avisar caso o telefone já exista no banco;
            if (validacao == -1)
                printf("    - Telefone inserido já existe! Insira um novo número de telefone.\n\n");
                
        }while (validacao <= 0);
        
        
        validacao == 0; // Aproveitando a variável e garantindo que a validação reinicie do 0;
        do {
            printf("    Digite sua data de nascimento (xx/xx/xxxx): ");
            setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
            apagada e não influencie no scanf */
            scanf("%d/%d/%d", &pacientes[LOG].data_nascimento.dia, &pacientes[LOG].data_nascimento.mes, &pacientes[LOG].data_nascimento.ano);
            
            /* Irá chamar a função validarDataNas e receberá um valor entre 0 e 1;
            Caso receba 0 a função se repete até que cumpra com os requisitos da função,
            caso receba 1 será registrada a data e seguirá para o próximo bloco de comandos; */
            validacao=validarDataNas( pacientes[LOG].data_nascimento );
            
            // Irá avisar caso a data não esteja validada;
            if (validacao != 1)
                printf("    - Data inserida é inválida! Siga o padrão dia (1 a 30), mês (1 a 12) e ano (1900 a 2022).\n\n");
            
        }while (validacao == 0);
        
        pacientes[LOG].doses = 0; // Garantindo que as vacinas do novo paciente gerado iniciem com 0;
        
        n = LOG; // Definindo n como o número do índice que se encontra o paciente;
        
        // Registra e avisa que foi criado um novo paciente com sucesso;
        LOG += 1;
        printf("\n  [Status]: Cadastro de paciente concluído com sucesso!\n");
        
        
        printf("\n  Deseja cadastrar quantas vacinas para este paciente (0 a 5): ");
        setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
        apagada e não influencie no scanf */
        scanf("%d", &m);
        // O bloco será executado pela quantidade de vacinas a serem adicionadas;
        for (i = 0; i < m; i++){
            // Irá chamar a função cadastro_vacina e realizar o cadastro pela quantidade estipulada; (m vezes)
            cadastro_vacina( pacientes[n].nome );
        }
    }
}


/*-------------------------------
Função...: Busca por string;
Parâmetros: banco –  string contendo qual estrutura do struct que será feita a pesquisa;
            pesquisa – string contendo o que será pesquisado;
            x – int contendo o valor da quantidade de pesquisas que serão realizadas;
            
Descrição: Nos parâmetros será inserido em qual estrutura será pesquisada e o que será pesquisado, 
assim a função irá realizar uma pesquisa pelo banco. Caso encontre: Disponibilizará todos dados na tela,
Caso não encontre, irá mostrar que o paciente não foi encontrado.

* O uso dessa função é junto a um for para ciclo de pesquisa, deve-se usar o int i ou adaptar o código
para outro int;
---------------------------------*/
void busca_str( char banco[100], char pesquisa[100], int x )
{
    // Verifica se a string pesquisada está no struct (banco);
    if (strcmp(banco, pesquisa) == 0){
        
        // Define m como 1 para consequentemente ser verdadeiro que o paciente foi encontrado;
        m = 1;
        printf("\n  [Status]: Paciente encontrado!\n");
        printf("\n*------------------------------------------*\n");
        printf("\n  Nome: %s", pacientes[i].nome);
        printf("\n  Telefone: %s", pacientes[i].telefone);
        printf("\n  Data de Nascimento: %02d/%02d/%4d\n", pacientes[i].data_nascimento.dia, pacientes[i].data_nascimento.mes, pacientes[i].data_nascimento.ano);
        
        // Se o paciente não tiver tomado vacinas ainda;
        if (pacientes[i].doses == 0)
        printf("\n  Nenhuma dose foi tomada pelo paciente.\n");
        // Se o paciente tiver tomado uma ou mais vacinas;
        else if (pacientes[i].doses > 0)
        printf("\n  Vacinas tomadas [%d]\n", pacientes[i].doses);
        
        // Nesse bloco exibirá todas as vacinas tomadas pelo paciente pesquisado;
        for (j = 0; j < LIMITE_VAC; j++){
            
            // Se por conta do rand() ter sido gerado resquísios de memória;
            if (pacientes[i].vacinas[j].data_aplicacao.dia == 0)
                break;
            printf("\n  Fabricante: %s", pacientes[i].vacinas[j].fabricante);
            printf("\n  Lote: %s", pacientes[i].vacinas[j].lote);
            printf("\n  Data de Aplicação: %02d/%02d/%4d\n", pacientes[i].vacinas[j].data_aplicacao.dia, pacientes[i].vacinas[j].data_aplicacao.mes, pacientes[i].vacinas[j].data_aplicacao.ano);
        }
    
    // Caso a pesquisa termine e não seja encontrado o paciente, será avisado no console;
    }if (m != 1 && i == ( x - 1)){
        printf("\n  [Status]: Paciente não encontrado!\n");
    }
}


/*-------------------------------
Função...: Ordenação de dados por nomes alfabéticos;

Descrição: Irá comparar todos os nomes atuais no struct entre si e
organizá-los de forma alfabética com seus respectivos dados.
---------------------------------*/
void ordena(void)
{
    // O bloco passará por todos pacientes atuais do programa;
    for (i = 0; i < LOG; i++){
        
        // O bloco entrará em bubble sort para que reorganize em ordem alfabética;
        for (j = 0; j < (LOG - 1); j++){
            
            // Se o nome do paciente (j+1) está alfabeticamente na frente do nome do paciente (j);
            if (strcmp(pacientes[j].nome, pacientes[j + 1].nome) > 0){
                
                // Reordenação de struct
                pacientesTEMP = pacientes[j];
                pacientes[j] = pacientes[j + 1];
                pacientes[j + 1] = pacientesTEMP;
            
            }
        }
    }
}


/*-------------------------------
Função...: Tabela de todos pacientes;
Parâmetros: tamanho –  int contendo o valor do tamanho da tabela;

Descrição: Será mostrado na tela todos pacientes na organização atual,
independente na ordem que estejam.
---------------------------------*/
void tabela( int tamanho )
{
    printf("\n   Vacinas   | Nascimento |   Telefone   | Nome completo");
    printf("\n*------------|------------|--------------|------------------------*");
    
    // Inicia passando pelos pacientes do programa limitando-se ao tamanho estipulado da tabela;
    for (i = 0; i < tamanho; i++){
        
        // Caso o paciente possua uma dose ou mais;
        if (pacientes[i].doses > 0)
            printf("\n  %02d dose(s) | ", pacientes[i].doses);
        // Caso o paciente não esteja vacinado ainda; 
        else if (pacientes[i].doses == 0){
            printf("\n Não vacinou | ");
        }
        printf("%02d/%02d/%4d | ", pacientes[i].data_nascimento.dia, pacientes[i].data_nascimento.mes, pacientes[i].data_nascimento.ano);
        printf("%-12s | ", pacientes[i].telefone);
        printf("%s", pacientes[i].nome);
        printf("\n*------------|------------|--------------|------------------------*");
        
        // Ao fim da tabela cria um espaço para o próximo comando do console;
        if (i == ( tamanho - 1 ))
            printf("\n");
    }
}


/*-------------------------------
Função...: Contagem de vacinas por fabricantes;
Parâmetro: fab[20] – string contendo o nome da fabricante;

Descrição: Será contabilizado quantas vacinas aplicadas pelo fabricante desejado.
---------------------------------*/
void vac_fab( char fab[20] )
{
    float porcentagem = 0;
    num = 0;
    m = 0;
    // Esse bloco irá passar por todos pacientes existentes, ao final entregará o número total de vacinas aplicadas;
    for(a = 0; a < LOG; a++){
            
        // Esse bloco irá passar pelas 5 vacinas verificando o total aplicado e somando;
        for (b = 0; b < LIMITE_VAC; b++){
                    
            // Irá comparar se o usuário tomou certa vacina e irá somar até atingir o total de todas vacinas tomadas;
            if (strcmp (pacientes[a].vacinas[b].fabricante, fabricantes[0]) == 0)
                num+=1.0;
            if (strcmp (pacientes[a].vacinas[b].fabricante, fabricantes[1]) == 0)
                num+=1.0;
            if (strcmp (pacientes[a].vacinas[b].fabricante, fabricantes[2]) == 0)
                num+=1.0;
            if (strcmp (pacientes[a].vacinas[b].fabricante, fabricantes[3]) == 0)
                num+=1.0;
            if (strcmp (pacientes[a].vacinas[b].fabricante, fabricantes[4]) == 0)
                num+=1.0;
        }
    }
    
    // Nesse bloco irá passar por todos fabricantes registrados
    for (k = 0; k < 5; k++){
        
        // Caso seja uma vacina válida
        if (strcmp (fabricantes[k], fab) == 0){
            
            // Nesse bloco irá passar por todos pacientes
            for (i = 0; i < LOG; i++){
                
                // Nesse bloco irá passar por todas vacinas possíveis por paciente   
                for (j = 0; j < LIMITE_VAC; j++){
                    
                    // Caso a vacina desejada seja encontrada na carteira do paciente será somado;
                    if (strcmp (pacientes[i].vacinas[j].fabricante, fabricantes[k]) == 0)
                        m += 1;
                }
            }
            
            // Será realizado o cálculo de porcentagem m (doses por fabricante) dividido por num (número total de vacinas aplicadas) e multiplicando por 100.
            porcentagem = (m / num) * 100;

            // Se o número de vacinas pelo fabricante é maior que 0;
            if (m > 0){
                printf(" - [%.2f%] %s: %02d aplicada(s).\n", porcentagem, fabricantes[k], m);
                break;
            }
        
        // Se a fabricante digitada não existe no banco;
        }else if (k == 4 && num > 0.0)
            printf(" - '%s' não é uma fabricante válida.\n", fab);
    }
}

 
/*-------------------------------
Função...: Contagem de doses por pessoas;
Parâmetro: doses – int contendo o valor de doses desejadas para consulta;

Descrição: Será contabilizado quantas doses desejadas foram tomadas por pessoa.
---------------------------------*/
void vac_doses( int doses )
{
    float porcentagem = 0;
    num = 0;
    // Esse bloco passará por todos pacientes do programa;
    for (i = 0; i < LOG; i++){
        
        // Caso seja contabilizado que o paciente tomou as doses estipuladas no parâmetro;
        if (pacientes[i].doses == doses)
            num += 1;
    }
    
    // Será realizado o cálculo de porcentagem num (valor de doses) dividido por LOG (número de pacientes existentes) e multiplicando por 100.
    porcentagem = (num / LOG) * 100;

    // Caso mais de uma pessoa tenha tomado a quantidade de doses estipuladas no parâmetro;
    if (num > 0)
        printf(" - 0%.0f pessoa(s) tomaram %d doses. [%.2f%]\n", num, doses, porcentagem);
}


/*-------------------------------
Função...: Lista completa do struct

Descrição: Será enviado a lista completa do struct com todos dados da carteira,
essa função é usada apenas para teste de comparação de dados.
---------------------------------
Padrão por pessoa:
    
    Nome
    Telefone
    Data de Nascimento
       
    Vacinas Tomadas [x]
       
    Fabricante
    Lote
    Data de aplicação: xx/xx/xxxx
    
                                    */
void lista_completa(void)
{
    // Esse bloco passará por todos os pacientes;
    for (i = 0; i < LOG; i++){
    
        printf("\n\nNome: %s" ,pacientes[i].nome);
        printf("\nTelefone: %s" ,pacientes[i].telefone);
        printf("\nData de Nascimento: %02d/%02d/%4d\n",pacientes[i].data_nascimento.dia,pacientes[i].data_nascimento.mes,pacientes[i].data_nascimento.ano);
        printf("\nVacinas tomadas [%d]\n", pacientes[i].doses);
    
        // Esse bloco passará por todas as vacinas possíveis por paciente;
        for (j = 0; j < LIMITE_VAC; j++){
        
            if (pacientes[i].vacinas[j].data_aplicacao.dia == 0)
                break; /* Para evitar loops, caso o paciente não possua certa vacina, será automaticamente 
            empurrado para fora do sistema. */
            
            printf("\nFabricante: %s", pacientes[i].vacinas[j].fabricante);
            printf("\nLote: %s", pacientes[i].vacinas[j].lote);
            printf("\nData de Aplicação: %02d/%02d/%4d\n", pacientes[i].vacinas[j].data_aplicacao.dia, pacientes[i].vacinas[j].data_aplicacao.mes, pacientes[i].vacinas[j].data_aplicacao.ano);
        }
        printf("\n*------------------------------------------*");
    }
}


int main()
{
    // Para evitar erros por conta de acentos, ç e demais;
    setlocale(LC_ALL, "Portuguese");
    
    // Avisará ao console que o programa foi iniciado com sucesso;
    printf("  Programa de Carteira de Vacinação (COVID) iniciado.\n");
    
    // Chamada da função que irá gerar os pacientes, LOG é o número inicial de pacientes estimados;
    gerador( LOG ); 
    
    /* Coloca o sistema em loop infinito, utiliza-se da variável LOG, 
    pois ele acompanha o número de pacientes e ele nunca ultrapassará LIMITE_PAC */
    for (a = 0; a < (LIMITE_PAC + 1); a = LOG){ 
        
        // Chama a função menu do programa;
        menu(); 
        
        // Irá esperar pela opção digitada no menu();
        switch ( opcao ){
        
            // Opção de saída do sistema;
            case 0: 
                printf("  Você saiu. Tchau, tchau!");
                LOG = ( LIMITE_PAC + 1 );
            break;
            
            // Opção de cadastro de paciente do sistema com validação incluso de nome, telefone e data;
            case 1: 
                cadastro_paciente();
            break;
            
            // Opção de cadastro de vacinas do paciente com validação incluso de fabricante e data;
            case 2:
                printf("\n*------------------------------------------*\n");
                printf("        Buscando paciente para cadastro        \n\n");
                printf("  Digite o nome completo: ");
                setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
                apagada e não influencie no gets */
                gets( BUSCA );
                cadastro_vacina( BUSCA );
            break;
            
            // Opção de buscar paciente por nome;
            case 3:
                printf("\n*------------------------------------------*\n");
                printf("            Busca por nome         \n\n");
                printf("  Digite o nome completo: ");
                setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
                apagada e não influencie no gets */
                gets( BUSCA );
                
                // O bloco será percorrido pelo número de pacientes para a buscar ser completa;
                for (i = 0; i < LOG; i++){
                    busca_str( pacientes[i].nome, BUSCA, LOG );
                }
            break;
            
            // Opção de buscar paciente por telefone;
            case 4:
                printf("\n*------------------------------------------*\n");
                printf("            Busca por telefone         \n\n");
                printf("  Digite o telefone completo: ");
                setbuf(stdin, NULL); /* O setbuf irá garantir que a memória do teclado seja 
                apagada e não influencie no gets */
                gets( BUSCA );
                
                // O bloco será percorrido pelo número de pacientes para a buscar ser completa;
                for (i = 0; i < LOG; i++){
                    busca_str( pacientes[i].telefone, BUSCA, LOG );
                }
            break;
            
            // Opção de listar todos pacientes por ordem alfabética do sistema com informações e qtd de vacinas tomadas;
            case 5: 
                printf("\n  Lista completa de pacientes por ordem alfabética: \n");
                
                // A função irá ordenar o struct alfabeticamente;
                ordena();
                
                // A função irá chamar a tabela com o tamanho estipulado (LOG = número da pacientes totais);
                tabela( LOG );
            break;
            
            // Opção de quantidade de vacinas aplicadas por fabricantes;
            case 6: 
                printf("\n*------------------------------------------*\n");
                printf("         Quantidade por fabricante         \n\n");
                
                // Cada função irá comparar os fabricantes pelas vacinas tomadas e exibirá os resultados na tela
                vac_fab( "pfizer" );
                vac_fab( "janssen" );
                vac_fab( "astrazeneca" );
                vac_fab( "moderna" );
                vac_fab( "sinopharm" );
                
                // Se nenhuma vacina aplicada
                if(m == 0)
                    printf(" - Nenhuma vacina foi aplicada ainda.\n");
                printf("\n*------------------------------------------*\n");
            break;
            
            // Opção de pacientes por doses tomadas;
            case 7: 
                printf("\n*------------------------------------------*\n");
                printf("          Doses por pessoas         \n\n");
                
                // Cada função irá comparar o número de doses tomadas por paciente e exibirá os resultados na tela
                vac_doses( 5 );
                vac_doses( 4 );
                vac_doses( 3 );
                vac_doses( 2 );
                vac_doses( 1 );
                
                // Se nenhuma dose tomada
                if (num == 0)
                    printf(" - Nenhuma dose foi tomada ainda.\n");
                printf("\n*------------------------------------------*\n");
            break;
            
            // Opção não listada no menu;
            default: 
                printf("  Opção inválida.\n");
            break;
        }
    }
    return 0;
}