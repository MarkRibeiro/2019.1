#if ! defined( Exbestat_ )
#define Exbestat_
/***************************************************************************
*
*  $MCD M�dulo de defini��o: EXES Exibir estatisticas de teste acumuladas
*
*  Arquivo gerado:              Exbestatnulo
*
*  Nome da base de software:    Arcabou�o para a automa��o de testes de programas redigidos em C
*  Arquivo da base de software: C:\AUTOTEST\PROJETOS\ARCABOUC.BSW
*
*  Projeto: INF 1301 / 1628 Automatiza��o dos testes de m�dulos C
*  Gestor:  LES/DI/PUC-Rio
*  Autores: avs
*
*  $HA Hist�rico de evolu��o:
*     Vers�o  Autor    Data     Observa��es
*     4       avs   01/fev/2006 criar linguagem script simb�lica
*     3       avs   08/dez/2004 uniformiza��o dos exemplos
*     2       avs   07/jul/2003 unifica��o de todos os m�dulos em um s� projeto
*     1       avs   16/abr/2003 in�cio desenvolvimento
*
*  $ED Descri��o do m�dulo
*     Exibe o conte�do do arquivo acumulador de estat�sticas de massas de teste.
*
*  $EIU Interface com o usu�rio pessoa
*     Deve ser fornecido um par�metro /a<nome>
*     no qual <nome> � o nome do arquivo de acumula��o de estat�sticas
*     gerado com apoio do arcabou�o.
*
***************************************************************************/
 
#if defined( Exbestat_OWN )
   #define Exbestat_EXT
#else
   #define Exbestat_EXT extern
#endif


/***********************************************************************
*
*  $FC Fun��o: EXES &Exibir conte�do do arquivo estatisticas
*
***********************************************************************/

   int main( int NumParm , char ** vtValorParm ) ;

#undef Exbestat_EXT

/********** Fim do m�dulo de defini��o: EXES Exibir estatisticas de teste acumuladas **********/

#else
#endif
