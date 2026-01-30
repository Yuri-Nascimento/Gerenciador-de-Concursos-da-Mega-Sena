# Gerenciador-de-Concursos-da-Mega-Sena
Projeto 2 da Disciplina de Estrutura de Dados Básica I - Gerenciador de concursos da Mega Sena utilizando tabela Hash

Disciplina: IMD0029 - Estruturas de Dados Básicas I

(versão 1.0)

1 Objetivo do projeto
Implementar um sistema de gerenciamento de concursos da Mega-Sena, utilizando uma
tabela de dispersão (hash table) como estrutura de dados principal. O sistema deve
permitir o armazenamento, acesso, remoção e análise estatística dos concursos, com foco
na correta aplicação das operações fundamentais da tabela de dispersão, no tratamento
de colisões e no processamento eficiente dos dados.

2 Visão geral do sistema
    • O sistema é executado em modo texto. ✅
    • Há interação do usuário durante a execução.✅
    • Uma mesma execução do programa permite manipular diversos concursos. ❌
    • Cada concurso é identificado por um número único. ✅

3 Estrutura dos dados
    • Cada concurso possui:
        – Número do concurso; ✅
        – Data do sorteio; ✅
        – Seis números sorteados. ✅
    • Os concursos são armazenados em uma tabela de dispersão a partir da leitura de ❌
    um arquivo. 
    • Também é possível ocorrer leitura do teclado. ❌

4 Arquivo de dados
    • O sistema deve permitir o carregamento de concursos a partir de um arquivo histórico. ✅
    • O arquivo pode estar nos formatos:
        – CSV (valores separados por vírgula); ou
        – TSV (valores separados por tabulação). ✅
    • Cada linha do arquivo representa um concurso da Mega-Sena. ✅

5 Função de dispersão e colisões
    • Deve ser implementada uma função de dispersão que mapeie o número do concurso para um índice válido da tabela. ❌
    • O tratamento de colisões deve ser feito. ❌
    • Não deve haver duplicação de concursos. ❌

6 Funcionalidades do sistema
    6.1 Inserção de concurso
        • Inserir um novo concurso na tabela de dispersão. ❌
        • O sistema deve impedir a inserção de concursos com número duplicado. ❌
        • Tratar possíveis erros. ❌
    6.2 Busca de concurso
        • Buscar um concurso pelo número. ❌
        • Exibir a data do sorteio e os seis números sorteados. ❌
        • Tratar possíveis erros. ❌
    6.3 Remoção de concurso
        • Remover um concurso da tabela de dispersão pelo número. ❌
        • Tratar possíveis erros. ❌

    6.4 Visualização dos concursos
        • Exibir todos os concursos armazenados. ❌
        • Mostrar número do concurso, data e números sorteados. ❌
        • Tratar possíveis erros. ❌

7 Estatísticas
O sistema deve calcular e apresentar automaticamente:
    • A quantidade de vezes que um número específico foi sorteado; ❌
    • Os dez números mais sorteados; ❌
    • Os dez números menos sorteados; ❌
    • A quantidade de concursos realizados em um determinado ano, com exibição de seus dados. ❌
    • Se um determinado jogo já foi sorteado. Se sim, apresentar seus dados históricos. ❌

8 Execução do sistema
Durante a execução, o programa deve permitir ao usuário:
    1. Carregar concursos de um arquivo; ✅
    2. Inserir novos concursos manualmente; ✅
    3. Buscar concursos; ✅
    4. Remover concursos; ✅
    5. Visualizar concursos armazenados; ✅
    6. Consultar estatísticas. ✅

9 Estruturas de dados obrigatórias
    • Tabela de dispersão para armazenamento dos concursos; ✅
    • Outras estruturas podem ser utilizadas apenas como apoio. ✅

