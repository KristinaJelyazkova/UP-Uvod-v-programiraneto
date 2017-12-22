/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Kristina Jelyazkova
* @idnumber 81495
* @task 1
* @compiler VC
*
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	bool isCheck = false;
	char AttackingPiece;
	cin >> AttackingPiece;

	char CAttackingPieceXcoordinate;
	cin >> CAttackingPieceXcoordinate;
	int AttackingPieceYcoordinate;
	cin >> AttackingPieceYcoordinate;

	char CKingXcoordinate;
	cin >> CKingXcoordinate;
	int KingYcoordinate;
	cin >> KingYcoordinate;

	int AttackingPieceXcoordinate = CAttackingPieceXcoordinate - 'a' + 1;
	int KingXcoordinate = CKingXcoordinate - 'a' + 1;

	switch (AttackingPiece) {
	case 'R': if ((AttackingPieceXcoordinate == KingXcoordinate) || (AttackingPieceYcoordinate == KingYcoordinate))
		isCheck = true; break;
	case 'N': if (((abs(AttackingPieceXcoordinate - KingXcoordinate) == 2) && (abs(AttackingPieceYcoordinate - KingYcoordinate) == 1)) 
		|| ((abs(AttackingPieceXcoordinate - KingXcoordinate) == 1) && (abs(AttackingPieceYcoordinate - KingYcoordinate) == 2)))
		isCheck = true; break;
	case 'B': if (abs(AttackingPieceXcoordinate - KingXcoordinate) == abs(AttackingPieceYcoordinate - KingYcoordinate))
		isCheck = true; break;
	case 'Q': if (((AttackingPieceXcoordinate == KingXcoordinate) || (AttackingPieceYcoordinate == KingYcoordinate)) ||
		(abs(AttackingPieceXcoordinate - KingXcoordinate) == abs(AttackingPieceYcoordinate - KingYcoordinate)))
		isCheck = true; break;
	}

	if (isCheck) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}