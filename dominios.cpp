// Purpose: This file contains the implementation of the class dominios.
/**
 * @file dominios.cpp
 *
 * @brief
 * Implementação dos métodos da classe dominios.
 *
 * @details
 * O arquivo dominios.cpp contém a implementação dos métodos das classes Codigo, Classe, Nome, Telefone, Endereco, Data e Email.
*/
#include "dominios.h"
#include <iostream>
#include <string>
#include <vector>

/**
 * @brief Valida o texto.
 *
 * @details
 * Valida o texto, verificando se ele possui apenas letras, espaços e pontos.
 *
 * @param Texto a ser validado.
*/
#include <stdexcept>
#include <regex>

using namespace std;

// ---------------------------------------------------------------------------------
// Validar da Classe Codigo
// ---------------------------------------------------------------------------------

void Codigo::validar(string codigo){
    regex formato("[A-Za-z]{3}[0-9]{3}$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(codigo, formato)){
        throw invalid_argument("Codigo invalido.");
    }
}

void Codigo::setCodigo(string codigo){
    validar(codigo);

    /**
     * Se o código for válido, seta o código.
     *
    */
    this->codigo = codigo;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Classe
// ---------------------------------------------------------------------------------

void Classe::validar(string classe){
    regex formato("^UNIDADE|INTEGRAÇÃO|FUMACA|SISTEMA|REGRESSAO|ACEITACAO$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(classe, formato)){
        throw invalid_argument("Classe invalida.");
    }
}

void Classe::setClasse(string classe){
    validar(classe);

    /**
     * Se a classe for válida, seta a classe.
     *
    */
    this->classe = classe;
}

// ---------------------------------------------------------------------------------
// Validar da Classe texto
// ---------------------------------------------------------------------------------

void Texto::validar(string texto){
    regex formato("^([A-Za-z0-9\\(\\.\\,\\;\\:\\!\?\\-)\\@\\#\\$\\%\\&] ?)+$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(texto, formato) || texto.length() < 10 || texto.length() > 20){
        throw invalid_argument("Texto invalido.");
    }
}

void Texto::setTexto(string texto){
    validar(texto);

    /**
     * Se o texto for válido, seta o texto.
     *
    */
    this->texto = texto;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Data
// ---------------------------------------------------------------------------------

void Data::validar(string data){
    // Formato DD/MES/ANO
// DD - 1 a 31
// MES - JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ
// ANO - 2000 a 2999
// Deve ser levado em consideração se o ano é bissexto ou não é bissexto
    string DD29 = "(0[1-9]|1[0-9]|2[0-9])";
    string DD30 = "(0[1-9]|1[0-9]|2[0-9]|30)";
    string DD31 = "(0[1-9]|1[0-9]|2[0-9]|3[0-1])";

    string MES29 = "(FEV)";
    string MES30 = "(ABR|JUN|SET|NOV)";
    string MES31 = "(JAN|MAR|MAI|JUL|AGO|OUT|DEZ)";

    string ANO = "(2[0-9][0-9][0-9])";

    string data29 = DD29 + "\\/" + MES29 + "\\/" + ANO;
    string data30 = DD30 + "\\/" + MES30 + "\\/" + ANO;
    string data31 = DD31 + "\\/" + MES31 + "\\/" + ANO;

    regex reData( data29 + "|" + data30 + "|" + data31 );

    // Verifica se a data está no formato correto
    if( !regex_match(data, reData) ){
        throw invalid_argument("Data inválida");
    }

    // Verifica se o ano é bissexto
    int ano = stoi(data.substr(7, 4));

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0 ){
        // Ano bissexto
        if( data.substr(3, 3) == "FEV" ){
        // Verifica se o dia é maior que 29
        if( stoi(data.substr(0, 2)) > 29 ){
            throw invalid_argument("Data inválida");
        }
        }

    } else {
        // Ano não bissexto
        if( data.substr(3, 3) == "FEV" ){
        // Verifica se o dia é maior que 28
        if( stoi(data.substr(0, 2)) > 28 ){
            throw invalid_argument("Data inválida");
        }
        }
    }

    // Verifica se o dia é maior que 30
    vector<string> meses30 = {"ABR", "JUN", "SET", "NOV"};
    for( string mes : meses30 ){
        if( data.substr(3, 3) == mes ){
        if( stoi(data.substr(0, 2)) > 30 ){
            throw invalid_argument("Data inválida");
        }
        }
    }

    // Verifica se o dia é maior que 31
    vector<string> meses31 = {"JAN", "MAR", "MAI", "JUL", "AGO", "OUT", "DEZ"};
    for( string mes : meses31 ){
        if( data.substr(3, 3) == mes ){
        if( stoi(data.substr(0, 2)) > 31 ){
            throw invalid_argument("Data inválida");
        }
        }
    }
}

void Data::setData(string data){
    validar(data);

    /**
     * Se a data for válida, seta a data.
     *
    */
    this->data = data;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Matricula
// ---------------------------------------------------------------------------------

void Matricula::validar(string matricula){
    regex formato("^\\d{5}-\\d$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(matricula, formato)){
        throw invalid_argument("Matricula invalida.");
    }
}

void Matricula::setMatricula(string matricula){
    validar(matricula);

    /**
     * Se a matricula for válida, seta a matricula.
     *
    */
    this->matricula = matricula;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Resultado
// ---------------------------------------------------------------------------------

void Resultado::validar(string resultado){
    regex formato("^(APROVADO|REPROVADO)$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(resultado, formato)){
        throw invalid_argument("Resultado invalido.");
    }
}

void Resultado::setResultado(string resultado){
    validar(resultado);

    /**
     * Se o resultado for válido, seta o resultado.
     *
    */
    this->resultado = resultado;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Senha
// ---------------------------------------------------------------------------------

void Senha::validar(string senha){
    regex formato("^(?!.*(.).*\1)[A-Za-z0-9@$%&]{6}$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(senha, formato)){
        throw invalid_argument("Senha invalida.");
    }
}

void Senha::setSenha(string senha){
    validar(senha);

    /**
     * Se a senha for válida, seta a senha.
     *
    */
    this->senha = senha;
}

// ---------------------------------------------------------------------------------
// Validar da Classe Telefone
// ---------------------------------------------------------------------------------

void Telefone::validar(string telefone){
    regex formato("^\\+\\d{7,15}$");

    /**
     * Se o match não for correto, lança uma exceção.
    */
    if(!regex_match(telefone, formato)){
        throw invalid_argument("Telefone invalido.");
    }
}
void Telefone::setTelefone(string telefone){
    validar(telefone);

    /**
     * Se o telefone for válido, seta o telefone.
     *
    */
    this->telefone = telefone;
}
