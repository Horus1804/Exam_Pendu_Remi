#include <iostream> // bibliotheque qui permet d'utiliser les entrees/sorties
#include <string> // bibliotheque qui permet d'utiliser les chaines de caracteres


using namespace std; // permet d'utiliser les fonctions de la bibliotheque standard

string initialiser_mot_mystere(std::string const& mot) // fonction qui cache le mot
{
	string res; // resultat
	for (size_t i = 0; i != mot.size(); ++i) // boucle qui cache le mot
	{
		res.push_back('_'); // ajoute un underscore
	}
	return res; // retourne le resultat
}

int main() // fonction principale
{
		string hiddenword; // mot mystere

		while (true) // boucle infinie
		{
				cout << "*************************************" << endl // affiche le menu
				<< "Bienvenue sur le jeu du Pendu" << endl // titre
				<< "1 - Commencer une nouvelle partie" << endl // choix 1
				<< "0 - Quitter" << endl // choix 0
				<< "*************************************" << endl; // fin du menu
			int choix; // choix de l'utilisateur
			cout << "Faites votre choix" << endl; // demande le choix
			cin >> choix; // recupere le choix
			if (choix == 0) // quitte le jeu si choix = 0
			{
				break; // quitte le jeu
			}
			cerr << " choix:" << choix << endl; // affiche le choix
			if (choix != 1) // si choix different de 1
			{
				continue; // recommence la boucle
			}
			string mot; // mot mystere
			getline(cin, mot);// flush line break
			while (mot.size() == 0) // tant que la taille du mot est egale a 0
			{
				cout << "Joueur 1 - Saisissez le mot mystre:" << endl; // demande le mot mystere
				getline(cin, mot); // recupere le mot mystere
			}

			string mot_mystere = initialiser_mot_mystere(mot); // cache le mot mystere
			for (size_t i = 0; i != 100; ++i) // boucle qui efface l'ecran
			{
				cout << endl; // saute une ligne
			}
}






	/* ancien code du main
	int joueur1 = 0;
	int joueur2 = 0;
	int HP = 10;

	string hiddenword;
	bool letterWin = false;
	char letter;

	cout << "Player 1 enter the word to hide!" << endl;
	cin >> hiddenword;

	system("cls");

	for (int i = 0; i < hiddenword.length(); i++)
	{
		hiddenword[i] = '_';
	}
	cout << "Player 2 you have " << HP << " tries to guess the word!" << endl;
	cout << hiddenword << endl;

	

	while (HP > 0)
	{
		cout << " " << endl;
		cout << "Player 2 enter a letter!" << endl;
		cin >> letter;

		for (int i = 0; i < hiddenword.length(); i++)
		{
			if (letter == hiddenword[i])
			{
				hiddenword[i] = letter;
				letterWin = true;
			}
			else
			{
				HP--;
			}
		}
	}
	if (HP == 0)
	{
		cout << "Player 2 lost!" << endl;
	}
	if (letterWin == 1)
	{
		cout << "Player 2 won!" << endl;
	}
	
*/
