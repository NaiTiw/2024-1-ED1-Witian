/Fa�a um programa que seja capaz de armazenar informa��es sobre livros de uma biblioteca.
Seu programa deve ter um TAD para representar o livro, contendo t�tulo, autor e n�mero de
p�ginas. Al�m disso, seu TAD deve ter duas opera��es: ler e imprimir.

Seu programa tamb�m deve ter um TAD para representar toda a biblioteca, contendo um vetor
de livros e a quantidade de livros j� armazenados nessa TAD. O m�ximo de livros na TAD
biblioteca ser� 10.

Seu TAD deve ter uma opera��o capaz de ler um novo livro, uma opera��o para
imprimir todos os livros da biblioteca e outra opera��o capaz de imprimir o livro que cont�m o
maior n�mero de p�ginas de toda a biblioteca.
*/

#include<stdio.h>
#include<math.h>


struct Livro {

    char titulo[100];
    char autor[100];
    int paginas;

    void ler() {
        printf("Digite o nome do livro: ");
        scanf("%[^\n]%*c", titulo);
        printf("Digite o nome o autor do livro: ");
        scanf("%[^\n]%*c", autor);
        printf("Quantas paginas tem o livro: ");
        scanf("%d", &paginas);
    }
     void imprimir() {
        printf("Titulo: %s\n", titulo);
        printf("Autor: %s\n", autor);
        printf("Quantidade de p�ginas: %d\n", paginas);
    }
};
struct Biblioteca {
    char locatario[100];
    Livro livros[10];
    int qtdlivros;

    void ler() {
        printf("Digite o cliente: ");
        scanf("%[^\n]%*c", cliente);
        printf("Digite a quantidade de itens: ");
        scanf("%d%*c", &qtdProdutos);
        for (int i = 0; i < qtdProdutos; i++) {
            produtos[i].ler();
        }
    }

    void imprimir() {
        printf("Cliente: %s\n", cliente);
        printf("Qtd de itens: %d\n", qtdProdutos);
        for (int i = 0; i < qtdProdutos; i++) {
            produtos[i].imprimir();
        }
        printf("Total da venda: R$ %.2lf\n", totalVenda());
    }

    double totalVenda() {
        double t = 0;
        for (int i = 0; i < qtdProdutos; i++) {
            t += produtos[i].preco;
        }
        return t;
    }
};

int main() {

    Livro l;
    l.ler();
    l.imprimir();

    return 0;
}
