#include <iostream>
#include <vector>
#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include "Van.hpp"

int main() {
    // Criando objetos de Caminhao e Van
    Caminhao caminhao1("Mercedes", "Actros", 20, 4);
    Caminhao caminhao2("Volvo", "FH", 18, 6);
    Van van1("Ford", "Transit", 3, 12);
    Van van2("Renault", "Master", 2, 15);

    // Colocando os veículos em um vetor de ponteiros para Veiculo
    std::vector<Veiculo*> veiculos;
    veiculos.push_back(&caminhao1);
    veiculos.push_back(&caminhao2);
    veiculos.push_back(&van1);
    veiculos.push_back(&van2);

    // Exibindo os dados de cada veículo
    for (const auto& veiculo : veiculos) {
        veiculo->exibirDados();
        std::cout << "----------------------\n";
    }

    return 0;
}
