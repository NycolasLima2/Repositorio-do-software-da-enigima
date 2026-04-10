## Repositorio-do-software-da-enigima
- O objetivo deste projeto é desenvolver um software de criptografia focado em privacidade. sistema deve permitir que usuários comuns consigam cifrar e decifrar mensagens através de um método de algoritmo (Cifra de César)


## FLUXOGRAMA
https://canva.link/fluxogramadeprocessobpmn 

fluxograma dos processos para a entrega do cliente, ou seja, formar nossa organização de forma visual.

## MARCOS IMPORTANTES: 
- Documentação (Levantamento de Requisitos e Escopo);
- Desenvolvimento/Codificação Finalizada;
- Fase de Testes Concluída;
- Aprovação.

## Matriz de Papéis (RACI)
A matriz RACI define quem faz o quê:
- Responsável (Quem faz a tarefa)
- Autoridade (Quem aprova e responde por ela)
- Consultado (Quem dá apoio/opinião)
- Informado (Quem recebe a notícia de que acabou)


| Tarefa | **Líder (Gestão)** | **Dev (Codificação)** | **QA (Testes)** | **CM (Arquivos)** |
|----|----|----|----|----|
|Definição da Lógica.|A|R|C|I|
|Escrita do Código.|I|R|C|A|
|Criação da Interface|C|R|I|A|
|Execução de Testes|A|C|R|I|
|Organização do GitHub/Pastas|I|C|I|R|


## Primeiro passo: Produtos para projetos

| Nº | Entrega | Descrição |
|----|----| ----|
|1| O Algoritmo de Criptografia| É o "cérebro" do projeto. O código que pega uma letra e transforma em outra seguindo uma regra simples.|
|2| Interface | A parte visual onde a pessoa digita a mensagem, coloca a senha e clicar no botão para "esconder" o texto.|
|3| Manual | Um arquivo simples (tipo um readme.txt), que funcionará como um guia, explicando como rodar o programa e como usar a senha.|
|4| Documentação |Um documento curto onde você anota o que já fez, o que falta fazer e quais problemas encontrou no caminho.|
|5|Testes/Avaliação|Uma pequena tabela mostrando que você testou várias palavras e que todas voltaram ao normal depois de decifradas.|

## Segundo Passo:
Segundo passo. Lista de tarefas do projeto 
 
 


| TAREFA Nº. | DESCRIÇÃO DA TAREFA |
|----|----|
|1. Planejamento|--------------|
| 1.1 | Definir a lógica de troca de letras, no caso Cifra de César |
|1.2| Escolher quais caracteres o sistema vai aceitar (A-Z, números, espaços, acentos, etc.). |
|2. Execução|------------------|
|2.1|Criar a parte do código que transforma texto normal em código (Criptografar).|
|2.2|Criar a parte do código que faz o inverso: código em texto (Descriptografar).|
|2.4|Programar a "senha" (chave) para que ela mude o resultado da criptografia.|
|2.5|Escrever um documento simples explicando como qualquer pessoa pode usar o programa.|
|2.6|Organizar e limpar o código (apagar o que não serve e pôr comentários).|
|3. Avaliação|-----------------|
|3.1|Testar se o programa funciona com frases curtas e textos longos.|
|3.2|Verificar se a decifragem recupera exatamente a mensagem original.|
|3.3|Testar o que acontece se o utilizador não digitar nada ou usar símbolos estranhos.|
|3.4|Escrever um pequeno resumo sobre o que correu bem e o que pode ser melhorado.|

## Fora do escopo 
Este projeto foca apenas na lógica básica e interface. Não serão entregues:
- **Criptografia de arquivos**: O software processará apenas texto (strings), não arquivos como PDF ou imagens.
- **Segurança contra Hackers Profissionais**: O sistema é didático; não possui proteção contra ataques de força bruta ou análise de frequência.
- **Banco de Dados**: Não haverá armazenamento de histórico de mensagens ou usuários

## Hipóteses de projeto 
|Nº|SUPOSIÇÃO|IMPACTO SE FOR FALSA|
|---|---|---|
|1|O usuário usará apenas o alfabeto padrão (sem emojis ou símbolos complexos).|O programa pode travar ou gerar caracteres ilegíveis ("lixo") na saída.|
|2|A linguagem de programação escolhida possui todas as ferramentas para criar a tela.|Gastar tempo extra aprendendo uma nova biblioteca ou mudar o design.|
|3|A lógica de "pular letras" é reversível de forma idêntica.|O usuário não conseguirá recuperar a mensagem original, tornando o software inútil.|

## Restrições de projeto 
_**DATA DE INÍCIO: 01/04/2026**_

_**DATA DE TÉRMINO: 15/04/2026**_
- Fim da arquitetura: 08/04/2026
- Fim da codificação: 10/04/2026
- Fim da revisão de qualidade: 15/04/2026

