
-- DESCRIÇÃO DOS COMANDOS SQL PARA CRIAÇÃO DO BANCO DE DADOS DA APLICAÇÃO:

-- CRIAÇÃO DAS TABELAS:

CREATE TABLE MATEMATICA (
    IDQUESTAO INTEGER PRIMARY KEY,
    ENUNCIADO TEXT NOT NULL,
    ALTERNATIVA_A TEXT NOT NULL,
    ALTERNATIVA_B TEXT NOT NULL,
    ALTERNATIVA_C TEXT NOT NULL,
    ALTERNATIVA_D TEXT NOT NULL,
    ALTERNATIVA_E TEXT NOT NULL,
    RESPOSTA CHAR(1)
);

INSERT INTO MATEMATICA VALUES (1, 'Durante uma viagem choveu 5 vezes. A chuva caia pela manhã ou à tarde, nunca o dia todo.
Houve 6 manhãs e 3 tardes sem chuvas. Quantos dias durou a viagem:', '6', '7', '8', '9', '10', 'B');


INSERT INTO MATEMATICA VALUES (2, 'Num clube, dentre os 500 inscritos no departamento de natação, 30 são unicamente
nadadores, entretento 310 também jogam futebol e 250 também jogam tênis. Os inscritos
em natação que também praticam futebol e tenis são em número de:', '80', '90', '100', '110', '120', 'B');

INSERT INTO MATEMATICA VALUES (3, '<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0//EN" "http://www.w3.org/TR/REC-html40/strict.dtd">
<html><head><meta name="qrichtext" content="1" /><style type="text/css">
p, li { white-space: pre-wrap; }
</style></head><body style=" font-size:11pt; font-weight:400; font-style:normal;">
<p align="justify" style=" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family: font-size:16px; color:#404040;">Um aluno registrou as notas bimestrais de algumas de suas disciplinas numa tabela. Ele observou que as entradas numéricas da tabela formavam uma matriz 4x4, e que poderia calcular as médias anuais dessas disciplinas usando produto de matrizes. Todas as provas possuíam o mesmo peso, e a tabela que ele conseguiu é mostrada a seguir</span></p>
<p align="justify" style="-qt-paragraph-type:empty; margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:font-size:16px; color:#404040;"><br /></p>
<p align="justify" style=" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><img src=":/img/math/state/questao_3.png" /></p>
<p align="justify" style="-qt-paragraph-type:empty; margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><br /></p>
<p align="justify" style=" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"><span style=" font-family: font-size:16px; color:#404040;">Para obter essas médias, ele multiplicou a matriz obtida a partir da tabela por</span></p></body></html>',
'<html><head/><body><p><img src=":/img/math/ans_a/resposta_A_3.png"/></p><p><br/></p></body></html>', '<html><head/><body><p><img src=":/img/math/ans_b/resposta_B_3.png"/></p><p><br/></p></body></html>',
'<html><head/><body><p><img src=":/img/math/ans_c/resposta_C_3.png"/></p><p><br/></p></body></html>', '<html><head/><body><p><img src=":/img/math/ans_d/resposta_D_3.png"/></p><p><br/></p></body></html>',
'<html><head/><body><p><img src=":/img/math/ans_e/resposta_E_3.png"/></p><p><br/></p></body></html>', 'E', 1);

INSERT INTO "TEMA" VALUES (IDQUESTAO, ENUNCIADO, ALTERNATIVA_A, ALTERNATIVA_B, ALTERNATIVA_C
ALTERNATIVA_D, ALTERNATIVA_E, RESPOSTA, ID_TEMA)

CREATE TABLE FISICA (
    IDQUESTAO INTEGER PRIMARY KEY,
    ENUNCIADO TEXT NOT NULL,
    ALTERNATIVA_A TEXT NOT NULL,
    ALTERNATIVA_B TEXT NOT NULL,
    ALTERNATIVA_C TEXT NOT NULL,
    ALTERNATIVA_D TEXT NOT NULL,
    ALTERNATIVA_E TEXT NOT NULL,
    RESPOSTA CHAR(1)
);

INSERT INTO FISICA VALUES (1, 'Nossa pele possui células que reagem à incidência de luz ultravioleta e produzem uma substância chamada melanina,
responsável pela pigmentação da pele. Pen sando em se bronzear, uma garota vestiu um biquíni, acendeu a luz de seu quarto e deitou-se exatamente abaixo da lâmpada incandescente.
Após várias horas ela percebeu que não conseguiu resultado algum.

O bronzeamento não ocorreu porque a luz emitida pela lâmpada incandescente é de',
'baixa intensidade.', 'baixa frequência.', 'um epectro contínuo.', 'amplitude inadequada.', 'curto comprimento de onda.', 'B');

INSERT INTO FISICA VALUES (2, 'Uma empresa de transporte precisa efetuar a entrega de uma encomenda o mais breve possível.
Para tanto, a equipe de logística analisa o trajeto desde a empresa até o local da entrega. Ela verifica que o trajeto apresenta dois trechos de distâncias diferentes e velocidades máximas permitidas diferentes.
No primeiro trecho, a velocidade máxima permitida é de 80 km/h e a distância a ser pecorrida é de 80 km. No segundo trecho, cujo comprimento vale 60 km, a velocidade máxima permitida é 120 km/h.

Supondo que as condições de trânsito sejam favoráveis para que o veículo da empresa ande continuamente na velocidade máxima permitida, qual será o tempo necesário, em horas, para a realização da entrega?', '0,7', '1,4', '1,5', '2,0', '3,0', 'C');


CREATE TABLE QUIMICA (
    IDQUESTAO INTEGER PRIMARY KEY,
    ENUNCIADO TEXT NOT NULL,
    ALTERNATIVA_A TEXT NOT NULL,
    ALTERNATIVA_B TEXT NOT NULL,
    ALTERNATIVA_C TEXT NOT NULL,
    ALTERNATIVA_D TEXT NOT NULL,
    ALTERNATIVA_E TEXT NOT NULL,
    RESPOSTA CHAR(1)
);

INSERT INTO QUIMICA VALUES (1, 'Em uma planície, ocorreu um acidente ambiental em decorrência do derramamento de grande quantidade de um hidrocarboneto que se apresenta na forma pastosa à temperatura ambiente.
Um químico ambiental utilizou uma quantidade apropriada de uma solução de para-dodecil-benzenossulfonato de sódio, um agente tensoativo sintético, para diminuir os impactos desse acidente.','promove uma reação de substituição no hidrocarbneto, tornando-o menos letal ao ambiente.',
    'a hidrólise do para-dodecil-benzenossulfonato de sódio produz energia térmica suficiente
    para vaporizar o hidrocarboneto.', 'a mistura desses reagentes provoca a combustão do hidrocarboneto,
    o que diminui a quantidade dessa substância na natureza.',
    'a solução de para-dodecil-benzenossulfonato possiblita a solubilização do hidrocarboneto.', 'o reagente adicionado provoca uma solidificação do hidrocarboneto,
    o que facilita sua retirada do ambiente.', 'D');

CREATE TABLE BIOLOGIA (
    IDQUESTAO INTEGER PRIMARY KEY,
    ENUNCIADO TEXT NOT NULL,
    ALTERNATIVA_A TEXT NOT NULL,
    ALTERNATIVA_B TEXT NOT NULL,
    ALTERNATIVA_C TEXT NOT NULL,
    ALTERNATIVA_D TEXT NOT NULL,
    ALTERNATIVA_E TEXT NOT NULL,
    RESPOSTA CHAR(1)
);

INSERT INTO BIOLOGIA VALUES (1, 'O menor tamanduá do mundo é solitário e tem hábitos noturnos, passa o dia repousando, geralmente em um emaranhado de cipós, com o corpo curvado de tal maneira que forma uma bola. Quando em atividade, se locomove vagarosamente e emite som semelhante a um assobio. A cada gestação, gera um único filhote. A cria é deixada em uma árvore à noite e é amamentada pela mãe até que tenha idade para procurar alimento. As fêmeas adultas têm territórios grandes e o território de um macho inclui o de várias fêmeas, o que significa que ele tem sempre diversas pretendentes à disposição para namorar!

Ciência Hoje das Crianças, ano 19, n. 174, nov. 2006 (adaptado).

Essa descrição sobre o tamanduá diz respeito ao seu','hábitat.', 'biótopo.', 'nível trópico.', 'nicho ecológico.', 'potencial biótico.', 'D');


CREATE TABLE HISTORIA (
    IDQUESTAO INTEGER PRIMARY KEY,
    ENUNCIADO TEXT NOT NULL,
    ALTERNATIVA_A TEXT NOT NULL,
    ALTERNATIVA_B TEXT NOT NULL,
    ALTERNATIVA_C TEXT NOT NULL,
    ALTERNATIVA_D TEXT NOT NULL,
    ALTERNATIVA_E TEXT NOT NULL,
    RESPOSTA CHAR(1)
);

INSERT INTO HISTORIA VALUES (1, '(ENEM - 2010) Essa medida, decretada pelo príncipe D. João de Bragança,
praticamente eliminou o exclusivo metropolitano sobre o comércio da Colônia, desferindo um golpe mortal no Pacto Colonial luso, além de constituir o primeiro grande passo para a independência efetiva do Brasil. Trata-se da(o):',
'Abertura dos Portos Brasileiros às Nações Amigas.','Grito do Ipiranga.', 'Alvará de Liberdade Industrial.', 'Elevação do Brasil à categoria de Reino Unido a Portugal e Algarves.', 'Fundação do Banco do Brasil.', 'A');

CREATE TABLE GEOGRAFIA (
    IDQUESTAO INTEGER PRIMARY KEY,
    ENUNCIADO TEXT NOT NULL,
    ALTERNATIVA_A TEXT NOT NULL,
    ALTERNATIVA_B TEXT NOT NULL,
    ALTERNATIVA_C TEXT NOT NULL,
    ALTERNATIVA_D TEXT NOT NULL,
    ALTERNATIVA_E TEXT NOT NULL,
    RESPOSTA CHAR(1)
);

INSERT INTO GEOGRAFIA VALUES (1, '
Suponha que você seja um consultor e foi contratado para assessorar a implantação de uma matriz energética em um pequeno país com as seguintes características: região plana, chuvosa e com ventos constantes, dispondo de poucos recursos hídricos e sem reservatórios de cobustíveis fósseis.

De acordo com as características desse país, a matriz energética de menor impacto e risco ambientais é a baseada na energia',
'dos biocombustíveis, pois tem menos impacto abiental e maior disponibilidade.','solar, pelo seu baixo custo e pelas características do país favoráveis à sua implantação.','nuclear, por ter menos risco ambiental a ser adquadeada a locais com menor extensão territorial,',
'hidráulica, devido ao relevo, à extensão territorial do país e aos recursos naturais disponíveis.','eólica, pelas características do país e por não gerar gases do efeito estufa nem resíduos de operação.','E');

CREATE TABLE FILOSOFIA (
    IDQUESTAO INTEGER PRIMARY KEY,
    ENUNCIADO TEXT NOT NULL,
    ALTERNATIVA_A TEXT NOT NULL,
    ALTERNATIVA_B TEXT NOT NULL,
    ALTERNATIVA_C TEXT NOT NULL,
    ALTERNATIVA_D TEXT NOT NULL,
    ALTERNATIVA_E TEXT NOT NULL,
    RESPOSTA CHAR(1)
);

INSERT INTO FILOSOFIA VALUES (1, 'TEXTO I

Experimentei algumas vezes que os sentidos eram enganosos, e é de prudência nunca se fiar inteiramente em quem já nos enganou uma vez.

DESCARTES, R. Meditações Metafísicas. São Paulo: Abril Cultural, 1979.

TEXTO II

Sempre que alimentarmos alguma suspeita de que uma ideia esteja sendo empregada sem nenhum significado, precisaremos apenas indagar: de que impressão deriva esta suposta ideia? E se for impossível atribuir-lhe qualquer impressão sensorial, isso servirá para confirmar nossa suspeita.

HUME, D. Uma investigação sobre o entendimento. São Paulo: Unesp, 2004 (adaptado).

Nos textos, ambos os autores se posicionam sobre a natureza do conhecimento humano. A comparação dos excertos permite assumir que Descartes e Hume',
'defendem os sentidos como critério originário para considerar um conhecimento legítimo.', 'entendem que é desnecessário suspeitar do significado de uma ideia na reflexão filosófica e crítica.',
'são legítimos representantes do criticismo quanto à gênese do conhecimento.','concordam que conhecimento humano é impossível em relação às ideias e aos sentidos.','atribuem diferentes lugares ao papel dos sentidos no processo de obtenção do conhecimento.','E');

CREATE TABLE SOCIOLOGIA (
    IDQUESTAO INTEGER PRIMARY KEY,
    ENUNCIADO TEXT NOT NULL,
    ALTERNATIVA_A TEXT NOT NULL,
    ALTERNATIVA_B TEXT NOT NULL,
    ALTERNATIVA_C TEXT NOT NULL,
    ALTERNATIVA_D TEXT NOT NULL,
    ALTERNATIVA_E TEXT NOT NULL,
    RESPOSTA CHAR(1)
);

INSERT INTO SOCIOLOGIA VALUES (1, 'Uma mesma empresa pode ter sua sede administrativa onde os impostos são menores, as unidades de produção onde os salários são os mais baixos, os capitais onde os juros são os mais altos e seus executivos vivendo onde a qualidade de vida é mais elevada.

SEVCENKO, N. A corrida para o século XXI: no loop da montanha russa. São Paulo: Companhia das Letras, 2001 (adaptado).

No texto estão apresentadas estratégias empresariais no contexto da globalização. Uma consequência social derivada dessas estratégias tem sido',
'o crescimento da carga tributária.','o aumento da mobilidade ocupacional.','a redução da competitividade entre as empresas.','o direcionamento das vendas para os mercados regionais.','a ampliação do poder de planejamento dos Estados nacionais.','B');

CREATE TABLE PORTUGUES (
    IDQUESTAO INTEGER PRIMARY KEY,
    ENUNCIADO TEXT NOT NULL,
    ALTERNATIVA_A TEXT NOT NULL,
    ALTERNATIVA_B TEXT NOT NULL,
    ALTERNATIVA_C TEXT NOT NULL,
    ALTERNATIVA_D TEXT NOT NULL,
    ALTERNATIVA_E TEXT NOT NULL,
    RESPOSTA CHAR(1)
);

CREATE TABLE CONTADOR (
    IDCONTADOR INTEGER PRIMARY KEY,
    CONTADOR_MATEMATICA INT,
    CONTADOR_FISICA INT,
    CONTADOR_QUIMICA INT,
    CONTADOR_BIOLOGIA INT,
    CONTADOR_HISTORIA INT,
    CONTADOR_GEOGRAFIA INT,
    CONTADOR_FILOSOFIA INT,
    CONTADOR_SOCIOLOGIA INT,
    CONTADOR_PORTUGUES INT
);

CREATE TABLE TEMA (
    IDTEMA INTEGER PRIMARY KEY,
    TEMA VARCHAR
);

INSERT INTO TEMA VALUES (1, "Matemática");
INSERT INTO TEMA VALUES (2, "Física");
INSERT INTO TEMA VALUES (3, "Química");
INSERT INTO TEMA VALUES (4, "Biologia");
INSERT INTO TEMA VALUES (5, "História");
INSERT INTO TEMA VALUES (6, "Geografia");
INSERT INTO TEMA VALUES (7, "Filosofia");
INSERT INTO TEMA VALUES (8, "Sociologia");
INSERT INTO TEMA VALUES (9, "Português");

ALTER TABLE MATEMATICA ADD COLUMN ID_TEMA INTERGER REFERENCES TEMA(IDTEMA);
ALTER TABLE FISICA ADD COLUMN ID_TEMA INTERGER REFERENCES TEMA(IDTEMA);
ALTER TABLE QUIMICA ADD COLUMN ID_TEMA INTERGER REFERENCES TEMA(IDTEMA);
ALTER TABLE BIOLOGIA ADD COLUMN ID_TEMA INTERGER REFERENCES TEMA(IDTEMA);
ALTER TABLE HISTORIA ADD COLUMN ID_TEMA INTERGER REFERENCES TEMA(IDTEMA);
ALTER TABLE GEOGRAFIA ADD COLUMN ID_TEMA INTERGER REFERENCES TEMA(IDTEMA);
ALTER TABLE FILOSOFIA ADD COLUMN ID_TEMA INTERGER REFERENCES TEMA(IDTEMA);
ALTER TABLE SOCIOLOGIA ADD COLUMN ID_TEMA INTERGER REFERENCES TEMA(IDTEMA);
ALTER TABLE PORTUGUES ADD COLUMN ID_TEMA INTERGER REFERENCES TEMA(IDTEMA);

UPDATE MATEMATICA
SET ID_TEMA = 1 WHERE IDQUESTAO = 2;
UPDATE FISICA
SET ID_TEMA = 2 WHERE IDQUESTAO = 1;
UPDATE FISICA
SET ID_TEMA = 2 WHERE IDQUESTAO = 2;
UPDATE QUIMICA
SET ID_TEMA = 3 WHERE IDQUESTAO = 1;
UPDATE BIOLOGIA
SET ID_TEMA = 4 WHERE IDQUESTAO = 1;
UPDATE HISTORIA
SET ID_TEMA = 5 WHERE IDQUESTAO = 1;
UPDATE GEOGRAFIA
SET ID_TEMA = 6 WHERE IDQUESTAO = 1;
UPDATE FILOSOFIA
SET ID_TEMA = 7 WHERE IDQUESTAO = 1;
UPDATE SOCIOLOGIA
SET ID_TEMA = 8 WHERE IDQUESTAO = 1;
UPDATE PORTUGUES
SET ID_TEMA = 9 WHERE IDQUESTAO = 1;

INSERT INTO CONTADOR VALUES (1,1,0,0,0,0,0,0,0,0);

SELECT ENUNCIADO, ALTERNATIVA_A, ALTERNATIVA_B, ALTERNATIVA_C, ALTERNATIVA_D, ALTERNATIVA_E, RESPOSTA, TEMA.TEMA
FROM PORTUGUES
INNER JOIN TEMA
ON ID_TEMA = TEMA.IDTEMA
WHERE IDQUESTAO = 1;

CREATE TRIGGER UPT_MAT_COUNT AFTER INSERT ON MATEMATICA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_MATEMATICA = CONTADOR_MATEMATICA + 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER UPT_FIS_COUNT AFTER INSERT ON FISICA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_FISICA = CONTADOR_FISICA + 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER UPT_QUIM_COUNT AFTER INSERT ON QUIMICA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_QUIMICA = CONTADOR_QUIMICA + 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER UPT_BIO_COUNT AFTER INSERT ON BIOLOGIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_BIOLOGIA = CONTADOR_BIOLOGIA + 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER UPT_HIST_COUNT AFTER INSERT ON HISTORIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_HISTORIA = CONTADOR_HISTORIA + 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER UPT_GEO_COUNT AFTER INSERT ON GEOGRAFIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_GEOGRAFIA = CONTADOR_GEOGRAFIA + 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER UPT_FILO_COUNT AFTER INSERT ON FILOSOFIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_FILOSOFIA = CONTADOR_FILOSOFIA + 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER UPT_SOCIO_COUNT AFTER INSERT ON SOCIOLOGIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_SOCIOLOGIA = CONTADOR_SOCIOLOGIA + 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER UPT_PORT_COUNT AFTER INSERT ON PORTUGUES
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_PORTUGUES = CONTADOR_PORTUGUES + 1
    WHERE IDCONTADOR = 1;
END;

-- ======================================================================================================================

CREATE TRIGGER DEL_MATH_COUNT AFTER DELETE ON MATEMATICA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_MATEMATICA = CONTADOR_MATEMATICA - 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER DEL_FIS_COUNT AFTER DELETE ON FISICA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_FISICA = CONTADOR_FISICA - 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER DEL_QUIM_COUNT AFTER DELETE ON QUIMICA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_QUIMICA = CONTADOR_QUIMICA - 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER DEL_BIO_COUNT AFTER DELETE ON BIOLOGIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_BIOLOGIA = CONTADOR_BIOLOGIA - 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER DEL_HIST_COUNT AFTER DELETE ON HISTORIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_HISTORIA = CONTADOR_HISTORIA - 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER DEL_GEO_COUNT AFTER DELETE ON GEOGRAFIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_GEOGRAFIA = CONTADOR_GEOGRAFIA - 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER DEL_FILO_COUNT AFTER DELETE ON FILOSOFIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_FILOSOFIA = CONTADOR_FILOSOFIA - 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER DEL_SOCIO_COUNT AFTER DELETE ON SOCIOLOGIA
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_SOCIOLOGIA = CONTADOR_SOCIOLOGIA - 1
    WHERE IDCONTADOR = 1;
END;

CREATE TRIGGER DEL_PORT_COUNT AFTER DELETE ON PORTUGUES
BEGIN

    UPDATE CONTADOR
    SET CONTADOR_PORTUGUES = CONTADOR_PORTUGUES - 1
    WHERE IDCONTADOR = 1;
END;
