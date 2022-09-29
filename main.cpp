#include <iostream>
#include <cstdlib>
#include <limits.h>

using namespace std;

void es1();
void es2();
void es3();
void es4();
void es5();
void es20();
void es31();
void es47();
void es61();
void es62();
struct struct_elenco{
  string nome; 
  int classe;
  int votoFinale;
};

int main()
{
   int scelta;
   do{
     cout << endl<< endl;
     cout <<"1. Caricare un vettore di N elementi con valori letti da tastiera"<< endl;
     cout << "2. Costruire un vettore di N elementi, inserendo in ogni elemento il valore del suo indice" <<endl;
     cout <<"3. Caricare un vettore di N elementi, stampando la somma dei suoi elementi" <<endl;
     cout <<"4. Dato un vettore di N elementi, determinare se ciascun elemento è pari o dispari "<<endl;
     cout << "5.Caricare un vettore di N elementi. Scorrendo il vettore, al primo zero incontrato stampare la somma di tutti gli elementi considerati e il loro numero"<<endl;
     cout <<"20.Nei vettori A e B, ciascuno di N elementi, sono memorizzate due parole di N caratteri ciascuna, un carattere per ogni elemento di vettore. Verificare se le due parole sono uguali ed in caso contrario determinare quale delle due parole precede l'altra nell'ordine alfabetico. "<<endl;
     cout<<"31 Stampare il calendario del 1990 sapendo che l'ultimo giorno del 1989 era domenica."<<endl;
     
     cout<<"47. È dato un elenco di N studenti con nome, classe, voto finale. Stampare il voto più basso, quello più alto e il nome e la classe degli studenti ai quali appartengono. Calcolare la media aritmetica dei voti e verificare se è sufficiente o insufficiente (<6). Stampare nome e classe degli studenti che hanno il voto finale inferiore alla media aritmetica dei voti. Contare il numero dei promossi e dei respinti e calcolarne le rispettive percentuali. Stampare l'elenco dei promossi cioè di coloro che hanno il voto finale sufficiente. "<<endl;
     cout <<"61 Dato un vettore numerico di n elementi determinare qual e' l'elemento (o gli elementi) che si ripete piu' volte e quante volte si ripete. "<<endl;
     
     cout<<"62. Cercare un elemento X nella porzione di vettore delimitata da due indici (non negativi per ipotesi)"<<endl;
    
     

     cout << "0. fine" << endl;
     cin >> scelta;
     if (cin.fail()){
      cout << "wrong number " <<endl;
      cin.clear();
      scelta=-1;
     }else {

        switch(scelta) {
      case 0:
         cout << "good bye"<<endl;
         break;
      case 1:
        es1();
         break;
      case 2:
         es2();
         break;
      case 3:
         es3();
         break;
      case 4:
         es4();
         break;
      case 5:
         es5();
         break;
      case 20:
         es20();
         break;
      case 31:
         es31();
         break;
      case 47:
         es47();
         break;
       case 61:
         es61();
         break; 
      case 62:
         es62();
         break; 
      default:
         cout << "wrong choice"<<endl;
        }
     }
      if (scelta!=0){
         string avanti;
         cout<<"scrivi un carattere e digita invio"<<endl;
         cin >> avanti;
      }
   } while(scelta != 0);

    return 0;
}
void es1() {
   //tutti gli esercizi cominciano così
  int  N=100; // qua solo cinque perche dobbiamo metterli a mano
  int v[N];// cambiando il valore di N cambia la dimensione del vettore
  //Caricare un vettore di N elementi con valori letti da tastiera.
  cout<<"inserisci "<<N<<" numeri interi (premi invio dopo ogni valore ) "<< endl;
  for (int i =0; i<N; i++) {
    cin>> v[i];
  }
   // alla fine di ogni esercizio visualizzo il/i vettore/i
   for (int i =0; i<N;i++) {
    cout<< v[i]<<" ";
  }
   cout<<"\nfatto!"<<endl;
}
void es2 () {
     //tutti gli esercizi cominciano così
  int  N=100;
  int v[N];// cambiando il valore di N cambia la dimensione del vettore
   for (int i =0; i<N; i++){
      v[i]=i;
   }
     // alla fine di ogni esercizio visualizzo il/i vettore/i
   for (int i =0; i<N;i++) {
    cout<< v[i]<<" ";
  }
   cout<<"\nfatto!"<<endl;
}
void es3 () {
      //tutti gli esercizi cominciano così
  int  N=5;
  int v[N];// cambiando il valore di N cambia la dimensione del vettore
  // carico il vettore con numeri a caso
   for (int i =0; i<N;i++){
     v[i]=rand() % 9 + 1;
   }
   // nel caricamento carico e basta
   int somma=0;
    for (int i=0; i<N; i++){
      somma= somma+v[i];
    }
    cout<<" somma= "<<somma<<endl;


      // alla fine di ogni esercizio visualizzo il/i vettore/i
   for (int i =0; i<N;i++) {
      cout<< v[i]<<" ";
   }
    cout<<"\nfatto!"<<endl;
}
void es4 () {
   //Dato un vettore di N elementi, determinare se ciascun elemento è pari o dispari (ovviamente gli elementi sono numeri interi) (l'output sarà l'elenco degli elementi del vettore con a fianco la scritta "pari" o "dispari").
       //tutti gli esercizi cominciano così
int contaValori = 20;
  int v[contaValori];
    for (int i = 0; i < contaValori; i++){
      v[i] = rand() % 100 + 1;
    }
      for(int i = 0; i < contaValori; i++){
        if(v[i] % 2 == 0){
          cout << v[i] << " pari " << endl;
        }else if(v[i] % 2 != 0){
          cout << v[i] << " dispari " << endl;
        }
      }
}
void es5 () {
   int N=100;
  int vettore[N];
  int somma=0;
  int i;
  for(i=0;i<N;i++){
      vettore[i]=rand()%10;
       cout<<vettore[i]<<" ";
  }
  cout << endl;
  i=0;
  while(vettore[i]!= 0 ){
  somma=somma+vettore[i];
  i++;
  }
cout<<"La somma è "<<somma<<endl;
cout<<"il loro numero è"<<i<<endl;
}


void es20(){
  //20.Nei vettori A e B, ciascuno di N elementi, sono memorizzate due parole di N caratteri ciascuna, un carattere per ogni elemento di vettore. Verificare se le due parole sono uguali ed in caso contrario determinare quale delle due parole precede l'altra nell'ordine alfabetico. "
  //
  //string v[5]={"m","a","r","i","o"};
  //string w[5]={"m","a","d","i","o"};
  int N;
  string v,w;
  cout<<" scrivi due parole (una per riga)"<<endl;
  
  cin>>v;
  cin>>w;
  if(v.length()<w.length()){
    N=v.length();
  }else{
    N=w.length();    
  }
  int i=0;
  while (i<N && v[i]==w[i]){  
    i++;
  } 
  if(i==N){
      if(v.length()==w.length())
    cout << "sono uguali"<<endl;
    else{
      if(v.length()<w.length())
        cout<<v<<" Precede "<<w<<endl;
      else
         cout<<w<<" Precede "<<v<<endl;
   }
  }else{
    if(v[i]>w[i]){
      cout<<w<<" precede "<<v<<endl;
    }else{
      cout<<v<<" precede "<<w<<endl;
    }
  }
}
void es31(){
    int casella[8] [7];  // lo 0 mi turba, cominciamo con 1;
  //provo a visualizzare il primo mese supponendo Domenica sia il primo giorno del mese;
   int giorniDelMese[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   string mesi[]={"","gennaio", "febbraio", "marzo", "aprile", "maggio", "giugno", "luglio", "agosto", "settembre","ottobre", "novembre","dicembre"}; 
   int settimana=1;
   int giornoIniziale=2;//giorno della settimana del primo giorno del mese
   int giornoMese=1;
   for (int m = 1; m<13; m++){
      giornoMese = 1;
      cout<<"\n"<<mesi[m]<<" 1990";
      cout<< "\n| D| L| M| M| G| V| S|"<<endl;
      for(int casella = 1; casella < giorniDelMese[m] + giornoIniziale; casella++){
            if (casella<giornoIniziale){
               cout<<"|  ";
            }else {
               if(giornoMese<10 ){
                  cout<<"| "<<giornoMese;
               }else {
                  cout<< "|"<<giornoMese;
               }
               giornoMese++;
            }// fine else
            settimana++;
            if (settimana>7){
               cout<<"| \n";
               settimana = 1;
            }
      }// fine for
     
      //cout<<"settimana "<<settimana<<endl;
     if(settimana!=1){
    
        for (int i = settimana; i<=8; i++){
           cout << "|  ";
        }
          cout<<endl;
       }
     
 
      giornoIniziale = settimana;
      settimana = 1;
   }

}

string GeneraString(int quante);
string GeneraClasse(int quante);


void es47(){
   cout << "e' dato un elenco di N studenti con nome, classe, voto finale. Stampare il voto piu' basso, quello piu' alto e il nome e la classe degli studenti ai quali appartengono. Calcolare la media aritmetica dei voti e verificare se e' sufficiente o insufficiente (<6). Stampare nome e classe degli studenti che hanno il voto finale inferiore alla media aritmetica dei voti. Contare il numero dei promossi e dei respinti e calcolarne le rispettive percentuali. Stampare l'elenco dei promossi cioe' di coloro che hanno il voto finale sufficiente. Caricare il vettore nel codice usando una struttura." << endl << endl;

  struct struct_Studente{
    string nome;
    string classe;
    float voto;
  };

  int N = 10;
  struct_Studente Studente[N];
  int quante = 2;
  int min = INT_MAX;
  int max = INT_MIN;
  int presenteMax = 0;
  int presenteMin = 0;
  float promossi = 0;
  float promossiPerc;
  float bocciati = 0;
  float bocciatiPerc;
  float media = 0;
  float somma = 0;
  for(int i = 0; i < N; i++){
    Studente[i].classe = GeneraClasse(quante);
    Studente[i].nome = GeneraString(6);
    Studente[i].voto = rand() % 9 + 1;
  }
  cout << " nome " << " classe " << " voto\n";
  for(int i = 0; i < N; i++){
    cout << Studente[i].nome << "  " << Studente[i].classe << "     " << Studente[i].voto << "\n";
  }
  for(int i = 0; i < N; i++){
    if(Studente[i].voto > max){
      max = Studente[i].voto;
    }
    if(Studente[i].voto < min){
      min = Studente[i].voto < min;
    }
    somma = somma + Studente[i].voto;
    if(Studente[i].voto > 6){
      promossi++;
    }else{
      bocciati++;
    }
  }
  media = somma / N;
  promossiPerc = promossi / N * 100;
  bocciatiPerc = bocciati / N * 100;
  for(int i = 0; i < N; i++){
    if(Studente[i].voto == max){
      presenteMax++;
    }else
    if(Studente[i].voto == min){
      presenteMin++;
    }
  }
  cout << "\n\n\nvoto piu' alto " << max << ", ";
  if(presenteMax < 2){
    cout << "studente:";
    for(int i = 0; i < N; i++){
      if(Studente[i].voto == max){
        cout << Studente[i].nome << " " << Studente[i].classe;
      }
    }
  }else{
    cout << "studenti:";
    for(int i = 0; i < N; i++){
      if(Studente[i].voto == max){
        cout << Studente[i].nome << " " << Studente[i].classe << ", ";
      }
    }
  }
cout << "\nvoto piu' basso " << min << ", ";
  if(presenteMin < 2){
    cout << "studente:";
    for(int i = 0; i < N; i++){
      if(Studente[i].voto == min){
        cout << Studente[i].nome << " " << Studente[i].classe;
      }
    }
  }else{
    cout << "studenti:";
    for(int i = 0; i < N; i++){
      if(Studente[i].voto == min){
        cout << Studente[i].nome << " " << Studente[i].classe << ", ";
      }
    }
  }
  if(media > 6){
   cout << "\nmedia: " << media << ", sufficiente\n";
  }else{
   cout << "\nmedia: " << media << ", insufficiente\n";
  }
  cout << "studenti con voto inferiore alla media:";
  for(int i = 0; i < N; i++){
    if(Studente[i].voto < media){
      cout << Studente[i].nome << " " << Studente[i].classe << ",";
    }
  }
  cout << "\npromossi " << promossi << ", percentuale promossi " << promossiPerc << "%. bocciati " << bocciati << ", percentuale bocciati " << bocciatiPerc << "%\n";
  cout << "promossi:";
  for(int i = 0; i < N; i++){
    if(Studente[i].voto > 6){
      cout << Studente[i].nome << " " << Studente[i].classe << ", ";
    }
  }
}
string GeneraClasse(int quante){
  int sezioneNum[5] = {1,2,3,4,5};
  string sezioneChar[3] = {"A","B","C"};
  string classe = "";
  for(int i = 0; i < quante; i++){
    if(i % 2 == 0){
      classe = classe + to_string(sezioneNum[rand() % 5]);
    }else if(i % 2 != 0){
      classe = classe + sezioneChar[rand () % 3];
    }
  }
  return classe;
}

string GeneraString(int quante){
  string vocali[5] = {"a","e","i","o","u"};
  string consonanti[16] = {"b","c","d","f","g","h","l","m","n","p","q","r","s","t","v","z"};
  string stringa = "";
  for(int i = 0; i < quante; i++){
    if(i % 2 != 0){
      stringa = stringa + vocali[rand() % 5];
    }else{
      stringa = stringa + consonanti[rand() % 16];
    }
  }
  return stringa;
}



void es62(){


cout << "Cercare un elemento X nella porzione di vettore delimitata da due indici (non negativi peripotesi) I due indici NON sono inclusi nella porzione. Se nella porzione ci sono piu' elementi X va visualizzato ogni elemento (se ci sono tre 5, l'ouput sara' 5 5 5).\n\n";
  int N = 20;
  int vettore[N];
  for(int i = 0; i < N; i++){
    vettore[i] = rand() % 10 ;
    cout << vettore[i] << " ";
  }
  int indice1;
  int indice2;
  int valoreX;
  int contatore = 0;
  cout << "\ninserisci elemento 'X':";
  cin >> valoreX;
  cout << "\nprimo indice";
  cin >> indice1;
  cout << "secondo indice";
  cin >> indice2;
  for(int i=indice1+1; i<indice2; i++){
    if (valoreX==vettore[i]){
      cout<<vettore[i]<<" ";
    }
  }
  cout << endl;
}






void es61(){
  //Dato un vettore numerico di n elementi determinare qual e' l'elemento (o gli elementi) che si ripete piu' volte e quante volte si ripete. 

cout << "Dato un vettore numerico di n elementi determinare qual e' l'elemento (o gli elementi) che si ripete piu' volte e quante volte si ripete.\n\n";

//struttura dati
struct struct_Numeri{
  int numeri;
  int frequenza;
};
  int N = 13;
  int iF = 0;
  struct_Numeri Numeri[N];
  struct_Numeri Frequenza;
  int numeriFrequenti[N];
  int maxFrequenza = 0;
  bool giaPresente = true;
  for(int i = 0; i < N; i++){
    Numeri[i].numeri = rand() % 10 + 1;
    cout << Numeri[i].numeri << " ";
  }
  for(int i = 0; i < N; i++){
    Frequenza.frequenza = 0;
    for(int j = 0; j < N; j++){
      if(Numeri[i].numeri == Numeri[j].numeri){
        Frequenza.frequenza += 1;
      }
    }
    if(maxFrequenza < Frequenza.frequenza){
      maxFrequenza = Frequenza.frequenza;
    }
  }
  cout << "\nfrequenza massima:" << maxFrequenza << endl;
  for(int i = 0; i < N; i++){
    Frequenza.frequenza = 0;
    for(int j = 0; j < N; j++){
      if(Numeri[i].numeri == Numeri[j].numeri){
        Frequenza.frequenza += 1;
      }
    }
    if(Frequenza.frequenza == maxFrequenza){
      giaPresente = false;
      for(int j = iF; j >= 0; j--){
        if(numeriFrequenti[j] == Numeri[i].numeri){
          giaPresente = true;
        }
      }
      if(!giaPresente){
        numeriFrequenti[iF] = Numeri[i].numeri;
        iF++;
      }
    }
  }
  if(iF == 1){
    cout << "\nil numero " << numeriFrequenti[iF - 1] << " compare " << maxFrequenza << " volte\n";
  }else{
    cout << "i numeri ";
    for(int i = 0; i < iF; i++){
      cout << numeriFrequenti[i] << " ";
    }
    cout << "compaiono " << maxFrequenza << " volte\n";
  }
}