// aminoacidos.cpp : Dada una cadena de ARN, determinar los aminoacidos esenciales y no esenciales en esa cadena
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <locale>
using namespace std;

typedef pair<string, int> p_si;
typedef pair<string, p_si> p_ssi;
typedef unordered_map<string, p_si> hash_ssi;

int main()
{
	cout << "Aminoacido" << endl;

	string cadena = "GCGCCAUGGGGCAGCCCGGGAACCGCAGCGUCUUCUUGCUGGCGCCCAACGGAAGCCACGCGCCGGACCAGGACGGCACGCAGGAACGAAACGACGCGUGGGUGGUGGGCAUGGGCAUCGUCAUGUCGCUCAUCGUCCUGGCCAUCGUGUUUGGAAACGUGCUGGUCAUCACGGCCAUCGCCAGAUUCGAGCGUCUGCAGACGGUCACCAACUACUUCAUCACCUCCCUGGCCUGUGCUGACCUGGUCAUGGGCCUGGCGGUGGUGCCCUUUGGGGCCAGCCACAUCCUCAUGAAAAUGUGGACCUUUGGCAACUUCUGGUGUGAGUUUUGGACUUCCAUUGACGUGCUGUGUGUCACGGCCAGCAUUGAGACCCUGUGCGUGAUCGCCGUGGAUCGCUACUUUGCUAUCACGUCGCCCUUCAAGUACCAGAGCCUGCUGACCAAGAAUAAGGCCCGGGUGGUCAUUCUGAUGGUGUGGAUCGUGUCGGGGCUUACCUCCUUCUUGCCCAUCCAGAUGCACUGGUACCGGGCCACCCACCAGGAAGCCAUCAACUGCUAUGCCAAGGAGACCUGCUGUGACUUCUUCACGAACCAAGCUUAUGCCAUCGCCUCCUCCAUUGUGUCCUUCUACCUACCCCUGGUGGUCAUGGUCUUCGUCUACUCCAGGGUCUUUCAGGUGGCCCAAAGGCAGCUCCAGAAGAUCGACAAAUCUGAGGGCCGCUUCCACGCCCAAAAUCUCAGCCAAGUGGAGCAGGAUGGGCGGAGCGGGCAUGGACAUCGCAGGGCCUCCAAGUUCUGCUUGAAGGAGCACAAGGCCUUGAAGACUUUGGGCAUCAUCAUGGGCACGUUCACCCUGUGCUGGCUACCCUUCUUCAUCGUCAACAUAGUGCACGUGAUCCAGGAUAACCUCAUCCCUAAGGAAGUUUACAUCCUCCUAAACUGGGUGGGCUACGUCAACUCUGCUUUCAAUCCCCUUAUCUAUUGCCGGAGCCCAGACUUCAGGAUUGCCUUCCAGGAGCUUCUGUGCCUGCGCAGGUCUUCUCUGAAGGCCUAUGGGAAUGGCUACUCCAACAACAGUAACAGCAGAACAGACUAUGCCGGGGAACACAGCGGAGGUCCCCUGGGGCAGGAGAAAGACAGCGAAGUGCUGUGUGAGGACCCCCCAGGCACGGAAAACCUUGCAAACCGUCAAGGUACUGUGCCUAACGAUAGCAUUGAUUCACAAGGGCAGAACGGUAGCACAAACGACUCACUGUUGUAAGGCGGGUUUUUCUACUUUUUAUGACCUCCCCCCCCCCCCCAGCCAAACACUAAACAGACUAUUUAACUUGAGUGUAAUAAACUUAGAAUAAAAUUGUAUAGAGAUGUGCAGGAGGAAGGACAGCCUUCUGCCUUUUUUUUUUUUAUUAUUAUUUUUUUAAGCUGUAACAAAGAGAAAACACAUUCGAGUGAAUUGUUUCUUGUCCAGUUCAAGUUCCUUUUUUGCAUGGAACGUGUUAAGUUUGUGUCUGAAGGGCUUCGGUCCCAGAGGACCU";
	
	locale loc;
	for (string::size_type i = 0; i<cadena.length(); ++i)
		cadena[i] = tolower(cadena[i], loc);

	cout << cadena << endl;
	hash_ssi aminoacidos;
	aminoacidos.insert(p_ssi("uuu", p_si("fenilalanina", 1)));
	aminoacidos.insert(p_ssi("uuc", p_si("fenilalanina", 1)));

	aminoacidos.insert(p_ssi("uua", p_si("leucina", 1)));
	aminoacidos.insert(p_ssi("uug", p_si("leucina", 1)));
	aminoacidos.insert(p_ssi("cuu", p_si("leucina", 1)));
	aminoacidos.insert(p_ssi("cuc", p_si("leucina", 1)));
	aminoacidos.insert(p_ssi("cua", p_si("leucina", 1)));
	aminoacidos.insert(p_ssi("cug", p_si("leucina", 1)));

	aminoacidos.insert(p_ssi("auu", p_si("isoleucina", 1)));
	aminoacidos.insert(p_ssi("auc", p_si("isoleucina", 1)));
	aminoacidos.insert(p_ssi("aua", p_si("isoleucina", 1)));

	aminoacidos.insert(p_ssi("aug", p_si("metionina", 1)));

	aminoacidos.insert(p_ssi("guu", p_si("valina", 1)));
	aminoacidos.insert(p_ssi("guc", p_si("valina", 1)));
	aminoacidos.insert(p_ssi("gua", p_si("valina", 1)));
	aminoacidos.insert(p_ssi("gug", p_si("valina", 1)));

	aminoacidos.insert(p_ssi("ucu", p_si("serina", 0)));
	aminoacidos.insert(p_ssi("ucc", p_si("serina", 0)));
	aminoacidos.insert(p_ssi("uca", p_si("serina", 0)));
	aminoacidos.insert(p_ssi("ucg", p_si("serina", 0)));

	aminoacidos.insert(p_ssi("ccu", p_si("prolina", 0)));
	aminoacidos.insert(p_ssi("ccc", p_si("prolina", 0)));
	aminoacidos.insert(p_ssi("cca", p_si("prolina", 0)));
	aminoacidos.insert(p_ssi("ccg", p_si("prolina", 0)));

	aminoacidos.insert(p_ssi("acu", p_si("treonina", 1)));
	aminoacidos.insert(p_ssi("acc", p_si("treonina", 1)));
	aminoacidos.insert(p_ssi("aca", p_si("treonina", 1)));
	aminoacidos.insert(p_ssi("acg", p_si("treonina", 1)));

	aminoacidos.insert(p_ssi("gcu", p_si("alanina", 0)));
	aminoacidos.insert(p_ssi("gcc", p_si("alanina", 0)));
	aminoacidos.insert(p_ssi("gca", p_si("alanina", 0)));
	aminoacidos.insert(p_ssi("gcg", p_si("alanina", 0)));

	aminoacidos.insert(p_ssi("uau", p_si("tirosina", 0)));
	aminoacidos.insert(p_ssi("uac", p_si("tirosina", 0)));

	aminoacidos.insert(p_ssi("uaa", p_si("stop", -1)));
	aminoacidos.insert(p_ssi("uag", p_si("stop", -1)));

	aminoacidos.insert(p_ssi("uga", p_si("stop", -1)));

	aminoacidos.insert(p_ssi("cau", p_si("histidina", 1)));
	aminoacidos.insert(p_ssi("cac", p_si("histidina", 1)));

	aminoacidos.insert(p_ssi("caa", p_si("glutamina", 0)));
	aminoacidos.insert(p_ssi("cag", p_si("glutamina", 0)));

	aminoacidos.insert(p_ssi("aau", p_si("asparagina", 0)));
	aminoacidos.insert(p_ssi("aac", p_si("asparagina", 0)));

	aminoacidos.insert(p_ssi("aaa", p_si("lisina", 1)));
	aminoacidos.insert(p_ssi("aag", p_si("lisina", 1)));

	aminoacidos.insert(p_ssi("gau", p_si("aspartato", 0)));
	aminoacidos.insert(p_ssi("gac", p_si("aspartato", 0)));

	aminoacidos.insert(p_ssi("gaa", p_si("glutamato", 0)));
	aminoacidos.insert(p_ssi("gag", p_si("glutamato", 0)));

	aminoacidos.insert(p_ssi("ugg", p_si("triptofano", 1)));

	aminoacidos.insert(p_ssi("cgu", p_si("arginina", 0)));
	aminoacidos.insert(p_ssi("cgc", p_si("arginina", 0)));
	aminoacidos.insert(p_ssi("cga", p_si("arginina", 0)));
	aminoacidos.insert(p_ssi("cgg", p_si("arginina", 0)));
	aminoacidos.insert(p_ssi("aga", p_si("arginina", 0)));
	aminoacidos.insert(p_ssi("agg", p_si("arginina", 0)));

	aminoacidos.insert(p_ssi("agu", p_si("serina", 0)));
	aminoacidos.insert(p_ssi("agc", p_si("serina", 0)));

	aminoacidos.insert(p_ssi("ugu", p_si("cisteina", 0)));
	aminoacidos.insert(p_ssi("ugc", p_si("cisteina", 0)));

	aminoacidos.insert(p_ssi("ggu", p_si("glicina", 0)));
	aminoacidos.insert(p_ssi("ggc", p_si("glicina", 0)));
	aminoacidos.insert(p_ssi("gga", p_si("glicina", 0)));
	aminoacidos.insert(p_ssi("ggg", p_si("glicina", 0)));



	string ami;
	hash_ssi::iterator it;

	//este es para tomar de 3 en 3 los aminoacidos
	for (size_t i = 0;i<=cadena.size() - 3;i+=3) {
	
	//este es para hacer 1 x 1
	//for (size_t i = 0;i<=cadena.size() - 3;++i) {
		ami.clear();
		ami.push_back(cadena[i]);
		ami.push_back(cadena[i + 1]);
		ami.push_back(cadena[i + 2]);

		it = aminoacidos.find(ami);
		if (it != aminoacidos.end())
			if(it->second.second == 1)
				cout << ami << " SI es un aminoacido esencial " << it->second.first << endl;
			else if (it->second.second == 0)
				cout << ami << " NO es un aminoacido esencial " << it->second.first << endl;
			else{
				cout << "notificacion de parada STOP" << endl;
				//break;
			}
		else
			cout << "ERROR: " << ami << "NO es un aminoacido" << endl;
	}




	return 0;
}
