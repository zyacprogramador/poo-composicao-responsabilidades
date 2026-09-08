# Diagrama da estação meteorológica

Complete as relações, multiplicidades, atributos e operações que faltam. O diagrama final deve corresponder ao código entregue.

```mermaid
classDiagram
    class SensorTemperatura {
        -valor_: double
        +atualizar(valor) bool
        +valor() double
    }

    class AlarmeTermico {
        -ligado_: bool
        +avaliar(temperatura) void
        +estaLigado() bool
    }

    class EstacaoMeteorologica {
        -sensor_: SensorTemperatura
        -alarme_: AlarmeTermico
        +registrarTemperatura(temperatura) bool
        +temperatura() double
        +alarmeLigado() bool
    }

    EstacaoMeteorologica *-- "1" SensorTemperatura
    EstacaoMeteorologica *-- "1" AlarmeTermico
