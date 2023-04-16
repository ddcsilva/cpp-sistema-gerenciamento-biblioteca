#pragma once
#include <vector>
#include "Livro.h"

class Biblioteca {
public:
    void adicionarLivro(const Livro& livro);
    bool emprestarLivro(int id);
    bool devolverLivro(int id);
    Livro* buscarLivro(int id);

private:
    std::vector<Livro> acervo;
};
