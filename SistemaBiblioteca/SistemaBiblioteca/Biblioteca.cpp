#include "Biblioteca.h"

void Biblioteca::adicionarLivro(const Livro& livro) {
    acervo.push_back(livro);
}

bool Biblioteca::emprestarLivro(int id) {
    Livro* livro = buscarLivro(id);
    if (livro && livro->verificarDisponibilidade()) {
        livro->atualizarDisponibilidade(false);
        return true;
    }
    return false;
}

bool Biblioteca::devolverLivro(int id) {
    Livro* livro = buscarLivro(id);
    if (livro && !livro->verificarDisponibilidade()) {
        livro->atualizarDisponibilidade(true);
        return true;
    }
    return false;
}

Livro* Biblioteca::buscarLivro(int id) {
    for (Livro& livro : acervo) {
        if (livro.obterId() == id) {
            return &livro;
        }
    }
    return nullptr;
}
