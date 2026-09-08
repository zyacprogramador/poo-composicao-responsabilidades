#include "alarme_termico.hpp"

void AlarmeTermico::avaliar(double temperatura) {
    if (temperatura > 45) {
        ligado_ = true;
    } else if (temperatura < 40) {
        ligado_ = false;
    }
}

bool AlarmeTermico::estaLigado() const { return ligado_; }
