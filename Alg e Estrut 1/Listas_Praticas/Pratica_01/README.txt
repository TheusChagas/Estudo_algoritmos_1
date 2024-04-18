Prática 01: Batalha entre guerreiros

Neste exercício, você deve criar um protótipo de um sistema de batalha entre guerreiros de um jogo. Para isso, implemente os itens a seguir em um módulo separado chamado jogo.

    Defina um novo tipo de dados chamado Guerreiro com os seguintes campos: ataque (inteiro), defesa (inteiro), carisma (inteiro), pontos_vida (inteiro) e id_jogador (inteiro).

    Escreva uma função de nome rolaDados que simula a rolagem de três dados de seis faces tradicionais (1 a 6) e retorna a soma dessas rolagens. Note que somar os valores resultantes da rolagem de três dados de seis faces é diferente de rolar um dado que retorna um número entre 3 e 18.

    Escreva um procedimento de nome criaGuerreiro que recebe um Guerreiro por passagem de parâmetro por referência e que atribui valores aos seus campos de batalha. Os seus campos de batalha (ataque, defesa e carisma devem receber um valor inteiro da função rolaDados). O campo pontos_vida deve receber a soma dos valores retornados por três execuções da função rolaDados.
    Escreva uma função de nome bonusCarisma que recebe um valor de carisma como parâmetro e retorna o bônus dado por esse valor de carisma. A tabela de bônus funciona da seguinte maneira:
        Carisma 18: o guerreiro é extremamente carismático e tem todo o apoio da torcida, recebendo um bônus de +3.
        Carisma 16 e 17: o guerreiro é muito carismático e tem todo o apoio da torcida, recebendo um bônus de +2.
        Carisma 14 e 15: o guerreiro é carismático e tem todo o apoio da torcida, recebendo um bônus de +1.
        Carisma 6 e 7: o guerreiro é antipático e tem alguma torcida contra ele, recebendo uma penalidade de -1.
        Carisma 4 e 5: o guerreiro é muito antipático, e tem quase a torcida contra ele, recebendo uma penalidade de -2.
        Carisma 3: o guerreiro é extremamente antipático, e tem toda a torcida contra ele, recebendo uma penalidade de -3.
         

    Escreva um procedimento de nome ataca que recebe dois Guerreiros por passagem de parâmetro por referência e simula um ataque do primeiro guerreiro no segundo. O ataque é dado da seguinte maneira:

        O primeiro guerreiro rola três dados e soma os seus valores com o seu campo ataque e com o seu bônus de carisma.  Essa soma é o valor do golpe do primeiro guerreiro.

        O segundo guerreiro rola três dados e soma os seus valores com o seu campo defesa e com o seu bônus de carisma. Essa soma é o valor do escudo do segundo guerreiro.

        Faça dano = golpe - escudo. Se o dano for maior que zero, reduza dano dos pontos_vida do segundo guerreiro.
    Escreva um programa que simula a batalha até a morte entre dois guerreiros. Para isso, crie dois guerreiros, um com id_jogador 1 e outro com id_jogador 2. Depois, atribua valores aleatórios para os seus campos de batalha a partir da função criaGuerreiro e inicie ataques intercalados entre esses guerreiros, ou seja, comece com o guerreiro 1 atacando o 2, depois o 2 atacando o 1, depois o 1 atacando o 2 e assim por diante. Para simular um ataque, use a função ataca. A batalha deve acabar quando um dos jogadores, o perdedor, alcançar 0 ou menos pontos_vida. Imprima na tela o identificador do guerreiro vencedor. Este exercício deve usar o módulo jogo criado no exercício anterior e deve ser implementado no arquivo testajogo.c.
