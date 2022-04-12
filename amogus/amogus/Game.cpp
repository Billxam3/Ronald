#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int battle() {
	srand(time(NULL));
	int rand1to100 = rand() % 100 + 1;
	string enemyname = "Snake";
	int player_health = 50;
	int enemy_health = 12;
	int battle_decision{};
	int strong_attack_dmg;
	int weak_attack_dmg;
	int enemy_attack_dmg = 5;

	cout << "You Have Entered a Battle with a " << enemyname << " it has " << enemy_health << "HP" << endl;
	cout << "What would you like to do: \n (1) Strong Attack \n (2) Weak Attack \n (3) Block \n";

	while (player_health >= 1) {
		rand1to100 = rand() % 100 + 1;
		cin >> battle_decision;
		cout << endl;


		if (battle_decision == 1) {

			if (rand1to100 <= 75) {
				rand1to100 = rand() % 100 + 1;
				strong_attack_dmg = rand() % 4 + 7;
				cout << "You hit the " << enemyname << " for " << strong_attack_dmg << "HP" << endl;
				enemy_health = enemy_health - strong_attack_dmg;
				if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause");return 0;}
				cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}


			else {
				rand1to100 = rand() % 100 + 1;
				cout << "You have missed!" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}

		if (battle_decision == 2) {
			weak_attack_dmg = rand() % 4 + 3;
			enemy_health = enemy_health - weak_attack_dmg;
			cout << "You hit the " << enemyname << " for " << weak_attack_dmg << "HP" << endl;
			if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause"); return 0; }
			cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
			if (rand1to100 <= 70) {
				rand1to100 = rand() % 100 + 1;
				player_health = player_health - enemy_attack_dmg;
				cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
				cout << "You have " << player_health << " HP" << endl;
			}

		}

		if (battle_decision == 3) {
			if (rand1to100 <= 90) {
				rand1to100 = rand() % 100 + 1;
				cout << "You sucessfully blocked the attack" << endl;
			}
			else {
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}

		if (enemy_health <= 0) 

		if (battle_decision != 1, 2, 3) {
			cout << endl << "Choose between the following:\n 1 Strong Attack \n 2 Weak Attack \n 3 Block \n" << endl;
		}

	}
	 cout << "You have Died" << endl;
	system("pause");
	return 0;
}
int battle2() {
	srand(time(NULL));
	int rand1to100 = rand() % 100 + 1;
	string enemyname = "Wolf";
	int player_health = 75;
	int enemy_health = 18;
	int battle_decision{};
	int strong_attack_dmg;
	int weak_attack_dmg;
	int enemy_attack_dmg = 8;

	cout << "You Have Entered a Battle with a " << enemyname << " it has " << enemy_health << "HP" << endl;
	cout << "What would you like to do: \n (1) Strong Attack \n (2) Weak Attack \n (3) Block \n";

	while (player_health >= 1) {
		rand1to100 = rand() % 100 + 1;
		cin >> battle_decision;
		cout << endl;


		if (battle_decision == 1) {

			if (rand1to100 <= 75) {
				rand1to100 = rand() % 100 + 1;
				strong_attack_dmg = rand() % 7 + 7;
				cout << "You hit the " << enemyname << " for " << strong_attack_dmg << "HP" << endl;
				enemy_health = enemy_health - strong_attack_dmg;
				if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause");return 0; }
				cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}


			else {
				rand1to100 = rand() % 100 + 1;
				cout << "You have missed!" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}

		if (battle_decision == 2) {
			weak_attack_dmg = rand() % 6 + 3;
			enemy_health = enemy_health - weak_attack_dmg;
			cout << "You hit the " << enemyname << " for " << weak_attack_dmg << "HP" << endl;
			if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause"); return 0; }
			cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
			if (rand1to100 <= 70) {
				rand1to100 = rand() % 100 + 1;
				player_health = player_health - enemy_attack_dmg;
				cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
				cout << "You have " << player_health << " HP" << endl;
			}

		}

		if (battle_decision == 3) {
			if (rand1to100 <= 90) {
				rand1to100 = rand() % 100 + 1;
				cout << "You sucessfully blocked the attack" << endl;
			}
			else {
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}

		if (enemy_health <= 0)

			if (battle_decision != 1, 2, 3) {
				cout << endl << "Choose between the following:\n 1 Strong Attack \n 2 Weak Attack \n 3 Block \n" << endl;
			}

	}
	cout << "You have Died" << endl;
	system("pause");
	return 0;
}
int battle3() {
	srand(time(NULL));
	int rand1to100 = rand() % 100 + 1;
	string enemyname = "Ogre";
	int player_health = 75;
	int enemy_health = 30;
	int battle_decision{};
	int strong_attack_dmg;
	int weak_attack_dmg;
	int enemy_attack_dmg = 8;

	cout << "You Have Entered a Battle with a " << enemyname << " it has " << enemy_health << "HP" << endl;
	cout << "What would you like to do: \n (1) Strong Attack \n (2) Weak Attack \n (3) Block \n";

	while (player_health >= 1) {
		rand1to100 = rand() % 100 + 1;
		cin >> battle_decision;
		cout << endl;


		if (battle_decision == 1) {

			if (rand1to100 <= 75) {
				rand1to100 = rand() % 100 + 1;
				strong_attack_dmg = rand() % 7 + 7;
				cout << "You hit the " << enemyname << " for " << strong_attack_dmg << "HP" << endl;
				enemy_health = enemy_health - strong_attack_dmg;
				if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause");return 0; }
				cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}


			else {
				rand1to100 = rand() % 100 + 1;
				cout << "You have missed!" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}

		if (battle_decision == 2) {
			weak_attack_dmg = rand() % 6 + 3;
			enemy_health = enemy_health - weak_attack_dmg;
			cout << "You hit the " << enemyname << " for " << weak_attack_dmg << "HP" << endl;
			if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause"); return 0; }
			cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
			if (rand1to100 <= 70) {
				rand1to100 = rand() % 100 + 1;
				player_health = player_health - enemy_attack_dmg;
				cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
				cout << "You have " << player_health << " HP" << endl;
			}

		}

		if (battle_decision == 3) {
			if (rand1to100 <= 90) {
				rand1to100 = rand() % 100 + 1;
				cout << "You sucessfully blocked the attack" << endl;
			}
			else {
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}

		if (enemy_health <= 0)

			if (battle_decision != 1, 2, 3) {
				cout << endl << "Choose between the following:\n 1 Strong Attack \n 2 Weak Attack \n 3 Block \n" << endl;
			}

	}
	cout << "You have Died" << endl;
	system("pause");
	return 0;
}
int battle4() {
	srand(time(NULL));
	int rand1to100 = rand() % 100 + 1;
	string enemyname = "Giant";
	int player_health = 100;
	int enemy_health = 50;
	int battle_decision{};
	int strong_attack_dmg;
	int weak_attack_dmg;
	int enemy_attack_dmg = 8;

	cout << "You Have Entered a Battle with a " << enemyname << " it has " << enemy_health << "HP" << endl;
	cout << "What would you like to do: \n (1) Strong Attack \n (2) Weak Attack \n (3) Block \n";

	while (player_health >= 1) {
		rand1to100 = rand() % 100 + 1;
		cin >> battle_decision;
		cout << endl;


		if (battle_decision == 1) {

			if (rand1to100 <= 75) {
				rand1to100 = rand() % 100 + 1;
				strong_attack_dmg = rand() % 7 + 10;
				cout << "You hit the " << enemyname << " for " << strong_attack_dmg << "HP" << endl;
				enemy_health = enemy_health - strong_attack_dmg;
				if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause");return 0; }
				cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}


			else {
				rand1to100 = rand() % 100 + 1;
				cout << "You have missed!" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}

		if (battle_decision == 2) {
			weak_attack_dmg = rand() % 8 + 3;
			enemy_health = enemy_health - weak_attack_dmg;
			cout << "You hit the " << enemyname << " for " << weak_attack_dmg << "HP" << endl;
			if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause"); return 0; }
			cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
			if (rand1to100 <= 70) {
				rand1to100 = rand() % 100 + 1;
				player_health = player_health - enemy_attack_dmg;
				cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
				cout << "You have " << player_health << " HP" << endl;
			}

		}

		if (battle_decision == 3) {
			if (rand1to100 <= 90) {
				rand1to100 = rand() % 100 + 1;
				cout << "You sucessfully blocked the attack" << endl;
			}
			else {
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}

		if (enemy_health <= 0)

			if (battle_decision != 1, 2, 3) {
				cout << endl << "Choose between the following:\n 1 Strong Attack \n 2 Weak Attack \n 3 Block \n" << endl;
			}

	}
	cout << "You have Died" << endl;
	system("pause");
	return 0;
}
int boss() {
	srand(time(NULL));
	int rand1to100 = rand() % 100 + 1;
	string enemyname = "Ronald";
	int player_health = 125;
	int enemy_health = 100;
	int battle_decision{};
	int strong_attack_dmg;
	int weak_attack_dmg;
	int enemy_attack_dmg = 10;

	cout << "You Have Entered a Battle with a " << enemyname << " it has " << enemy_health << "HP" << endl;
	cout << "What would you like to do: \n (1) Strong Attack \n (2) Weak Attack \n (3) Block \n";

	while (player_health >= 1) {
		rand1to100 = rand() % 100 + 1;
		cin >> battle_decision;
		cout << endl;


		if (battle_decision == 1) {

			if (rand1to100 <= 75) {
				rand1to100 = rand() % 100 + 1;
				strong_attack_dmg = rand() % 7 + 15;
				cout << "You hit the " << enemyname << " for " << strong_attack_dmg << "HP" << endl;
				enemy_health = enemy_health - strong_attack_dmg;
				if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause");return 0; }
				cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}


			else {
				rand1to100 = rand() % 100 + 1;
				cout << "You have missed!" << endl;
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}

		if (battle_decision == 2) {
			weak_attack_dmg = rand() % 8 + 5;
			enemy_health = enemy_health - weak_attack_dmg;
			cout << "You hit the " << enemyname << " for " << weak_attack_dmg << "HP" << endl;
			if (enemy_health <= 0) { cout << "You have killed the " << enemyname << endl; system("pause"); return 0; }
			cout << "The " << enemyname << " now has " << enemy_health << "HP" << endl;
			if (rand1to100 <= 70) {
				rand1to100 = rand() % 100 + 1;
				player_health = player_health - enemy_attack_dmg;
				cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
				cout << "You have " << player_health << " HP" << endl;
			}

		}

		if (battle_decision == 3) {
			if (rand1to100 <= 90) {
				rand1to100 = rand() % 100 + 1;
				cout << "You sucessfully blocked the attack" << endl;
			}
			else {
				if (rand1to100 <= 70) {
					rand1to100 = rand() % 100 + 1;
					player_health = player_health - enemy_attack_dmg;
					cout << "The " << enemyname << " hit you for " << enemy_attack_dmg << " HP" << endl;
					cout << "You have " << player_health << " HP" << endl;
				}

			}
		}
	}
}
int main(int argc, char** argv) {
	int rand1to100 = rand() % 100 + 1;
	string enemyname = "";
	int player_health;
	int enemy_health;
	int battle_decision{};
	int strong_attack_dmg;
	int weak_attack_dmg;
	int enemy_attack_dmg;
	int sword_state = 0;
	int armor_state = 0;
	int x,x1,x2,x3,x4,y,y1,b,b1;

	cout << "Your were at McDonals eating some scrumptious onion rings when suddnly out of nowhere \n\n Ronald Mcdonald appears infront of you and STEALS your food\n\n You fool do you not know who i am?\n These onion rings are mine now chump \n\n You try and try to get the back until he stopped you in your tracks and said \n\n ENOUGH\n\n with a snap of his fingers every thing went black";
	cout << "You wake up in a beach, alone and with no equipment, infront of you is a cave" << endl;
	cout << "1: Forward, 2:Wait here" << endl;

	cin >> x;

	if (x == 1) {
		cout << "You Start Walking down the parth to the cave when suddenly you were attacked by a snake" << endl;
		if (sword_state == 0 || armor_state == 0) {
			battle();
			/*else if () {
				battle2();
			}*/
		}
		cout << "You Defeat the monster and enter a dimly lit cave\n" << endl;
		cout << "Inside you find a sword and armor and put them on\n" << endl;
		cout << "'Damage slightly increased and health increased to 75\n'" << endl;
		sword_state = 1;
		armor_state = 1;
		cout << "There's 3 exits out of the cave one leads into the jungle, the second leads to rocky mountain and the third leads into a foggy area\n" << endl;
		cout << "1:Jungle, 2: Mountain, 3 Fog" << endl;
		cin >> x1;
		if (x1 == 1) {
		
			cout << "You enter the jungle and across the path you come across a strange man warning you of the horrors Ronald has inflicted on this island\n" << endl;
			cout << "And that more powerful foe lies infront of you\n\n You think about it but ultimately think you should proceed" << endl;
			cout << "1: Proceed" << endl;
				cin >> x2;

				if (x2 == 1) {
						battle3();
						
					}
				if (x2>1) {
					cout << "You put in a wrong input so a meteor fell on you and you died, Bozo" << endl;
					return 0;
				}
				cout << "After that tough battle you keep moving and reach a temple\n" << endl;
				cout << "In the timple you found and took a battle axe\n" << endl;
				cout << "With your new weapon at hand you can either go to the mountain or return to the jungle\n" << endl;
				cout << "1:Mountain" << endl;
				cin >> x3;
				if (x3 == 1) {

					cout << "You reached the mountain and infront of you there is a sleeping Giant\n\nIf you go any further it will wake up, to your left is the foggy area\n" << endl;
					cout << "1: Fight, 2: Fog" << endl;
					cin >> y1;
					if (y1 == 1) {
						battle4();
					}
					cout << "You defeated The Giant!\n" << endl;
					cout << "There was a sword made of solid steel and a full armor set infront of you\n\n";
					cout << "Damage Increased, Health increased to 125\n\n";
					cout <<"Infront of you is now Ronalds Temple \n\n Your time for revenge is here" << endl;
					cout << "Are you Ready?";
					cout << "1:Yes, 2:No";
						cin >> b;
					if (b == 1) {
						cout << "you enter the temple and there he is \n\n eating YOUR onion rings";
						cout << "Ronald: Im suprised you even got here, however there is no chance of you Defeating me";
						boss();
					}
					cout << "You did it, Ronald McDonald is dead,the Onion Rings are yours\n\n With him now gone the island dissapears and you find yourself back in McDonals\n\n Was it all a dream? \n\nIt doesnt matter, in the end all the matters is that you can enjoy your food\n\n";
					cout << "Victory.\n";
					if (b == 2) {
						cout << "you are a coward\n\n so im throwing a meteor at you\n\n";
						cout << "Death\n\n";
					}
					return 0;
					if (y1 == 2) {
						cout << "You enter the fog and hear distand voices to your north" << endl;
						cout << "Follow them and find a piece of iron plated armor" << endl;
							cout << "Health increased to 100" << endl;
							cout << "through the fog you proceed and reach the giant once more" << endl;
							battle4();
							cout << "You defeated The Giant!\n" << endl;
					}
					cout << "There was a sword made of solid steel and a full armor set infront of you\n\n";
					cout	<< "Damage Increased, Health increased to 125\n\n";
					cout << "Infront of you is now Ronalds Temple \n\n Your time for revenge is here" << endl;
					cout << "Are you Ready?";
					cout << "1:Yes, 2:No";
					cin >> b1;
					if (b1 == 1) {
						cout << "you enter the temple and there he is \n\n eating YOUR onion rings";
						cout << "Ronald: Im suprised you even got here, however there is no chance of you Defeating me";
						boss();
					}
					cout << "You did it, Ronald McDonald is dead,the Onion Rings are yours\n\n With him now gone the island dissapears and you find yourself back in McDonals\n\n Was it all a dream? \n\nIt doesnt matter, in the end all the matters is that you can enjoy your food\n\n";
					cout << "Victory.";
					return 0;
					if (y1>2) {
						cout << "You put in a wrong input so a meteor fell on you and you died, Bozo" << endl;
						return 0;
					}
				}
				if (x3>1){
					cout << "You put in a wrong input so a meteor fell on you and you died, Bozo" << endl;
					return 0;
				}
		}
		
		}
		if (x1 == 2) {
			cout << "You walk up the mountain and get attack by a wolf\n\n";
			battle2();
			cout << "You reach the mountain's peak and there awaited you a Giant\n\nAngered by your precence he starts to fight you and while your weapon was strong enough your armor brokeand you were crush to pieces\n\n";
			cout << "Death";
		}
		if (x1 == 3) {
			cout << "You enter the fog and hear distand voices to your north\n\n" << endl;
			cout << "Follow them and find a piece of iron plated armor\n\n" << endl;
			cout << "Health increased to 100\n\n" << endl;
			cout << "through the fog you proceed and reach the giant once more\n\n" << endl;
			cout << "You Fought very hard and took many blows but your Weapon wasnt strong enough\n\n" << endl;
			cout << "Death";
		}
		if (x1 < 1 || x1>3) {
			cout << "You put in a wrong input so a meteor fell on you and you died, Bozo" << endl;
			return 0;
		}
			if (x == 2) {
				cout << "you were bitten by a snake and died a horrible death" << endl;
				return 0;
			}
		if (x < 1 || x>2) {
			cout << "You put in a wrong input so a meteor fell on you and you died, Bozo" << endl;
			return 0;
	}
}