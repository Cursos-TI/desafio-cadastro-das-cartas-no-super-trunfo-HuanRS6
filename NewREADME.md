Desafio Super Trunfo - Cadastro das Cartas
📋 Sobre o Projeto
Este projeto foi desenvolvido como parte do desafio proposto pela empresa MateCheck no curso da Estácio.

O objetivo é criar um programa em linguagem C que simula o cadastro e a comparação de cartas no estilo Super Trunfo, com tema voltado para cidades e estados.

O desenvolvimento passou por três níveis de dificuldade:

Nível Novato: Cadastro e exibição básica de cartas.

Nível Aventureiro: Cálculo de novos atributos (densidade populacional e PIB per capita).

Nível Mestre: Implementação de comparação de atributos e cálculo do "Super Poder".

🛠️ Funcionalidades Implementadas
Cadastro manual de duas cartas via terminal.

Cálculo automático de:

Densidade Populacional (população / área)

PIB per Capita (PIB total em reais / população)

Super Poder (soma dos atributos, incluindo o inverso da densidade populacional)

Comparação de atributos entre as cartas:

Para Densidade Populacional, vence o menor valor.

Para os demais atributos, vence o maior valor.

Exibição clara dos resultados de cada comparação.

🧠 Estrutura de Dados
O projeto utiliza uma estrutura struct Carta contendo:

Estado ou Região (char)

Código (int)

Nome da Cidade (char)

População (unsigned long int)

Área em km² (float)

PIB em bilhões (float)

Número de Pontos Turísticos (int)

Densidade Populacional (float) (calculado)

PIB per Capita (float) (calculado)

Super Poder (float) (calculado)

📥 Como Compilar e Executar
1. Clone o repositório:

git clone https://github.com/Cursos-TI/desafio-cadastro-das-cartas-no-super-trunfo-HuanRS6.git

2. Acesse a pasta:

cd desafio-cadastro-das-cartas-no-super-trunfo-HuanRS6

3. Compile o programa:

gcc CartasSuperTrunfo.c -o cartas

4. Execute o programa:

./cartas

✅ Requisitos Atendidos
 Cadastro das cartas com leitura de todos os atributos.

 Cálculo correto de Densidade Populacional e PIB per Capita.

 Cálculo correto do Super Poder (com inversão da densidade).

 Comparação atributo por atributo.

 Exibição organizada dos resultados.

📅 Atualização
Projeto finalizado e atualizado em Abril de 2025.

✍️ Autor
Huan R. S.

🚀 Muito obrigado por visitar o projeto!
