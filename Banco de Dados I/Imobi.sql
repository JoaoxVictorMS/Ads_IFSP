-- TRABALHO FEITO POR: João Victor e Pedro Daisuke --

-- Criando schema
CREATE SCHEMA imobi COLLATE = utf8_general_ci;

-- Selecionano o schema criado
USE imobi;

/*
drop schema imobi;
*/

/* ******* 
*** 1) CRIANDO TABELAS ****
******** */

-- Criando tabela Pessoa
CREATE TABLE Pessoa (
	idPessoa INT PRIMARY KEY,
    NomePessoa VARCHAR(45),
    rua VARCHAR (45),
    numero VARCHAR (45),
    bairro VARCHAR (45),
    CEP VARCHAR (8),
    idCidade INT
);

-- Criando tabela Estado
CREATE TABLE ESTADO(
	UF CHAR (2) PRIMARY KEY,
    nomeEstado VARCHAR (45)
);

-- Criando tabela Cidade
CREATE TABLE CIDADE(
	idCidade INT PRIMARY KEY,
    nomeCidade VARCHAR (45),
    UF char(2)
);

-- Criando as Foreign Keys de Cidade e Estado com o ALTER TABLE
ALTER TABLE CIDADE ADD CONSTRAINT fk_estado_Uf
      FOREIGN KEY (UF) REFERENCES ESTADO(UF);

ALTER TABLE PESSOA ADD CONSTRAINT fk_cidadeIdCidade
            FOREIGN KEY (idCidade) REFERENCES CIDADE(idCidade);
          
-- Criando tabela Inqulino
CREATE TABLE INQUILINO(
	idInquilino INT PRIMARY KEY,
    rendaMensal DECIMAL (9,2),
    qtdeFilhos INT,
    idPessoa INT,
		CONSTRAINT fkPessoa_idPessoa  
		FOREIGN KEY(idPessoa) REFERENCES PESSOA(idPessoa) 
);

-- Criando tabela Imovel
CREATE TABLE IMOVEL(
	idImovel INT PRIMARY KEY,
    descricaoImovel VARCHAR(100),
    qtdeComodos INT,
    garagem BOOLEAN,
    dataConstrucao DATE,
    rua VARCHAR(45),
    numero VARCHAR(45),
    bairro VARCHAR(45),
    CEP VARCHAR(45),
    idCidade INT,
    	CONSTRAINT fk_cidade_estado_Uf 
        FOREIGN KEY(idCidade) REFERENCES CIDADE(idCidade)
);

-- Criando tabela EstadoCivil
CREATE TABLE ESTADOCIVIL(
	idEstadoCivil INT PRIMARY KEY,
    EstadoCivil VARCHAR(45)
);

-- Criando tabela Fiador
CREATE TABLE FIADOR(
	idFiador INT PRIMARY KEY,
    RendaFiador DECIMAL (9,2),
    idPessoa INT,
    idEstadoCivil INT,
    
		CONSTRAINT fk_Pessoa_idPessoa  
        FOREIGN KEY(idPessoa) REFERENCES Pessoa(idPessoa),

		CONSTRAINT fk_EstadoCivil_idEstadoCivil   
        FOREIGN KEY(idEstadoCivil) REFERENCES ESTADOCIVIL (idEstadoCivil)
);

-- A) Alterando a tabela de Fiador adicionando a data de nascimento
ALTER TABLE FIADOR ADD DataNascimento DATE;

-- Criando tabela Contrato
CREATE TABLE CONTRATO(
	idContrato INT PRIMARY KEY,
    ValorContratoMes DECIMAL (9,2),
    DataContrato DATE,
    DataFimContrato DATE,
    
    idImovel INT,
    idFiador INT,
    idInquilino INT,

		CONSTRAINT fk_Imovel_idImovel  
        FOREIGN KEY(idImovel) REFERENCES IMOVEL(idImovel),

		CONSTRAINT fk_Fiador_idFiador   
        FOREIGN KEY(idFiador) REFERENCES FIADOR (idFiador),
        
        CONSTRAINT fk_Inquilino_idInquilino  
        FOREIGN KEY(idInquilino) REFERENCES INQUILINO(idInquilino)

);

/* ******* 
*** 2) INSERINDO DADOS ****
******** */

-- Inserindo dados na tabela Estado
INSERT INTO ESTADO (UF, nomeEstado) VALUES 
    ('AC', 'Acre'),
    ('AL', 'Alagoas'),
    ('AP', 'Amapá'),
    ('AM', 'Amazonas'),
    ('BA', 'Bahia'),
    ('CE', 'Ceará'),
    ('DF', 'Distrito Federal'),
    ('ES', 'Espírito Santo'),
    ('GO', 'Goiás'),
    ('MA', 'Maranhão'),
    ('MT', 'Mato Grosso'),
    ('MS', 'Mato Grosso do Sul'),
    ('MG', 'Minas Gerais'),
    ('PA', 'Pará'),
    ('PB', 'Paraíba'),
    ('PR', 'Paraná'),
    ('PE', 'Pernambuco'),
    ('PI', 'Piauí'),
    ('RJ', 'Rio de Janeiro'),
    ('RN', 'Rio Grande do Norte'),
    ('RS', 'Rio Grande do Sul'),
    ('RO', 'Rondônia'),
    ('RR', 'Roraima'),
    ('SC', 'Santa Catarina'),
    ('SP', 'São Paulo'),
    ('SE', 'Sergipe'),
    ('TO', 'Tocantins');

-- Inserir as capitais de cada estado 
INSERT INTO CIDADE (idCidade, nomeCidade, UF) VALUES 
    (1, 'Macapá', 'AP'), -- Amapá
    (2, 'Maceió', 'AL'), -- Alagoas
    (3, 'Aracaju', 'SE'), -- Sergipe
    (4, 'Belém', 'PA'), -- Pará
    (5, 'Brasília', 'DF'), -- Distrito Federal
    (6, 'Boa Vista', 'RR'), -- Roraima
    (7, 'Belo Horizonte', 'MG'), -- Minas Gerais
    (8, 'Campo Grande', 'MS'), -- Mato Grosso do Sul
    (9, 'Cuiabá', 'MT'), -- Mato Grosso
    (10, 'Curitiba', 'PR'), -- Paraná
    (11, 'Florianópolis', 'SC'), -- Santa Catarina
    (12, 'Fortaleza', 'CE'), -- Ceará
    (13, 'Goiânia', 'GO'), -- Goiás
    (14, 'João Pessoa', 'PB'), -- Paraíba
    (15, 'Manaus', 'AM'), -- Amazonas
    (16, 'Natal', 'RN'), -- Rio Grande do Norte
    (17, 'Palmas', 'TO'), -- Tocantins
    (18, 'Porto Alegre', 'RS'), -- Rio Grande do Sul
    (19, 'Porto Velho', 'RO'), -- Rondônia
    (20, 'Recife', 'PE'), -- Pernambuco
    (21, 'Rio Branco', 'AC'), -- Acre
    (22, 'Rio de Janeiro', 'RJ'), -- Rio de Janeiro
    (23, 'Salvador', 'BA'), -- Bahia
    (24, 'São Luís', 'MA'), -- Maranhão
    (25, 'São Paulo', 'SP'), -- São Paulo
    (26, 'Teresina', 'PI'); -- Piauí

-- Inserindo dados na tabela Pessoa
INSERT INTO Pessoa (idPessoa, NomePessoa, rua, numero, bairro, CEP, idCidade) 
VALUES (1, 'Pedro', 'Ribeirão Pires', 165, 'Sebastião Morais', 15807344, 23),
	   (2, 'João', 'Tocantim', 180, 'Glória ', 15807000, 19),
       (3, 'Ana', 'Santo Antonio', 203 , 'Bosque das Laranjeiras',15805240, 5),
	   (4 , 'Felipe','Avenida Brasil', 500 , 'Jardim do Lago', 15801420, 2),
       (5 , 'Guilherme', 'São Pedro',300  , 'Jardim dos Coqueiros', 15811000, 15),
       (6 , 'Sabrina', 'São João', 706 , 'Jardim Salles',15804285, 11),
       (7 , 'Luiz', 'Sete de Setembro', 40 , 'Parque Cambuí', 15804435, 22),
       (8, 'Alex','Quinze de Novembro',100  , 'Parque Iracema', 15800160, 7),
       (9 , 'Daniel', 'Tiradentes', 305 , 'Quilômetro Sete', 15811100, 10),
       (10 , 'Ricardo', 'Santa Catarina', 604 , 'Residencial Acapuco',15804400,13);


-- Inserindo dados na tabela Inquilino
INSERT INTO INQUILINO(idInquilino, rendaMensal, qtdeFilhos, idPessoa)
VALUES (1 ,1000 ,1 , 1),
	   (2 ,4000 ,3, 2),
       (3 ,3000 ,4 , 3),
       (4 ,2000 ,2, 4),
       (5 ,1500 ,2 , 5),
       (6 ,6300 ,1 , 6),
       (7 ,7000 ,3 , 7),
       (8 ,8150 ,2 , 8),
       (9 ,10000 ,2 , 9),
       (10 ,13500 ,1 , 10);    
       
-- Inserindo dados na tabela EstadoCivil
INSERT INTO ESTADOCIVIL (idEstadoCivil, EstadoCivil) VALUES 
    (1, 'Solteiro'),
    (2, 'Casado'),
    (3, 'Divorciado'),
    (4, 'Viúvo'),
    (5, 'União Estável');	
    
-- Inserindo dados na tabela Imovel
INSERT INTO IMOVEL (idImovel, descricaoImovel, qtdeComodos, garagem, dataConstrucao, rua, numero, bairro, CEP, idCidade) VALUES 
    (1, 'Casa espaçosa', 5, TRUE, '2020-01-01', 'Av. Lídia Thomaz', '534', ' City Bussocaba', '06040270', 3),
    (2, 'Apartamento tipo studio', 3, FALSE, '2018-05-10', 'Av. Ipiranga', '102 ', 'República', '01046010', 2),
    (3, 'Cobertura com vista', 4, TRUE, '2019-08-20', 'R. Ezequiel Freire', '196', 'Santana', '02034000', 10),
    (4, 'Casa no campo', 6, TRUE, '2017-03-15', 'R. dos Girassóis', '116', 'Talhado', '15102004', 4),
    (5, 'Apartamento loft', 2, FALSE, '2021-11-05', 'R. José Kauer', '55', 'Brás', '03019020', 8),
    (6, 'Casa familiar', 4, TRUE, '2016-12-12', 'R. Planalto de Araxá', '288 ', 'Jardim Gonzaga', '03756020', 6),
    (7, 'Apartamento com varanda', 3, TRUE, '2020-09-30', 'Av. Andrômeda', '5573', 'Alphaville Empresarial', '06473000', 8),
    (8, 'Cobertura de luxo', 7, TRUE, '2019-04-25', 'Av. Lúcio Costa', ' 6770', 'Barra da Tijuca', '22630013', 9),
    (9, 'Casa de praia', 4, TRUE, '2018-07-07', 'Av. Vicente de Carvalho,', '79', 'José Menino', '11045501', 10),
    (10, 'Apartamento no centro', 2, FALSE, '2022-02-02', 'Av. Central', '80', 'Downtown', '99999999', 7);
    
    
-- Inserindo dados na tabela Fiador
INSERT INTO FIADOR (idFiador, RendaFiador, idPessoa, idEstadoCivil, DataNascimento) VALUES 
    (1, 7000.00, 1, 2, '1965-05-21'),
    (2, 5500.00, 2, 1, '1967-08-12'),
    (3, 8000.00, 3, 3, '2004-03-12'),
    (4, 7200.00, 4, 4, '2002-06-26'),
    (5, 5000.00, 5, 5, '1939-03-12'),
    (6, 7500.00, 6, 2, '1943-11-21'),
    (7, 6000.00, 7, 1, '1975-11-06'),
    (8, 9000.00, 8, 3, '1970-11-21'),
    (9, 6200.00, 9, 4, '1965-11-21'),
    (10, 8500.00, 10, 5, '2010-06-17');


    
-- Inserindo dados na tabela Contrato
INSERT INTO CONTRATO (idContrato, ValorContratoMes, DataContrato, DataFimContrato, idImovel, idFiador, idInquilino) VALUES 
    (1, 2500.00, '2020-01-01', '2022-01-01', 1, 1, 1),
    (2, 1800.00, '2010-02-15', '2014-02-15', 2, NULL, 2),
    (3, 3000.00, '2005-03-20', '2009-03-20', 3, 3, NULL),
    (4, 2700.00, '2021-04-10', NULL, 4, 4, 4),
    (5, 2000.00, '2019-05-05', '2021-05-05', 5, NULL, 5),
    (6, 3200.00, '2015-06-23', '2017-06-23', 6, 6, NULL),
    (7, 2800.00, '1995-07-30', NULL, 7, 7, 7),
    (8, 3500.00, '2023-08-18', '2024-08-18', 8, 8, 8),
    (9, 2900.00, '2023-09-09', '2024-09-09', 9, 9, 9),
    (10, 3800.00, '2023-10-12', NULL, 10, 10, 10);
    

/* ******* 
*** 3) COMANDOS DML ****
******** */

-- Atualizando o endereço de três pessoas
UPDATE Pessoa
SET rua = 'Rua Pereira Barreto', numero = '19', bairro = 'Parque Iracema', CEP = '15809065'
WHERE idPessoa IN (1);

UPDATE Pessoa
SET rua = 'Avenida Copacabana', numero = '291', bairro = '18 do Forte Empresarial', CEP = '06472001'
WHERE idPessoa IN (2);

UPDATE Pessoa
SET rua = 'Rua Itabaiana', numero = '101', bairro = 'Conj. Hab. Antônio Záccaro', CEP = '15808320'
WHERE idPessoa IN (3);

-- Atualizando a quantidade de cômodos de 2 imóveis
UPDATE IMOVEL
SET qtdeComodos = 6
WHERE idImovel IN (1);

UPDATE IMOVEL
SET qtdeComodos = 2
WHERE idImovel IN (2);

-- Deletando uma cidade cadastrada
DELETE FROM CIDADE
WHERE idCidade = 17;

-- Deletando um imóvel cadastrado
DELETE FROM CONTRATO
WHERE idImovel = 4;

DELETE FROM IMOVEL
WHERE idImovel = 4;


/* ******* 
*** 4) COMANDOS SELECT ****
******** */

-- A) Selecionando todas as pessoas Cadastradas no BD.
SELECT * 
FROM Pessoa;

-- B) Selecionando todos os fiadores que possuem data de nascimento acima do ano de 1990.
SELECT *
FROM FIADOR
WHERE (DataNascimento > '1990-01-01');

-- C) Selecionando todos os imóveis que não possuem garagem
SELECT *
FROM IMOVEL
WHERE (garagem = FALSE);

-- D) Selecionando todos os contratos com a Data fim do Contrato não preenchidas
SELECT idContrato, DataFimContrato
FROM CONTRATO
WHERE DataFimContrato IS NULL;

-- E) Selecionando todos as informações dos contratos juntamente com as informações dos inquilinos, fiadores e endereço dos imóveis
SELECT 
    CONTRATO.*,
    INQUILINO.*,
    FIADOR.*,
    IMOVEL.*
FROM CONTRATO
INNER JOIN INQUILINO ON CONTRATO.idInquilino = INQUILINO.idInquilino
INNER JOIN FIADOR ON CONTRATO.idFiador = FIADOR.idFiador
INNER JOIN IMOVEL ON CONTRATO.idImovel = IMOVEL.idImovel;

-- F) Selecionando o valor do maior contrato de aluguel
SELECT MAX(ValorContratoMes)
FROM CONTRATO;

-- G) Selecionando o valor médio do contrato de aluguel
SELECT AVG(ValorContratoMes) AS media_Contrato
FROM CONTRATO;

-- H)Selecionando as informações de todos os contratos e dos inquilinos que possuem alugueis superiores a média
SELECT *
FROM CONTRATO
INNER JOIN INQUILINO ON CONTRATO.idInquilino = INQUILINO.idInquilino
WHERE CONTRATO.ValorContratoMes > (
    SELECT AVG(ValorContratoMes) FROM CONTRATO
);

-- I) Selecionando os valores dos contratos atuais e o valor acrescido de 12% de aumento
SELECT ValorContratoMes AS ValorAtual,
		ValorContratoMes * 1.12 AS Valor12PorCento,
        DataContrato
FROM CONTRATO
WHERE  DataContrato > '2022-12-30';

-- J) Selecionando todos os inquilinos cadastrados que não possuem alugueis
SELECT *
FROM INQUILINO
RIGHT JOIN CONTRATO ON INQUILINO.idInquilino = CONTRATO.idInquilino
WHERE INQUILINO.idInquilino IS NULL;

-- K) Selecionando todos os fiadores cadastrados mesmo os que não possuem contratos ativos
SELECT *
FROM FIADOR
LEFT JOIN CONTRATO ON FIADOR.idFiador = CONTRATO.idFiador