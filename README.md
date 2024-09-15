# Automação do processo de saída escolar utilizando robótica

_______________________________________________________________________________________________________________________________________

Título: Automação do Processo de Saída Escolar utilizando robótica.

Introdução:
Nosso projeto visa abordar um desafio recorrente em nossa escola relacionado ao processo de saída dos alunos. Atualmente, a ordem de saída das diferentes séries varia diariamente, o que demanda a intervenção manual dos coordenadores para liberar as turmas na sequência correta. Essa tarefa muitas vezes consome tempo, pode levar a erros e atrasos, prejudicando a eficiência do processo.

Objetivo:
O objetivo central deste projeto é desenvolver uma solução automatizada para otimizar o processo de saída escolar, utilizando conceitos de robótica e automação. Planejamos criar um sistema que permita que os coordenadores da escola controlem a ordem de saída das diferentes séries de forma eficiente e precisa, eliminando a necessidade de intervenção manual diária.

Benefícios:
A automação desse processo traz diversos benefícios:

1. Eficiência: A eliminação da necessidade de deslocamento dos coordenadores de sala em sala agiliza o processo de saída, evitando atrasos.

2. Precisão: O sistema elimina a possibilidade de erros humanos na determinação da ordem de saída, garantindo que tudo ocorra conforme o planejado.

3. Economia de Tempo: Coordenadores e professores não precisarão gastar tempo organizando a ordem de saída manualmente, liberando-os para se concentrarem em outras tarefas importantes.

Etapas de Implementação:

Versão com Fios: Iniciaremos implementando o sistema com fios, conectando os botões do painel à LED vermelha e ao sinal sonoro. Essa fase inicial permitirá a validação do conceito e a identificação de possíveis ajustes.

Versão sem painel: Na próxima etapa, exploraremos a implementação de comunicações sem fio entre o um WebServer e os dispositivos de sinalização. Isso reduzirá a dependência de cabos, aumentando a praticidade e a flexibilidade do sistema, mas ainda assim terá cabos para levar da placa principal para fazer as conexões em todas as salas.

Versão sem fios: Continuamos com o webserver da versão passada. Mas nesta próxima versão iremos automatizar criando uma placa como principal e em cada sala terá uma sala conectada a principal como clientes de um servidor, assim o servidor poderá enviar comandos para seus clientes que estão posicionados nas salas de aula aguardando a resposta do servidor.

Automação Avançada: A última etapa envolve o desenvolvimento de um programa que será capaz de gerenciar automaticamente a ordem de saída com base nos dias e horários 
das diferentes turmas. Esse programa permitirá que o processo se torne totalmente autônomo, dispensando intervenção manual.

Conclusão:
Em resumo, nosso projeto visa melhorar significativamente o processo de saída escolar através da utilização de tecnologia robótica e automação. Ao criar um sistema que permite aos coordenadores controlar a ordem de saída de forma rápida e precisa, nosso objetivo é aumentar a eficiência, reduzir erros e economizar tempo. Com a implementação gradual das etapas, desde a versão com fios até a automação completa baseada em programação, esperamos oferecer uma solução completa e inovadora para esse desafio escolar.

_______________________________________________________________________________________________________________________________________

Título: Automação do Processo de Saída Escolar Utilizando Arduino - Fase Beta

Introdução:
O presente relatório descreve a primeira fase do projeto de automação baseado no Arduino Uno, intitulada "Fase Beta". Este projeto tem como objetivo desenvolver um sistema automatizado que facilite a liberação das turmas escolares por série, eliminando a necessidade de intervenção manual e otimizando o processo de gerenciamento escolar.

Descrição do Projeto:
Nesta fase beta do projeto, utilizamos componentes como Arduino Uno, uma placa de ensaio, diversos jumpers, resistores para LEDs, botões de 220 ohms para controle dos LEDs e botões de 10k ohms para interação. A ideia central é proporcionar a liberação das turmas de forma simples e eficiente. Cada botão designado para uma série específica, ao ser acionado, acende o LED correspondente. Esta representação simbólica está em consonância com os diferentes anos escolares, ilustrando uma solução inicial para a automação do processo.

Funcionamento:
Ao pressionar o botão destinado a uma série, o sistema ativa o LED correspondente à série escolhida. Este sistema permite a identificação visual da série liberada, proporcionando uma experiência mais intuitiva. O LED permanece aceso durante 3 segundos e neste período não é possível liberar uma outra serie, após o fim deste tempo é possível clicar em um outro botão destinado a outra série. 

Desafios e Próximas Etapas:
Durante a implementação desta fase, alguns desafios foram identificados, sendo o mais proeminente a dependência de energia proveniente de um computador. Para a próxima etapa, nosso objetivo é superar essa limitação, dotando o sistema de sua própria fonte de energia independente. Isso garantirá autonomia e eliminação da necessidade de conexão contínua a um dispositivo externo.

Conclusão:
A Fase Beta deste projeto de automação utilizando Arduino Uno demonstrou a viabilidade e potencial do sistema proposto para otimização do processo de liberação das turmas escolares. Por meio da ativação de LEDs, o sistema oferece uma abordagem mais eficiente e intuitiva para essa tarefa. As dificuldades enfrentadas no decorrer deste estágio serão abordadas na próxima fase, onde buscaremos aprimorar a solução, incluindo uma fonte de energia autônoma.

(Inserir foto do projeto aqui)

Assinatura:
(Nomes dos responsáveis pelo projeto)
(Data)

_______________________________________________________________________________________________________________________________________


Titulo: Automação do Processo de Saída Escolar Utilizando ESP32 - Fase Avançada

Descrição do Projeto:

Nesta fase avançada do projeto de automação do processo de saída escolar, demos um passo significativo em direção a uma solução mais eficiente e versátil. O projeto utiliza uma placa ESP32 como ponto central, criando uma rede Wi-Fi local (AP) para fornecer uma interface web que permite a liberação das turmas escolares de maneira intuitiva e eficaz. Nossa meta é eliminar a intervenção manual e otimizar o gerenciamento escolar.

Arquitetura do Sistema:

Na versão atual do projeto, utilizamos uma única placa ESP32 como controladora central. Ela cria uma rede Wi-Fi local com um nome de rede (SSID) e uma senha configuráveis. Conectando-se a esta rede Wi-Fi, os coordenadores da escola podem acessar uma interface web através de um navegador, permitindo-lhes controlar a liberação das turmas.

Código e Interface Web:

O código fonte do sistema é executado no ESP32 e está escrito em linguagem Arduino. Ele inclui a configuração da rede Wi-Fi, a definição das portas GPIO para controle dos LEDs e a lógica para responder às solicitações HTTP feitas pelos coordenadores.

A interface web apresenta três botões correspondentes às séries de alunos (primeiros, segundos e terceiros anos). Cada botão é acompanhado por uma indicação visual (LED) que indica a série liberada. Quando um botão é acionado, o LED correspondente se acende, proporcionando uma experiência intuitiva e eficaz.

Prós e Contras da Versão Atual:

Pontos Fortes:

Simplicidade e Eficiência: A interface web proporciona uma maneira simples e eficiente de liberar turmas escolares, economizando tempo e reduzindo a possibilidade de erros.

Versatilidade: O sistema pode ser facilmente implantado em qualquer sala de aula que tenha uma placa ESP32, tornando-o flexível e escalável.

Pontos Fracos:

Dependência de Rede Wi-Fi: O sistema atual depende da rede Wi-Fi local criada pela placa ESP32. Embora esta rede seja extremamente estável e confiável, é importante notar que uma interrupção na rede poderia afetar o funcionamento do sistema.

Limitação de Uma Placa ESP32 : Atualmente, o sistema suporta apenas uma placa ESP32 por escola. Isso implica que, em uma implementação completa em várias salas de aula, seria necessário puxar fios para conectar as led de cada sala na placa. No entanto, a comunicação wireless entre as placas ESP32 está sendo planejada para futuras melhorias, eliminando a necessidade de fios adicionais.

Próximas Etapas:

Para futuras melhorias, planejamos:

Fonte de Energia Autônoma: Superar a dependência de energia proveniente de um computador, dotando o sistema de sua própria fonte de energia independente.

Comunicação entre Placas ESP32: Implementar uma comunicação entre as placas ESP32 para criar um sistema centralizado que possa controlar várias salas simultaneamente.

Melhorias na Interface Web: Aprimorar a interface web para torná-la ainda mais amigável e informativa.

Conclusão:

A versão avançada do nosso projeto de automação do processo de saída escolar representa um passo significativo em direção a uma solução mais eficiente e versátil. Com a capacidade de controlar a liberação das turmas de forma intuitiva por meio de uma rede Wi-Fi local, estamos caminhando para eliminar a intervenção manual e otimizar o gerenciamento escolar. O próximo passo é implementar as melhorias planejadas para tornar o sistema ainda mais robusto e versátil.

(Inserir foto do projeto aqui)

Assinatura:
(Nomes dos responsáveis pelo projeto)
(Data)

_______________________________________________________________________________________________________________________________________


Título: Automação Avançada do Processo de Saída Escolar Utilizando ESP32 - Fase Final

Introdução:

A Fase Final deste projeto representa um avanço significativo na automação do processo de saída escolar, destacando a transição para uma solução sem fio. O objetivo principal desta etapa foi eliminar a necessidade de fios físicos, possibilitando a comunicação eficiente entre uma placa central (servidor) e placas individuais em cada sala de aula (clientes), proporcionando uma solução ágil, econômica e escalável.

Descrição do Projeto:

Nesta fase, utilizamos um painel com três botões físicos, semelhante à fase beta, e placas ESP32 para criar uma arquitetura sem fio. Isso permitiu uma comunicação eficaz entre o servidor e os clientes, utilizando o protocolo ESP-NOW, que se baseia na comunicação entre as placas ESP32 através dos endereços MAC. No entanto, para superar desafios técnicos, logísticos e de implementação, foi necessário regredir para botões físicos no painel de comandos, devido à troca do protocolo de comunicação.

Desafios e Melhorias:

A implementação do protocolo ESP-NOW permitiu a comunicação eficaz entre o servidor e um cliente, mas os desafios persistem. Atualmente, apenas um cliente recebe comandos do servidor, e estamos trabalhando para aprimorar o código, permitindo que múltiplos clientes recebam os comandos enviados. Além disso, planejamos reintegrar o webserver para o painel de comandos, proporcionando uma interface mais amigável e flexível.

Arquitetura do Sistema:

A arquitetura do sistema consiste em uma placa central (servidor) e várias placas individuais nas salas de aula (clientes). A comunicação ocorre sem fios, permitindo um controle eficiente da ordem de saída.

Código e Interface Web:

O código, baseado em Arduino, foi adaptado para a comunicação sem fio. Estamos empenhados em melhorar o código para suportar múltiplos clientes e reintegrar a interface web no painel de comandos.

Próximas Etapas:

-Implementar melhorias no código para permitir que mais clientes recebam comandos do servidor.
-Reintegração da interface web no painel de comandos para proporcionar uma experiência mais amigável.
-Explorar a possibilidade de alimentar o sistema com uma fonte de energia autônoma.

Conclusão:

A Fase Final do projeto demonstra um progresso significativo na automação do processo de saída escolar. Apesar dos desafios enfrentados, a transição para uma solução sem fio oferece uma perspectiva promissora. Estamos comprometidos em superar os obstáculos remanescentes, aprimorando o código e reintegrando a interface web, para alcançar uma solução robusta e eficiente que atenda às necessidades da escola.

(Inserir foto do projeto aqui)

Assinatura:
(Nomes dos responsáveis pelo projeto)
(Data)
