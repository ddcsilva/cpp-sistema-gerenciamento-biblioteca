#pragma once
#include <string>

class Livro {
public:
    Livro(const std::string& titulo, const std::string& autor, int id);

    bool verificarDisponibilidade() const;
    void atualizarDisponibilidade(bool novoStatus);

    const std::string& obterTitulo() const;
    const std::string& obterAutor() const;
    int obterId() const;

private:
    std::string titulo;
    std::string autor;
    int id;
    bool disponivel;
};
