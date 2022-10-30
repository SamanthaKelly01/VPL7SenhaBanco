#ifndef INTRUSO_H
#define INTRUSO_H

#include <string>
#include <vector>


class Intruso{
    /*Continue a implementação da classe Intruso*/
    std::vector<std::vector<char>> VetorIntIn;
    std::vector<std::vector<char>> VetorCharIn;
    std::vector<char> IntIn;
    std::vector<char> CharIn;
    std::vector<std::vector<char>> SenhasPossiveis;
    std::vector<char> SenhaDia;
    std::string _senha;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
        void identificaSenha(int posicao,std::vector<char> *aux);
        void comparaSenha();
};
#endif