#include "Livro.h"

Livro::Livro(const std::string& titulo, const std::string& autor, int id)
    : titulo(titulo), autor(autor), id(id), disponivel(true) {}

bool Livro::verificarDisponibilidade() const {
    return disponivel;
}

void Livro::atualizarDisponibilidade(bool novoStatus) {
    disponivel = novoStatus;
}

const std::string& Livro::obterTitulo() const {
    return titulo;
}

const std::string& Livro::obterAutor() const {
    return autor;
}

int Livro::obterId() const {
    return id;
}
