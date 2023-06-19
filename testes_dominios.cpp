/**
 * @file testes_dominios.cpp
 * @brief Arquivo que contém os testes de unidade dos dominios.
 * 
 * @details
 * Um teste de unidade é feito para verificar se os dominios estão funcionando corretamente.
 * Um objeto da classe TUDominios é criado para cada teste a ser executado.
*/
#include "testes_dominios.h"

#include <stdexcept>

// ---------------------------------------------------------------------------------
// Teste da Classe Codigo
// ---------------------------------------------------------------------------------

/**
 * @brief Teste da Classe Codigo.
 * 
 * @details
 * Testa os métodos setCodigo e getCodigo.
 * 
*/
void TUCodigo::setUp(){ // Inicializa o teste
    codigo = new Codigo(); // Instancia objeto da classe Codigo (domínio a ser testado)
    estado = SUCESSO; // Inicializa o estado do teste
}

void TUCodigo::tearDown(){ // Limpa as configurações do teste
    delete codigo; // Libera memória alocada para o objeto da classe Codigo (domínio testado)
}

/**
 * @brief Executa o teste.
 * 
 * @details
 * Executa o teste, chamando os métodos de teste do cenário de sucesso e de falha.
 * 
 * @return SUCESSO, se os dois cenários forem bem sucedidos.
 * @return FALHA, se algum dos cenários falhar.
 * 
*/
void TUCodigo::testarCenarioSucesso(){ // Testa o cenário de sucesso
    try{
        codigo->setCodigo(CODIGO_VALIDO); // Tenta setar o código válido
        if(codigo->getCodigo() != CODIGO_VALIDO){ // Verifica se o código foi setado corretamente
            estado = FALHA; // Se não foi, o estado do teste é FALHA
        }
    }
    catch(invalid_argument &exp){ // Se uma exceção for lançada, o estado do teste é FALHA
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){ // Testa o cenário de falha
    try{
        codigo->setCodigo(CODIGO_INVALIDO); // Tenta setar o código inválido
        estado = FALHA; // Se não lançou exceção, o estado do teste é FALHA
    }
    catch(invalid_argument &exp){ // Se lançou exceção, o estado do teste é SUCESSO
        return;
    }
}

int TUCodigo::run(){ // Executa o teste
    setUp(); // Inicializa o teste

    testarCenarioSucesso(); // Testa o cenário de sucesso
    testarCenarioFalha(); // Testa o cenário de falha

    tearDown(); // Limpa as configurações do teste

    return estado; // Retorna o estado do teste
}

// ---------------------------------------------------------------------------------
// Teste da Classe Classe
// ---------------------------------------------------------------------------------

/**
 * @brief Teste da Classe Classe.
 * 
 * @details
 * Testa os métodos setClasse e getClasse.
*/
void TUClasse::setUp(){ // Inicializa o teste

    classe = new Classe(); // Instancia objeto da classe Classe (domínio a ser testado)
    estado = SUCESSO; // Inicializa o estado do teste
}

void TUClasse::tearDown(){ // Limpa as configurações do teste

    delete classe; // Libera memória alocada para o objeto da classe Classe (domínio testado)
}

/**
 * @brief Executa o teste.
 * 
 * @details
 * Executa o teste, chamando os métodos de teste do cenário de sucesso e de falha.
 * 
 * @return SUCESSO, se os dois cenários forem bem sucedidos.
 * @return FALHA, se algum dos cenários falhar.
*/

void TUClasse::testarCenarioSucesso(){ // Testa o cenário de sucesso

    try{
        classe->setClasse(CLASSE_VALIDA); // Tenta setar a classe válida
        if(classe->getClasse() != CLASSE_VALIDA){ // Verifica se a classe foi setada corretamente
            estado = FALHA; // Se não foi, o estado do teste é FALHA
        }
    }
    catch(invalid_argument &exp){ // Se uma exceção for lançada, o estado do teste é FALHA
        estado = FALHA;
    }
}

void TUClasse::testarCenarioFalha(){ // Testa o cenário de falha

    try{
        classe->setClasse(CLASSE_INVALIDA); // Tenta setar a classe inválida
        estado = FALHA; // Se não lançou exceção, o estado do teste é FALHA
    }
    catch(invalid_argument &exp){ // Se lançou exceção, o estado do teste é SUCESSO
        return;
    }
}

int TUClasse::run(){ // Executa o teste

    setUp(); // Inicializa o teste

    testarCenarioSucesso(); // Testa o cenário de sucesso
    testarCenarioFalha(); // Testa o cenário de falha

    tearDown(); // Limpa as configurações do teste

    return estado; // Retorna o estado do teste
}

// ---------------------------------------------------------------------------------
// Teste da Classe Texto
// ---------------------------------------------------------------------------------

/**
 * @brief Teste da Classe Texto.
 * 
 * @details
 * Testa os métodos setTexto e getTexto.
*/

void TUTexto::setUp(){ // Inicializa o teste

    texto = new Texto(); // Instancia objeto da classe Texto (domínio a ser testado)
    estado = SUCESSO; // Inicializa o estado do teste
}

void TUTexto::tearDown(){ // Limpa as configurações do teste

    delete texto; // Libera memória alocada para o objeto da classe Texto (domínio testado)
}

/**
 * @brief Executa o teste.
 * 
 * @details
 * Executa o teste, chamando os métodos de teste do cenário de sucesso e de falha.
 * 
 * @return SUCESSO, se os dois cenários forem bem sucedidos.
 * @return FALHA, se algum dos cenários falhar.
*/

void TUTexto::testarCenarioSucesso(){ // Testa o cenário de sucesso

    try{
        texto->setTexto(TEXTO_VALIDO); // Tenta setar o texto válido
        if(texto->getTexto() != TEXTO_VALIDO){ // Verifica se o texto foi setado corretamente
            estado = FALHA; // Se não foi, o estado do teste é FALHA
        }
    }
    catch(invalid_argument &exp){ // Se uma exceção for lançada, o estado do teste é FALHA
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){ // Testa o cenário de falha

    try{
        texto->setTexto(TEXTO_INVALIDO); // Tenta setar o texto inválido
        estado = FALHA; // Se não lançou exceção, o estado do teste é FALHA
    }
    catch(invalid_argument &exp){ // Se lançou exceção, o estado do teste é SUCESSO
        return;
    }
}

/**
 * @brief Executa o teste.
 * 
 * @details
 * Executa o teste, chamando os métodos de teste do cenário de sucesso e de falha.
 * 
 * @return SUCESSO, se os dois cenários forem bem sucedidos.
 * @return FALHA, se algum dos cenários falhar.
 * 
*/

int TUTexto::run(){ // Executa o teste

    setUp(); // Inicializa o teste

    testarCenarioSucesso(); // Testa o cenário de sucesso
    testarCenarioFalha(); // Testa o cenário de falha

    tearDown(); // Limpa as configurações do teste

    return estado; // Retorna o estado do teste
}

// ---------------------------------------------------------------------------------
// Teste da Classe Data
// ---------------------------------------------------------------------------------

/**
 * @brief Teste da Classe Data.
 * 
 * @details
 * Testa os métodos setData e getData.
*/
void TUData::setUp(){ // Inicializa o teste

    data = new Data(); // Instancia objeto da classe Data (domínio a ser testado)
    estado = SUCESSO; // Inicializa o estado do teste
}

void TUData::tearDown(){ // Limpa as configurações do teste

    delete data; // Libera memória alocada para o objeto da classe Data (domínio testado)
}

/**
 * @brief Executa o teste.
 * 
 * @details
 * Executa o teste, chamando os métodos de teste do cenário de sucesso e de falha.
 * 
 * @return SUCESSO, se os dois cenários forem bem sucedidos.
 * @return FALHA, se algum dos cenários falhar.
*/

void TUData::testarCenarioSucesso(){ // Testa o cenário de sucesso

    try{
        data->setData(DATA_VALIDA); // Tenta setar a data válida
        if(data->getData() != DATA_VALIDA){ // Verifica se a data foi setada corretamente
            estado = FALHA; // Se não foi, o estado do teste é FALHA
        }
    }
    catch(invalid_argument &exp){ // Se uma exceção for lançada, o estado do teste é FALHA
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){ // Testa o cenário de falha

    try{
        data->setData(DATA_INVALIDA); // Tenta setar a data inválida
        estado = FALHA; // Se não lançou exceção, o estado do teste é FALHA
    }
    catch(invalid_argument &exp){ // Se lançou exceção, o estado do teste é SUCESSO
        return;
    }
}

int TUData::run(){ // Executa o teste

    setUp(); // Inicializa o teste

    testarCenarioSucesso(); // Testa o cenário de sucesso
    testarCenarioFalha(); // Testa o cenário de falha

    tearDown(); // Limpa as configurações do teste

    return estado; // Retorna o estado do teste
}

// ---------------------------------------------------------------------------------
// Teste da Classe Matricula
// ---------------------------------------------------------------------------------

/**
 * @brief Teste da Classe Matricula.
 * 
 * @details
 * Testa os métodos setMatricula e getMatricula.
*/

void TUMatricula::setUp(){ // Inicializa o teste

    matricula = new Matricula(); // Instancia objeto da classe Matricula (domínio a ser testado)
    estado = SUCESSO; // Inicializa o estado do teste
}

void TUMatricula::tearDown(){ // Limpa as configurações do teste

    delete matricula; // Libera memória alocada para o objeto da classe Matricula (domínio testado)
}

/**
 * @brief Executa o teste.
 * 
 * @details
 * Executa o teste, chamando os métodos de teste do cenário de sucesso e de falha.
 * 
 * @return SUCESSO, se os dois cenários forem bem sucedidos.
 * @return FALHA, se algum dos cenários falhar.
*/

void TUMatricula::testarCenarioSucesso(){ // Testa o cenário de sucesso

    try{
        matricula->setMatricula(MATRICULA_VALIDA); // Tenta setar a matrícula válida
        if(matricula->getMatricula() != MATRICULA_VALIDA){ // Verifica se a matrícula foi setada corretamente
            estado = FALHA; // Se não foi, o estado do teste é FALHA
        }
    }
    catch(invalid_argument &exp){ // Se uma exceção for lançada, o estado do teste é FALHA
        estado = FALHA;
    }
}

void TUMatricula::testarCenarioFalha(){ // Testa o cenário de falha

    try{
        matricula->setMatricula(MATRICULA_INVALIDA); // Tenta setar a matrícula inválida
        estado = FALHA; // Se não lançou exceção, o estado do teste é FALHA
    }
    catch(invalid_argument &exp){ // Se lançou exceção, o estado do teste é SUCESSO
        return;
    }
}

int TUMatricula::run(){ // Executa o teste

    setUp(); // Inicializa o teste

    testarCenarioSucesso(); // Testa o cenário de sucesso
    testarCenarioFalha(); // Testa o cenário de falha

    tearDown(); // Limpa as configurações do teste

    return estado; // Retorna o estado do teste
}

// ---------------------------------------------------------------------------------
// Teste da Classe Resultado
// ---------------------------------------------------------------------------------

/**
 * @brief Teste da Classe Resultado.
 * 
 * @details
 * Testa os métodos setResultado e getResultado.
*/

void TUResultado::setUp(){ // Inicializa o teste

    resultado = new Resultado(); // Instancia objeto da classe Resultado (domínio a ser testado)
    estado = SUCESSO; // Inicializa o estado do teste
}

void TUResultado::tearDown(){ // Limpa as configurações do teste

    delete resultado; // Libera memória alocada para o objeto da classe Resultado (domínio testado)
}

/**
 * @brief Executa o teste.
 * 
 * @details
 * Executa o teste, chamando os métodos de teste do cenário de sucesso e de falha.
 * 
 * @return SUCESSO, se os dois cenários forem bem sucedidos.
 * @return FALHA, se algum dos cenários falhar.
*/

void TUResultado::testarCenarioSucesso(){ // Testa o cenário de sucesso

    try{
        resultado->setResultado(RESULTADO_VALIDO); // Tenta setar o resultado válido
        if(resultado->getResultado() != RESULTADO_VALIDO){ // Verifica se o resultado foi setado corretamente
            estado = FALHA; // Se não foi, o estado do teste é FALHA
        }
    }
    catch(invalid_argument &exp){ // Se uma exceção for lançada, o estado do teste é FALHA
        estado = FALHA;
    }
}

void TUResultado::testarCenarioFalha(){ // Testa o cenário de falha

    try{
        resultado->setResultado(RESULTADO_INVALIDO); // Tenta setar o resultado inválido
        estado = FALHA; // Se não lançou exceção, o estado do teste é FALHA
    }
    catch(invalid_argument &exp){ // Se lançou exceção, o estado do teste é SUCESSO
        return;
    }
}

int TUResultado::run(){ // Executa o teste

    setUp(); // Inicializa o teste

    testarCenarioSucesso(); // Testa o cenário de sucesso
    testarCenarioFalha(); // Testa o cenário de falha

    tearDown(); // Limpa as configurações do teste

    return estado; // Retorna o estado do teste
}

// ---------------------------------------------------------------------------------
// Teste da Classe Senha
// ---------------------------------------------------------------------------------

/**
 * @brief Teste da Classe Senha.
 * 
 * @details
 * Testa os métodos setSenha e getSenha.
*/

void TUSenha::setUp(){ // Inicializa o teste

    senha = new Senha(); // Instancia objeto da classe Senha (domínio a ser testado)
    estado = SUCESSO; // Inicializa o estado do teste
}

void TUSenha::tearDown(){ // Limpa as configurações do teste

    delete senha; // Libera memória alocada para o objeto da classe Senha (domínio testado)
}

/**
 * @brief Executa o teste.
 * 
 * @details
 * Executa o teste, chamando os métodos de teste do cenário de sucesso e de falha.
 * 
 * @return SUCESSO, se os dois cenários forem bem sucedidos.
 * @return FALHA, se algum dos cenários falhar.
*/

void TUSenha::testarCenarioSucesso(){ // Testa o cenário de sucesso

    try{
        senha->setSenha(SENHA_VALIDA); // Tenta setar a senha válida
        if(senha->getSenha() != SENHA_VALIDA){ // Verifica se a senha foi setada corretamente
            estado = FALHA; // Se não foi, o estado do teste é FALHA
        }
    }
    catch(invalid_argument &exp){ // Se uma exceção for lançada, o estado do teste é FALHA
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){ // Testa o cenário de falha

    try{
        senha->setSenha(SENHA_INVALIDA); // Tenta setar a senha inválida
        estado = FALHA; // Se não lançou exceção, o estado do teste é FALHA
    }
    catch(invalid_argument &exp){ // Se lançou exceção, o estado do teste é SUCESSO
        return;
    }
}

int TUSenha::run(){ // Executa o teste

    setUp(); // Inicializa o teste

    testarCenarioSucesso(); // Testa o cenário de sucesso
    testarCenarioFalha(); // Testa o cenário de falha

    tearDown(); // Limpa as configurações do teste

    return estado; // Retorna o estado do teste
}

// ---------------------------------------------------------------------------------
// Teste da Classe Telefone
// ---------------------------------------------------------------------------------

/**
 * @brief Teste da Classe Telefone.
 * 
 * @details
 * Testa os métodos setTelefone e getTelefone.
*/

void TUTelefone::setUp(){ // Inicializa o teste

    telefone = new Telefone(); // Instancia objeto da classe Telefone (domínio a ser testado)
    estado = SUCESSO; // Inicializa o estado do teste
}
void TUTelefone::tearDown(){ // Limpa as configurações do teste

    delete telefone; // Libera memória alocada para o objeto da classe Telefone (domínio testado)
}

/**
 * @brief Executa o teste.
 * 
 * @details
 * Executa o teste, chamando os métodos de teste do cenário de sucesso e de falha.
 * 
 * @return SUCESSO, se os dois cenários forem bem sucedidos.
 * @return FALHA, se algum dos cenários falhar.
*/

void TUTelefone::testarCenarioSucesso(){ // Testa o cenário de sucesso

    try{
        telefone->setTelefone(TELEFONE_VALIDO); // Tenta setar o telefone válido
        if(telefone->getTelefone() != TELEFONE_VALIDO){ // Verifica se o telefone foi setado corretamente
            estado = FALHA; // Se não foi, o estado do teste é FALHA
        }
    }
    catch(invalid_argument &exp){ // Se uma exceção for lançada, o estado do teste é FALHA
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){ // Testa o cenário de falha

    try{
        telefone->setTelefone(TELEFONE_INVALIDO); // Tenta setar o telefone inválido
        estado = FALHA; // Se não lançou exceção, o estado do teste é FALHA
    }
    catch(invalid_argument &exp){ // Se lançou exceção, o estado do teste é SUCESSO
        return;
    }
}

int TUTelefone::run(){ // Executa o teste

    setUp(); // Inicializa o teste

    testarCenarioSucesso(); // Testa o cenário de sucesso
    testarCenarioFalha(); // Testa o cenário de falha

    tearDown(); // Limpa as configurações do teste

    return estado; // Retorna o estado do teste
}
