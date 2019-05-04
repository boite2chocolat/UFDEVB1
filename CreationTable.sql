SET ECHO ON 


drop table RECHERCHE cascade constraints
/

drop table UTILISATEUR cascade constraints
/

drop table FAMILLE cascade constraints
/

drop table DATE1 cascade constraints

/

drop table POSSEDE cascade constraints
/

drop table INFORMATIONS cascade constraints
/

drop table PLANTE_POSSEDEES cascade constraints
/

drop table PLANTES cascade constraints
/
create table UTILISATEUR
(
    ID_UTILISATEUR       INTEGER                not null,
    NOM_UTILISATEUR      VARCHAR2(15)           not null,
    PRENOM_UTILISATEUR   VARCHAR2(15)           not null,
    MAIL_UTILISATEUR     VARCHAR2(15)           not null,
    ID_PLANTE_POSSEDEES      INTEGER              not null,
    constraint PK_UTILISATEUR primary key (ID_UTILISATEUR)
)
/
create table RECHERCHE
(
    ID_UTILISATEUR         INTEGER              not null,
    ID_PLANTE              INTEGER              not null,
    constraint PK_RECHERCHE primary key (ID_UTILISATEUR,ID_PLANTE)
)
/
create table FAMILLE
(
    ID_FAMILLE             INTEGER              not null,
    NOM_FAMILLE            VARCHAR2(10)         not null,
    ID_PLANTE         INTEGER                    not null,
    constraint PK_FAMILLE primary key (ID_FAMILLE)
)
/
create table DATE1
(
    ID_DATE                INTEGER              not null,
    JOUR                   DATE                 not null,
    constraint PK_DATE primary key (ID_DATE)
)
/

create table PLANTE_POSSEDEES
(
    ID_PLANTE_POSSEDEES    INTEGER               not null,
    NOM_PLANTE_POSSEDEE   VARCHAR2(10)          not null,
    constraint PK_POSSEDEES primary key (ID_PLANTE_POSSEDEES)
)
/
create table POSSEDE
(
    ID_PLANTE_POSSEDEE      INTEGER              not null,
    ID_INFORMATION         INTEGER              not null,
    ID_DATE                INTEGER              not null,
    ID_FAMILLE       	   INTEGER              not null,
    constraint PK_RUE primary key (ID_PLANTE_POSSEDEE,ID_INFORMATION,ID_DATE,ID_FAMILLE)
)
/
create table INFORMATIONS
(
    ID_INFORMATION        INTEGER               not null,
    HUMIDITE_PLANTE       Number(3)             not null,
    TEMPERATURE_PLANTE    Number(2)             not null,
    constraint PK_INFORMATIONS primary key (ID_INFORMATION)
)
/

create table PLANTES
(
    ID_PLANTE         INTEGER                    not null,
    NOM_PLANTE        VARCHAR2(10)               not null,
    DESC_PLANTE       VARCHAR2(100)              not null,
    HUMIDITE          INTEGER                    not null,
    TEMPERATURE       INTEGER                    not null,
    LUMINOSITE        INTEGER                    not null,
    Floraison         VARCHAR2(20)               not null,
    constraint PK_PLANTES primary key (ID_PLANTE)
)
/
alter table UTILISATEUR
    add constraint FK_UTILISATEUR_PPS foreign key  (ID_PLANTE_POSSEDEES)
       references PLANTE_POSSEDEES (ID_PLANTE_POSSEDEES)
/
alter table RECHERCHE
    add constraint FK_UTILISATEUR_RECHERCHE foreign key  (ID_UTILISATEUR)
       references UTILISATEUR (ID_UTILISATEUR)
/

alter table RECHERCHE
    add constraint FK_RECHERCHE_PLANTE foreign key  (ID_PLANTE)
       references PLANTES (ID_PLANTE)
/

alter table FAMILLE
    add constraint FK_FAMILLE_PLANTES foreign key  (ID_PLANTE)
       references PLANTES (ID_PLANTE)
/

alter table POSSEDE
    add constraint FK_POSSEDE_DATE1 foreign key  (ID_DATE)
       references DATE1 (ID_DATE)
/

alter table POSSEDE
    add constraint FK_POSSEDE_FAMILLE foreign key  (ID_FAMILLE)
       references FAMILLE (ID_FAMILLE)
/

--alter table POSSEDE
--   add constraint FK_POSSEDE_ PLANTE_POSSEDEES  foreign key  (ID_PLANTE_POSSEDEES)
--       references PLANTE_POSSEDEES (ID_PLANTE_POSSEDEES)
--/

--alter table POSSEDE
--    add constraint FK_POSSEDE_ INFORMATIONS foreign key  (ID_INFORMATION)
--       references INFORMATIONS (ID_INFORMATION)
--/


--select * from PLANTES;
--select * from UTILISATEUR;
--ALTER TABLE UTILISATUR 
--DROP COLUMN MAIL_UTILISATEUR ;
	