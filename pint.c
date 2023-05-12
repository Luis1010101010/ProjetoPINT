TEMA: Sistema Integrado de Gestão de Oportunidades e Ofertas Softinsa 
Atualmente, devido ao alto nível de procura, as empresas sentem a necessidade de estarem mais 
ligadas aos seus clientes e colaboradores. Cada vez mais, verificamos que por vezes as melhores 
oportunidades quer de negócio vêm dos seus colaboradores. Como tal é essencial que todos os 
colaboradores da empresa sintam que fazem parte da evolução contínua da sua entidade 
empregadora. 
Neste sentido, pretende-se a criação de uma solução integrada que permita, não só a informação 
básica da empresa (centros, localização, contactos, áreas de negócio e pessoas), com a visão 
agregadora de: 
• Oportunidades (Negócios, Parcerias e os Investimentos) que existem na empresa e de 
potenciais novas oportunidades. gestão de todas as relações e interações da empresa com 
os clientes e potenciais clientes. 
• Ofertas/Vagas, que possam existir, sejam elas as ofertas em Aberto, Novas candidaturas ou 
ainda Recomendações de amigos; 
• Benefícios, ou seja, dar a conhecer todos os Benefícios que cada colaborador possa usufruir. 
• Mais ideias, ou seja permitir que cada colaborador possa ter um canal onde possa fazer 
recomendações de melhoria para a empresa e as suas equipas. 
O objetivo é agregar informação e aproximar a empresa de uma forma mais colaborativa. De 
forma que consiga estar em constante evolução, fazendo crescer as suas equipas, ajudando a
crescer o negócio e mantendo-se conectada com a rede de colaboradores, clientes e racionalizar 
os processos de uma forma atual e ágil. 
Para este desenvolvimento, pretende-se o desenvolvimento de uma plataforma Web com vários 
perfis (Administrador, Gestor de Conteúdos, Utilizador ) e Mobile (Android e IOS) . 
Requisitos Gerais
• Deverá ser possível o registo de possíveis negócios com toda a informação detalhada 
(Cliente, Necessidades, Tipo de Projeto, Área de negócio, contactos).
• Deverá permitir a qualquer momento acrescentar mais informação à Lead
(Oportunidade).
• Utilizadores e permissões deverão ser parametrizáveis no portal da aplicação mediante 
respetiva permissão. Na primeira vez que um utilizador entrar na aplicação tem de 
alterar a password.
• Os utilizadores devem receber um email de confirmação de registo antes de puderem 
utilizar a solução.
• Os utilizadores devem poder registar todas as interações efetuadas com os contactos 
do Cliente.
• Deve ser possível alterar o estado da Oportunidade a qualquer altura.
• Deverá ser possível agendar reuniões ou contactos e enviar respetiva convocatória para 
os contactos selecionados.
• Quando a data/hora da reunião estiver a chegar, o utilizador deve receber uma 
notificação.
• Deverá ser possível o registo de vagas disponíveis com toda a informação detalhada por 
cada vaga/oportunidade.
• O Utilizador deverá ter a possibilidade de quando se candidata a uma vaga, anexar o CV.
• Deverá ser possível em Portal Web agendar entrevista para cada um dos candidatos 
propostos à vaga em questão, enviando convocatória para os mesmos.
• Deverá ser possível em contexto de entrevista avaliar e registar os pontos e notas 
importantes retirados da mesma.
• Deverá ser possível ter uma Visão geral em dashboard dividido por Tema 
(Emprego/Negócio) do estado das oportunidades, volume por estado, vagas com mais 
candidatos, etc.
• Deverá ser possível visualizar em contexto de calendário toda a agenda de entrevistas e 
ou contactos e interações com o possível Cliente.
• Os utilizadores e colaboradores Softinsa, deverão poder visualizar as oportunidades em 
aberto, poder referenciar um CV para o efeito.
• Os atuais colaboradores devem poder propor-se ás vagas internas existentes, desta 
forma, devem também existir tipos de vagas expostas apenas aos colaboradores 
Softinsa.
Login 
Os utilizadores podem efetuar o login de 3 formas distintas:
• Single Sign-on através da conta Google, indicando apenas as credenciais da conta 
Google
• Single Sign-on através da conta Facebook, indicando apenas as credenciais da conta 
Facebook
• Login na Plataforma Web ou App mobile, preenchendo o formulário “Login” com os 
seguintes campos obrigatórios:
§ Email 
§ Password
• Deve ser dada ao utilizador a possibilidade de guardar os dados de login, de forma a que não 
seja obrigado a efetuar o login sempre que utiliza a Aplicação. 
• As validações de credenciais válidas e/ou inválidas serão efetuadas através dos serviços 
da Plataforma, complementados com identificação visual a vermelho do(s) campo(s) não 
preenchido(s) corretamente. 
Recuperar Password
• Aquando do processo de login, deve ser dada ao utilizador a possibilidade de recuperar a 
sua password, preenchendo o formulário “Recuperar Password” com os seguintes 
campos obrigatórios: 
• Email
• Caso o email esteja associado a um utilizador previamente registado, então o utilizador 
deve continuar o processo de redefinição de password preenchendo os seguintes campos 
obrigatórios:
o Nova Password
o Confirmar Password
• No final deste processo e se o mesmo terminar com sucesso, então o utilizador tem 
que visualizar a mensagem “A sua password foi redefinida com sucesso”. 
• Deve, também, ser dada ao utilizador a possibilidade de cancelar o processo de 
recuperar password. 
• As validações de campos válidos e/ou inválidos serão efetuadas da identificação visual 
a vermelho do(s) campo(s) não preenchido(s) corretamente.
Terminar Sessão
Ao aceder à página “Terminar Sessão” o utilizador visualiza a mensagem “Pretende terminar a sua 
sessão?”. 
Caso o utilizador opte por terminar a sessão, então é automaticamente iniciado o processo de logout da 
Plataforma Web ou App mobile. 
Desta forma, se o utilizador pretender visualizar os conteúdos da Plataforma Web e App mobile, então 
tem que efetuar o login novamente (de acordo com REQ-02). 
Deve, também, ser dada ao utilizador a possibilidade de cancelar o processo de terminar a sessão. 
Particularidades da Aplicação Web:
• A aplicação web servirá também para parametrização e gestão de cada uma das Macro 
Funcionalidades: 
o Oportunidades;
o Ofertas/Vagas;
o Benefícios; 
o Mais ideias;
• PERFIS DE UTILIZADOR – No Portal Web, deve permitir ter três perfis:
• Administrador
o Este tipo de utilizador tem acesso integral às Macro Funcionalidades
• Gestor de Conteúdos
o Este tipo de utilizador apenas terá acesso ao menu “Gestão de 
Conteúdos” e “Reporting”
• Gestor de Ideias 
o Este tipo de utilizador apenas terá acesso ao menu “Gestor de Ideias”
para a devido seguimento; 
As validações de credenciais válidas e/ou inválidas serão efetuadas através da identificação 
visual a vermelho do(s) campo(s) não preenchido(s) corretamente.
Reporting (mínimo exigível)
o % das Oportunidades e Ofertas/Vagas e visualização de dashboards com a seguinte 
informação:
o % de alocação diária, com visão mensal
o # de Oportunidades e Ofertas/Vagas por range de datas;
o # de Oportunidades e Ofertas/Vagas por setor (java, .net; SAP; iOT Cobol; Devops; 
Outros); 
o # de utilizadores registados;
Bónus:
• A plataforma deve ter 3 línguas disponíveis (Português, Inglês e Espanhol);
• Apresentar uma saudação ao utilizador conforme a hora: 
• O utilizador deve ser saudado com a mensagem “Bem-vindo!”, nas seguintes situações:
o Após o registo
o Após o primeiro login 
o O utilizador deve ser saudado com a mensagem “Seja bem-vindo novamente”, após 15 
dias sem efetuar login no sistema. 
o O utilizador deve ser saudado com a mensagem “Bom dia!”, “Boa Tarde!” ou “Boa 
Noite!” em todas as restantes situações. 
o Estas saudações deverão ser apresentadas ao utilizador nos diferentes idiomas 
(Português, Inglês ou Espanhol), tendo em conta a escolha do utilizador. 
• No Portal deverá haver uma página de Informações/Avisos: A página “Informações/Avisos” é a 
página onde os administradores podem criar, consultar e editar informações genéricas e avisos, 
que são disponibilizados imediatamente na Plataforma Web e App mobile na página 
“Informações/Avisos”. 
Esta página é de acesso exclusivo aos utilizadores do tipo “Administrador” e “Gestor de 
Conteúdos” e os seguintes dados podem ser visualizados:
• Informações Genéricas e Avisos Ativos
• Informações Genéricas e Avisos Inativos
• Ver todas as Informações Genéricas e Avisos
Caso não existam informações genéricas ativas, então é apresentado ao utilizador a 
mensagem “Não existem informações genéricas ativas”. 
Caso não existam avisos ativos, então é apresentado ao utilizador a mensagem “Não 
existem avisos ativos”. 
Caso não existam informações genéricas nem avisos ativos, então é apresentado ao 
utilizador a mensagem “Não existem informações/avisos ativos”. 
Caso não existam informações genéricas inativas, então é apresentado ao utilizador a 
mensagem “Não existem informações genéricas inativas”. 
Caso não existam avisos inativos, então é apresentado ao utilizador a mensagem “Não 
existem avisos inativos”. 
Caso não existam informações genéricas nem avisos inativos, então é apresentado ao 
utilizador a mensagem “Não existem informações/avisos inativos”. 
Caso não existam informações genéricas nem avisos criados, então é apresentado ao 
utilizador a mensagem “Não existem informações/avisos disponíveis”. 
• Possibilidade de associação de uma conta de email para gestão de administrador, com a 
integração direta entre email e aplicação com as diversas Macro Funcionalidades para:
o Oportunidades;
o Ofertas/Vagas;
o Benefícios; 
o Mais ideias;