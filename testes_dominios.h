/**
 * @file testes_dominios.h
 * @brief Arquivo que contém os testes de unidade dos dominios.
 * 
 * @details
 * Um teste de unidade é feito para verificar se os dominios estão funcionando corretamente.
 * Um objeto da classe TUDominios é criado para cada teste a ser executado.
*/

#ifndef TESTES_DOMINIOS_H
#define TESTES_DOMINIOS_H

#include "dominios.h"
#include <stdexcept>

using namespace std;

// ---------------------------------------------------------------------------------
// Teste da Classe Codigo
// ---------------------------------------------------------------------------------

class TUCodigo{
    private:
        const string CODIGO_VALIDO = "ABC123"; // Código válido
        const string CODIGO_INVALIDO = "123ABC"; // Código inválido 

        Codigo *codigo; // Ponteiro para objeto da classe Codigo (domínio a ser testado)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenarioSucesso(); // Testa o cenário de sucesso
        void testarCenarioFalha(); // Testa o cenário de falha

    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

// ---------------------------------------------------------------------------------
// Teste da Classe Classe
// ---------------------------------------------------------------------------------

class TUClasse{
    private:
        const string CLASSE_VALIDA = "UNIDADE"; // Classe válida
        const string CLASSE_INVALIDA = "CABEÇA"; // Classe inválida 

        Classe *classe; // Ponteiro para objeto da classe Classe (domínio a ser testado)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenarioSucesso(); // Testa o cenário de sucesso
        void testarCenarioFalha(); // Testa o cenário de falha

    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

// ---------------------------------------------------------------------------------
// Teste da Classe Texto
// ---------------------------------------------------------------------------------

class TUTexto{
    private:
        const string TEXTO_VALIDO = "Texto valido."; // Texto válido
        const string TEXTO_INVALIDO = "Texto  invalido."; // Texto inválido (com dois espaços seguidos)

        Texto *texto; // Ponteiro para objeto da classe Texto (domínio a ser testado)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenarioSucesso(); // Testa o cenário de sucesso
        void testarCenarioFalha(); // Testa o cenário de falha

    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

// ---------------------------------------------------------------------------------
// Teste da Classe Data
// ---------------------------------------------------------------------------------

class TUData{
    private:
        const string DATA_VALIDA = "29/FEV/2020"; // Data válida
        const string DATA_INVALIDA = "30/FEV/2800"; // Data inválida 

        Data *data; // Ponteiro para objeto da classe Data (domínio a ser testado)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenarioSucesso(); // Testa o cenário de sucesso
        void testarCenarioFalha(); // Testa o cenário de falha

    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

// ---------------------------------------------------------------------------------
// Teste da Classe Matricula
// ---------------------------------------------------------------------------------

class TUMatricula{
    private:
        const string MATRICULA_VALIDA = "12345-7"; // Matrícula válida
        const string MATRICULA_INVALIDA = "259876-2"; // Matrícula inválida 

        Matricula *matricula; // Ponteiro para objeto da classe Matricula (domínio a ser testado)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenarioSucesso(); // Testa o cenário de sucesso
        void testarCenarioFalha(); // Testa o cenário de falha

    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

// ---------------------------------------------------------------------------------
// Teste da Classe Resultado
// ---------------------------------------------------------------------------------

class TUResultado{
    private:
        const string RESULTADO_VALIDO = "APROVADO"; // Resultado válido
        const string RESULTADO_INVALIDO = "DESISTENTE"; // Resultado inválido 

        Resultado *resultado; // Ponteiro para objeto da classe Resultado (domínio a ser testado)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenarioSucesso(); // Testa o cenário de sucesso
        void testarCenarioFalha(); // Testa o cenário de falha

    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

//---------------------------------------------------------------------------------
// Teste da Classe Senha
//---------------------------------------------------------------------------------

class TUSenha{
    private:
        const string SENHA_VALIDA = "Ab1@cD"; // Senha válida
        const string SENHA_INVALIDA = "Ab1@cDddd"; // Senha inválida 

        Senha *senha; // Ponteiro para objeto da classe Senha (domínio a ser testado)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenarioSucesso(); // Testa o cenário de sucesso
        void testarCenarioFalha(); // Testa o cenário de falha

    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

//---------------------------------------------------------------------------------
// Teste da Classe Telefone
//---------------------------------------------------------------------------------

class TUTelefone{
    private:
        const string TELEFONE_VALIDO = "+5512345678"; // Telefone válido
        const string TELEFONE_INVALIDO = "+12345678901234567890"; // Telefone inválido 

        Telefone *telefone; // Ponteiro para objeto da classe Telefone (domínio a ser testado)

        int estado; // Estado do teste (SUCESSO ou FALHA)

        void setUp(); // Inicializa o teste
        void tearDown(); // limpa as configurações do teste
        void testarCenarioSucesso(); // Testa o cenário de sucesso
        void testarCenarioFalha(); // Testa o cenário de falha

    public:
        static const int SUCESSO =  0; // Código de sucesso
        static const int FALHA   = -1; // Código de falha

        int run(); // Executa o teste
};

#endif
