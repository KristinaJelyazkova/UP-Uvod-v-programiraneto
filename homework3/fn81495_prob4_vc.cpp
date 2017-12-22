/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 4
* @compiler VC
*
*/
#include<iostream>
using namespace std;

const int MAXSIZE = 16;

int main() {
	int n;
	cin >> n;
	char AttackingPiece[MAXSIZE], CAttackingPieceXcoordinate[MAXSIZE];
	int AttackingPieceYcoordinate[MAXSIZE], AttackingPieceXcoordinate[MAXSIZE];
	for (int i = 0; i < n; i++) {
		cin >> AttackingPiece[i];
		cin >> CAttackingPieceXcoordinate[i];
		AttackingPieceXcoordinate[i] = CAttackingPieceXcoordinate[i] - 'a' + 1;
		cin >> AttackingPieceYcoordinate[i];
	}
	char CKingXcoordinate;
	cin >> CKingXcoordinate;
	int KingYcoordinate;
	cin >> KingYcoordinate;
	int KingXcoordinate = CKingXcoordinate - 'a' + 1;

	char table[8][8] = { '0' };
	table[KingXcoordinate][KingYcoordinate] = 'K';
	for (int i = 0; i < n; i++) {
		table[AttackingPieceXcoordinate[i]][AttackingPieceYcoordinate[i]] = 'A';
	}

	char table2[8][8] = { '0' };
	for (int i = 0; i < n; i++) {
		bool flag = true;
		int j;
		int X = AttackingPieceXcoordinate[i], Y = AttackingPieceYcoordinate[i];
		switch (AttackingPiece[i]) {
		case 'R': for (int i = X + 1; i <= 8 && flag; i++) {
						table2[i][Y] = 'T';
						if (table[i][Y] == 'A') flag = false;
				  }
				  flag = true;
				  for (int i = X - 1; i >= 0 && flag; i--) {
					  table2[i][Y] = 'T';
					  if (table[i][Y] == 'A') flag = false;
				  }
				  flag = true;
				  for (int i = Y + 1; i <= 8 && flag; i++) {
					  table2[X][i] = 'T';
					  if (table[i][Y] == 'A') flag = false;
				  }
				  flag = true;
				  for (int i = Y - 1; i >= 0 && flag; i--) {
					  table2[X][i] = 'T';
					  if (table[i][Y] == 'A') flag = false;
				  }
				  flag = true;
				  break;
		case 'N': if((X + 1 <= 8) && (X + 1 >= 0) && (Y - 2 <= 8) && (Y - 2 >= 0)) table2[X + 1][Y - 2] = 'T'; 
			if ((X - 1 <= 8) && (X - 1 >= 0) && (Y - 2 <= 8) && (Y - 2 >= 0)) table2[X - 1][Y - 2] = 'T';
			if ((X + 1 <= 8) && (X + 1 >= 0) && (Y + 2 <= 8) && (Y + 2 >= 0)) table2[X + 1][Y + 2] = 'T';
			if ((X - 1 <= 8) && (X - 1 >= 0) && (Y + 2 <= 8) && (Y + 2 >= 0)) table2[X - 1][Y + 2] = 'T';
			break;
		case 'B': j = Y + 1;
			for (int i = X + 1; i <= 8 && j <= 8 && flag; i++) {
				table2[i][j] = 'T';
				if (table[i][j] == 'A') flag = false;
				j++;
		}
				  flag = true;
				  j = Y - 1;
				  for (int i = X + 1; i <= 8 && j >= 0 && flag; i++) {
					  table2[i][j] = 'T';
					  if (table[i][j] == 'A') flag = false;
					  j--;
				  }
				  flag = true;
				  j = Y + 1;
				  for (int i = X - 1; i >= 0 && j <= 8 && flag; i--) {
					  table2[i][j] = 'T';
					  if (table[i][j] == 'A') flag = false;
					  j++;
				  }
				  flag = true;
				  j = Y - 1;
				  for (int i = X - 1; i >= 0 && j >= 0 && flag; i--) {
					  table2[i][j] = 'T';
					  if (table[i][j] == 'A') flag = false;
					  j--;
				  }
				  flag = true;
			break;
		case 'Q':  for (int i = X + 1; i <= 8 && flag; i++) {
			table2[i][Y] = 'T';
			if (table[i][Y] == 'A') flag = false;
		}
				   flag = true;
				   for (int i = X - 1; i >= 0 && flag; i--) {
					   table2[i][Y] = 'T';
					   if (table[i][Y] == 'A') flag = false;
				   }
				   flag = true;
				   for (int i = Y + 1; i <= 8 && flag; i++) {
					   table2[X][i] = 'T';
					   if (table[i][Y] == 'A') flag = false;
				   }
				   flag = true;
				   for (int i = Y - 1; i >= 0 && flag; i--) {
					   table2[X][i] = 'T';
					   if (table[i][Y] == 'A') flag = false;
				   }
				   flag = true; 
				   j = Y + 1;
				   for (int i = X + 1; i <= 8 && j <= 8 && flag; i++) {
					   table2[i][j] = 'T';
					   if (table[i][j] == 'A') flag = false;
					   j++;
				   }
				   flag = true;
				   j = Y - 1;
				   for (int i = X + 1; i <= 8 && j >= 0 && flag; i++) {
					   table2[i][j] = 'T';
					   if (table[i][j] == 'A') flag = false;
					   j--;
				   }
				   flag = true;
				   j = Y + 1;
				   for (int i = X - 1; i >= 0 && j <= 8 && flag; i--) {
					   table2[i][j] = 'T';
					   if (table[i][j] == 'A') flag = false;
					   j++;
				   }
				   flag = true;
				   j = Y - 1;
				   for (int i = X - 1; i >= 0 && j >= 0 && flag; i--) {
					   table2[i][j] = 'T';
					   if (table[i][j] == 'A') flag = false;
					   j--;
				   }
				   flag = true;
				   break;
		}
	}
	bool isCheck = false, isMate = false;
	if (table2[KingXcoordinate][KingYcoordinate] == 'T') isCheck = true;
	if ((table2[KingXcoordinate + 1][KingYcoordinate] == 'T' && KingXcoordinate + 1 <= 8) &&
		(table2[KingXcoordinate + 1][KingYcoordinate + 1] == 'T' && KingXcoordinate + 1 <= 8 && KingYcoordinate + 1 <= 8) &&
		(table2[KingXcoordinate][KingYcoordinate + 1] == 'T' && KingYcoordinate + 1 <= 8) &&
		(table2[KingXcoordinate - 1][KingYcoordinate + 1] == 'T' && KingXcoordinate - 1 >= 0 && KingYcoordinate + 1 <= 8) &&
		(table2[KingXcoordinate - 1][KingYcoordinate] == 'T' && KingXcoordinate - 1 >= 0) &&
		(table2[KingXcoordinate - 1][KingYcoordinate - 1] == 'T' && KingXcoordinate - 1 >= 0 && KingYcoordinate - 1 >= 0) &&
		(table2[KingXcoordinate][KingYcoordinate - 1] == 'T' && KingYcoordinate - 1 >= 0) &&
		(table2[KingXcoordinate + 1][KingYcoordinate - 1] == 'T' && KingXcoordinate + 1 <= 8 && KingYcoordinate - 1 >= 0)
		) isMate = true;

	if (isCheck) {
		if (isMate) cout << "Checkmate!\n";
		else cout << "Check!\n";
	}
	else {
		if (isMate) cout << "Stalemate!\n";
		else cout << "The show must go on!\n";
	}

	//system("pause");
	return 0;
}