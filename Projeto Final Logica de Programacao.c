#include<stdio.h>
#include<string.h>

//  Declação da Struct cliente/RH	
struct cliente{
char nome[50];
char email[50];
char endereco[50];
char telefone[50];
char cpf[50];
} rh;

//  Declação da função Sub
float subtotal1 (float qtd, float valor){
	float sub;
	sub=qtd*valor;
	return sub;
}
//  Função principal do código
main()
{
//  Declação das Variáveis
	char opcao='n';
	char formaPagamento [10];
	char mais='s';
	int qtd, cod; 
	int  opcao1= 1;
	float vt, total=0, subtotal=0;
	struct cliente rh;
	float valor=0;
	float sub=0;
				   
	do{	
	printf("\n Trip Turismo Ltda. Pacotes Especiais\n\n");
	printf("    A sua melhor opcao na hora de Viajar! \n");

    printf("\n==== CONHECA NOSSOS PACOTES DE VIAGEM EM PROMOCAO ====");
    printf("\n\n Destinos       COD    Preco\n\n");
    printf(" ALEMANHA       100    2.369\n");
    printf(" LAS VEGAS      101    5.699\n");
    printf(" ESPANHA        102    4.579\n");
    printf(" MALDIVAS       103    6.739\n");
   
	do{
	printf("\n # Digite o Codigo do destino escolhido #");
	printf("\n   Codigo = ");
    scanf("%d",&cod);
 	printf("\n   Quantidade = ");
    scanf("%d",&qtd);

//  Ultilizamos o Switch Case para gerar uma tabela de opções.	
	  	switch (cod){  			  				  
	       case 100:
	       	    valor=2.369;
	       	    sub=subtotal1(qtd, valor);  //Referêcia a função declada no início.
	            printf ("\n # Pacote escolhido # \n   ALEMANHA x %d = R$:%.3f\n", qtd, sub);
	       break;
	       case 101:
	       	    valor=5.699;
	            sub=subtotal1(qtd, valor);
	            printf ("\n # Pacote escolhido # \n   LAS VEGAS x %d = R$:%.3f\n", qtd, sub);
	       break;
	       case 102:
	          	valor=4.579;
	            sub=subtotal1(qtd, valor);
	            printf ("\n # Pacote escolhido # \n   ESPANHA x %d = R$:%.3f\n", qtd, sub);
	       break;
	       case 103:
	          	valor=6.739;
	            sub=subtotal1(qtd, valor);
	            printf ("\n # Pacote escolhido # \n   MALDIVAS x %d = R$:%.3f\n", qtd, sub);
	       break;
	       default:
	       	    printf ("\n      # OPCAO INVALIDA! #\n");
	            printf ("\n   Este pacote nao consta no menu\n");
	            qtd=0;
		}
		        
				total=total+sub;
			
		   printf("\n   Subtotal da compra = R$:%.3f\n", total);
		   printf("\n   Deseja comprar outro pacote?\n   Digite:\n   S = sim \n   N = nao \n   Resp: ");
		   scanf("%s", &mais);
		   	
	} while (mais == 's'|| mais == 'S');{
			 
	printf("\n   Total da compra = R$:%.3f\n", total);
	 
	printf ("\n   Ja possui cadastro?");
	printf("\n   Digite:\n   s = sim \n   n = nao \n   Resp: ");
	scanf("%s", &opcao);
	fflush(stdin);
	
	printf("\n");
	
	if(opcao == 'n'|| opcao == 'N'){
				
		printf("==== REALIZAR NOVO CADASTRO ====\n");
		printf("   Informe seu nome:___ ");
		fgets(rh.nome, 50, stdin);
		fflush(stdin);
		printf("   Informe seu Email:__ ");
		fgets(rh.email, 50, stdin);
		fflush(stdin);
		printf("   Informe seu endereco:_ ");
		fgets(rh.endereco, 50, stdin);
		fflush(stdin);
		printf("   Informe seu telefone:_ ");
		fgets(rh.telefone, 50, stdin);
		fflush(stdin);
		printf("   Informe seu CPF:____ ");
		fgets(rh.cpf, 50, stdin);
		fflush(stdin);
		
	    printf("\n");
	    
	    printf("   PARABENS! CADASTRO REALIZADO COM SUCESSO");
	    
	    printf("\n\n");
	    
	    printf("   Informe a forma de pagamento: ");
	    printf("\n   1 = Dinheiro \n   2 = Cartao \n   3 = Boleto  \n   4 = Pix \n Resp: ");
	    scanf("%d", &opcao1);
	    fflush(stdin);
	 
	    printf("\n");
	 
	if(opcao1 == 1 || opcao1 == 2 || opcao1 == 3 || opcao1 == 4){

// A função string copy serve para copiar o valor da string na segunda posição do argumento para uma variável string na primeira posição.		
	  	if (opcao1 == 1){strcpy (formaPagamento, "Dinheiro");}
	  	if (opcao1 == 2){strcpy (formaPagamento, "Cartao");}
	  	if (opcao1 == 3){strcpy (formaPagamento, "Boleto");}
	  	if (opcao1 == 4){strcpy (formaPagamento, "Pix");}
	  	
	        printf("   PARABENS! PAGAMENTO ACEITO");
	        
	        printf("\n");
	     
		    printf("\n==== DADOS DE SUA COMPRA ====\n\n");
		    printf("   Nome:_______ %s", rh.nome);
		    printf("   Email:______ %s", rh.email);
		    printf("   Endereco:_____ %s", rh.endereco);
		    printf("   Telefone:_____ %s", rh.telefone);
		    printf("   CPF:______ %s", rh.cpf);
		    printf("\n   Total da compra = R$:%.3f\n", total);
		    printf("   Forma de pagamento:_ %s\n", formaPagamento);
		    
		    printf("\n");
		    
		    printf("  # OBRIGADO PELA PREFERENCIA #\n");
		    printf(" Trip Turismo lhe deseja uma boa viagem!  \n");
		   
	    }else{
	         printf("PAGAMENTO RECUSADO!");
	        }
	}else{	 
	    printf("   Ecolha a forma de pagamento desejada: ");
	    printf("\n   1 = Dinheiro \n   2 = Cartao \n   3 = Boleto \n   4 = Pix \n  Resp: ");
	    scanf("%d", &opcao1);
	    fflush(stdin);
	 
	    printf("\n");
	 
	if(opcao1 == 1 || opcao1 == 2 || opcao1 == 3 || opcao1 == 4 ){
		if (opcao1 == 1){strcpy (formaPagamento, "Dinheiro");}
	  	if (opcao1 == 2){strcpy (formaPagamento, "Cartao");}
	  	if (opcao1 == 3){strcpy (formaPagamento, "Boleto");}
	  	if (opcao1 == 4){strcpy (formaPagamento, "Pix");}
						 
	    printf("     PARABENS! PAGAMENTO ACEITO");
	    
	    printf("\n");
	    
	    printf("\n==== DADOS DE SUA COMPRA ====\n\n");
		printf("   Nome:_______ Adriana Silva Pereira\n");
		printf("   Email:______ adrianas@gmail.com\n");
		printf("   Endereco:_____ Avenida Castelo Branco N-150, Interlagos\n");
		printf("   Telefone:_____ (71)9 9698-3290\n");
		printf("   CPF:______ 918.825.128.00\n");
		printf("\n   Total da compra = R$:%.3f\n", total);
	    printf("   Forma de pagamento = %s\n", formaPagamento);
	
		printf("\n");
		
		printf(" # OBRIGADO PELA PREFERENCIA #\n");
		printf("Trip Turismo lhe deseja uma boa viagem!\n");
	    }else{
	    printf("   PAGAMENTO RECUSADO!");
	    
	    printf("\n");
    }   	
   } 
  }
        printf("\n   Deseja efetuar uma nova compra?\n   Digite:\n   S = sim \n   N = nao \n   Resp: ");
		scanf("%s", &mais);
		subtotal=0;
		total=0;
		sub=0;
		qtd=0;
		
		printf("\n");
		system("cls");
		printf("\n\n");
		
 }while (mais == 's'|| mais == 'S');{
 	    printf("==== FIM DO PROGRAMA ====");
}
}
