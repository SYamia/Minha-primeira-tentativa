#include<iostream>
#include <locale.h>
#include <STDLIB.h>
using namespace std;

int main(){
setlocale (LC_ALL,"portuguese");
int passo,Classe;
string nomePlayer;
int i,HPPLAYER,HITBOSS;
int proxPasso,HIT;
float HPBOSS,HPMOB;		
int xpBOSS,xpPLAYER;		
int entrada,escolha;
	
	
	xpBOSS = 50;
	xpPLAYER = 0;
	
	cout<<"Em um lugar onde todas as pessoas possuem poderes m�gicos, a disputa para se tornar o mago mais poderoso e, por consequ�ncia, o Rei Mago � intensa."<<endl;
	cout<<"Bem Vindo(a) nobre jogador, voc� esta no Reino M�gico! "<<endl;
	cout<<" \n";
	cout<<"Escolha seu nome de invocador e venha fazer parte desta aventura : ";
	cin>>nomePlayer;
	
			
	
	cout<<endl<<"Digite 1 para Classe Swordman ou Digite 2 para Classe Explorer: ";
	cin>>Classe;
				
	switch (Classe){	
	case 1:
		cout<<" "<<endl;
		cout<<  nomePlayer <<" Escolheu a classe Swordman e seus atributos m�gicos s�o: "<<endl<<"STR: 60"<<endl<<"AGI: 50"<<endl<<"Power 2500"<<endl;
		cout<<" "<<endl;
		break;
	case 2:
		cout<<  nomePlayer <<" Escolheu a classe Explorer e seus atributos m�gicos s�o: "<<endl<<"CON: 60"<<endl<<"SPR: 50"<<endl<<"Power Magic 2500"<<endl;
		cout<<" "<<endl;
		break;
			default:
			cout<<" "<<endl;
			cout<<"Voce nao pode escolher essa classe ainda"<<endl;
				for(i;Classe >2 ;i++){
	
					if(Classe != 1&&2){
					cout<<"Escolha novamente entre 1 e 2: ";
					cin>>Classe;
					}			
			}
	}	
	
	
	cout<< nomePlayer << " Seja Bem vindo(a) ao Reino M�gico, aqui voc� ficar� entre a vida e a morte HAHAHAH"<<endl;
	cout<<" "<<endl;
    cout<<"Sua primeira miss�o ser� lutar contra um BOSS, mas antes voc� vai ganhar sua reliquia m�gica.\n";
	cout<<"Escolha  de 1 a 3 e teste sua sorte!: ";
	cin>>passo;
		
switch (passo){
	case 1:	
		cout<<nomePlayer<<" Voce encontrou a Sword of Demons"<<endl;
		cout<<" "<<endl;
		break;
	case 2:
		cout<<nomePlayer<<" Voce encontrou o Bow dos Elfos "<<endl;	
		cout<<" "<<endl;
		break;
	case 3:
		cout<<nomePlayer<<" Recebeu o Shield of Aegis"<<endl;	
		cout<<" "<<endl;
		break;
			default:
			cout<<nomePlayer<< " caiu em uma armadilha e perdeu hp"<<endl;
			
		}
		
	if(passo <= 3){
    	cout<<" "<<endl;
		cout<<"O rei Licht acordou! "<<endl;			
		cout<<" "<<endl;							
		cout<<nomePlayer<< " O Rei Licht se teleportou pra sua frente "<<endl;		
		cout<<" N�o tem como voc� escapar! ME ENFRENTE!!!! "<<nomePlayer<<endl;
		cout<<" "<<endl;														
		cout<<"escolha um ataque para ferir o boss Licht, mas voc� tem 3 op��es e uma delas te levar� ao fracasso, tente advinhar! "<<endl;
		cout<<"Escolha entra 1-3: ";
		cin>>HIT;
				
}

					
	switch (HIT){
		case 1:
			HIT = 4;
			HPBOSS = 4;
			HPBOSS = (HPBOSS - HIT);
			cout<<" "<<endl;
			cout<< nomePlayer <<" Usou sua a habilidade Illusion Slash deixando o boss com "<<HPBOSS<< " de hp "<<endl;
		break;							
		case 2:
			HIT = 4;
			HPBOSS = 6;
			HPBOSS = (HPBOSS - 2 ) - HIT;
			cout<<" "<<endl;
			cout<< nomePlayer << " Utilizou sua habilidade Illusion Slash e acertou um dano cr�tico deixando o boss com "<<HPBOSS<< " de hp"<<endl;
		break;
		case 3:
			HITBOSS = 1000;
			HPPLAYER = 5;
			HPPLAYER = (HPPLAYER - HITBOSS);
			cout<<" "<<endl;
			cout<<	"Voc� n�o foi capaz de combater o boss, ele o hitou deixando o(a) "<<nomePlayer<< " com " <<HPPLAYER<<" de vida, espere 50 segundos para come�ar novamente. "<<endl;
		break;
			default:
			cout<<" "<<endl;	
			cout<<"Voc� errou o Rei Licht, ataque-o novamente"<<endl;
		for(i;HIT != 1&&2&&3;i++){
				cout<<"Escolha de 1-3 para atacar: ";
				cin>>HIT;
		}
		
		
				if (HPPLAYER <= 0){
					cout<<" "<<endl;
					cout<< "GAME OVER"<<endl;
				}	

	}	
					if(HPBOSS <= 0){
						xpPLAYER = (xpPLAYER + xpBOSS);	
						cout<<" "<<endl;
						cout<<nomePlayer<<" Venceu o Rei Licht da torre e recebeu muitas recompensas, e ganhou a chave para evoluir sua classe"<<endl<<"E tambem receu "<<xpBOSS<<" DE XP, acumulando um total de : " <<xpPLAYER<<" De XP com este personagem"<<endl;	
		
							if (xpPLAYER >= 50){
								cout<<" "<<endl;
								cout<<"O Player "<<nomePlayer<<" Subiu de level "<<endl;
							}		 
 					}		
		

	if(HPPLAYER >= 1){
	
		cout<<" "<<endl;
		cout<<" "<<endl;
		cout<<"--**Voc� chegou na segunda fase**--"<<endl;
		cout<<"Escolha de 1 - 3 para abrir um ba�: ";
		cin>>passo;


			switch (passo){
				case 1:	
					cout<<" "<<endl;
					cout<<nomePlayer<<" Voce encontrou a Armadura anti-Demonios"<<endl;
					break;
				case 2:
					cout<<" "<<endl;
					cout<<nomePlayer<<" Voce encontrou a Luva m�gica "<<endl;	
					break;
				case 3:
					cout<<" "<<endl;
					cout<<nomePlayer<<" Voc� encontrou a Sword of Aegis"<<endl;	
					break;
						default:
							cout<<nomePlayer<< " caiu em uma armadilha"<<endl;
}
 		cout<<" "<<endl;
		cout<<"Voc� foi movido para a sala do ...?"<<endl;
		cout<<" "<<endl;
		cout<<"Digite 1 para continuar: ";	
		cin>>passo;


		switch(passo){
			case 1:	
				cout<<" "<<endl;
				cout<<nomePlayer<<" Caiu em uma armadilha e foi teleportado para o sagu�o do boss!"<<endl;
				cout<<" "<<endl;
				break;
	
		}
			if(passo = 1){
				cout<<"O Rei Mago Julius Nova Chrono apareceu!"<<endl;
				cout<<" ";
				cout<<"Voc� quer enfrenta-l� ?"<<endl;
				cout<<"Digite 1 para sim e 2 para n�o: ";
					cin>>escolha;		
			}
				if (escolha = 1)		
					cout<<"Voc� � corajoso garoto, endagou Julius Nova Chrono  "<<endl;
					cout<<" "<<endl;
					cout<<"N�o esque�a que eu nao sou como o Licht que voc� derrotou acima!"<<endl;
					cout<<" "<<endl;
					cout<<"Escolha de 1 - 3 para atacar Julius Nova Chrono: "<<endl;
					cin>>HIT;
	}
						switch(HIT){
							case 1:
							HPBOSS = 1000;
							HIT = 500;
							HPBOSS = (HPBOSS - HIT);
							cout<< nomePlayer <<" Usou sua a habilidade Illusion Slash deixando Julius Nova Chrono com "<<HPBOSS<< " de hp "<<endl;	
							break;
	
						}
	
							if(HPBOSS > 0){
								cout<<"Voc� n�o � pareo pra mim, garoto."<<endl;
								cout<<" "<<endl;
								cout<<"O Rei Mago Julius Nova Chrono usa sua magia do tempo no "<<nomePlayer<<" e tudo fica em silencio..."<<endl;
								cout<<" ";
								cout<<"De repente uma misteriosa maga GOSTOSA UI UI chamada Coca aparece stunando o Rei Mago e ajudando o(a) "<<nomePlayer<<" a fugir do local."<<endl;
							
							}
								
						cout<<nomePlayer<<" acorda todo ferido entre a vida e a morte, fugir do Rei Mago n�o foi nada facil, por consequ�ncia disso n�o lhe restou nada.\n Voc� perdeu todos seus itens e level restando apenas a chave para mudan�a de classe";
	
	
	
	}
	
	





































				
