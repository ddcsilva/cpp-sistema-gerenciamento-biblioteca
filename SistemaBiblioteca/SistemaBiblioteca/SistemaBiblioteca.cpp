#include <iostream>
#include "Livro.h"
#include "Biblioteca.h"

int main() {
    Livro livro1("O Senhor dos Anéis", "J.R.R. Tolkien", 1);
    Livro livro2("1984", "George Orwell", 2);
    Livro livro3("Orgulho e Preconceito", "Jane Austen", 3);

    Biblioteca biblioteca;
    biblioteca.adicionarLivro(livro1);
    biblioteca.adicionarLivro(livro2);
    biblioteca.adicionarLivro(livro3);

    if (biblioteca.emprestarLivro(1)) {
        std::cout << "Livro emprestado com sucesso!" << std::endl;
    }
    else {
        std::cout << "Não foi possível emprestar o livro." << std::endl;
    }

    if (biblioteca.devolverLivro(1)) {
        std::cout << "Livro devolvido com sucesso!" << std::endl;
    }
    else {
        std::cout << "Não foi possível devolver o livro." << std::endl;
    }

    Livro* livroEncontrado = biblioteca.buscarLivro(2);
    if (livroEncontrado) {
        std::cout << "Livro encontrado: " << livroEncontrado->obterTitulo() << std::endl;
    }
    else {
        std::cout << "Livro não encontrado." << std::endl;
    }

    return 0;
}

