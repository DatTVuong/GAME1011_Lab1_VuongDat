#include <iostream>
#include "Games.h"
#include "Platforms.h"
using namespace std;

int main()
{
	//Game Objects for Playstation 5
	Games GamePOne("[1] - [Spider-Man: Miles Morales]", "Developers: Insomniac Games", "Publishers: Sony Interactive Entertainment" );
	Games GamePTwo("[2] - [Horizon Zero Dawn 2]", "Developers: Guerrilla Games", "Publishers: Sony Interactive Entertainment");
	Games GamePThree("[3] - [God of War Ragnarok]", "Developers: Santa Monica Studio", "Publishers: Sony Interactive Entertainment");
	Games GamePFour("[4] - [GhostWire: Tokyo]", "Developers: Tango Gameworks","Publishers: Bethesda");
	Games GamePFive("[5] - [Ratchet & Clank: Rift Apart]", "Developers: Insomniac Games", "Publishers: Sony Interactive Entertainment");

	//Game Objects for Xbox Series X
	Games GameXOne("[1] - [Minecraft]", "Developers: Mojang", "Publishers: Mojang");
	Games GameXTwo("[2] - [Roblox]", "Developers: Roblox Corporation", "Publishers: Roblox Corporation");
	Games GameXThree("[3] - [Among Us]", "Developers: Innersloth", "Publishers: Innersloth");
	Games GameXFour("[4] - [Halo Infinite]", "Developers: 343 Industries", "Publishers: Xbox Game Studios");
	Games GameXFive("[5] - [Microsoft Flight Simulator]", "Developers: Asobo Studio", "Publishers: Xbox Game Studios");

	//Game Objects for Nintendo Switch
	Games GameNOne("[1] - [The Legend of Zelda: Breath of the Wild]", "Developers: Nintendo", "Publishers: Nintendo");
	Games GameNTwo("[2] - [Monster Hunter Rise]", "Developers: Capcom", "Publishers: Capcom");
	Games GameNThree("[3] - [Animal Crossing: New Horizons]", "Developers: Nintendo EPD", "Publishers: Nintendo");
	Games GameNFour("[4] - [Super Mario Maker 2]", "Developers: Nintendo EPD", "Publishers: Nintendo");
	Games GameNFive("[5] - [Paper Mario]", "Developers: Intelligent Systems", "Publishers: Nintendo");
	
	Games GamePS[5]{ GamePOne, GamePTwo, GamePThree, GamePFour, GamePFive };        //Game Array Playstation 5
	Games GameX[5]{ GameXOne, GameXTwo, GameXThree, GameXFour, GameXFive };         //Game Array Xbox Series X
	Games GameNS[5]{ GameNOne, GameNTwo, GameNThree, GameNFour, GameNFive };        //Game Array Nintendo Switch
	
	bool MenuR = false;  // Menu Return 
	int PlayerC;         // Player Choice
	string PlayerA;      // Player Achievement
	
	do
	{
		cout << "" << endl;                                                             //For Spacing
		cout << "[----[Main Menu]----]" << endl;                                        //Main Menu
		cout << "" << endl;                                                             //For Spacing
		cout << "[1] - [Browse Platforms] - Browse current platforms" << endl;            //Option 1: Browse Platforms
		cout << "" << endl;                                                             //For Spacing
		cout << "[2] - [Browse Games] - Browse current games" << endl;                    //Option 2: Browse Games
		cout << "" << endl;                                                             //For Spacing
		cout << "[3] - [Make Achievements] - Create custom achievements" << endl;         //Option 3: Make Achievements
		cout << "" << endl;                                                             //For Spacing
		cout << "Please select one: ", cin >> PlayerC;                                  //Player Choice

		while (PlayerC != 1 && PlayerC != 2 && PlayerC != 3)                            //Invalid Input
		{
			cout << "" << endl;                                                         //For Spacing
			cout << "[----[Main Menu]----]" << endl;                                    //Main Menu
			cout << "Invalid input, please try again" << endl;                          //Invalid Message
			cout << "" << endl;                                                         //For Spacing
			cout << "[1] - [Browse Platforms] - Browse current platforms" << endl;        //Option 1: Browse Platforms
			cout << "" << endl;                                                         //For Spacing
			cout << "[2] - [Browse Games] - Browse current games" << endl;                //Option 2: Browse Games
			cout << "" << endl;                                                         //For Spacing
			cout << "[3] - [Make Achievements] - Create custom achievements" << endl;     //Option 3: Make Achievements 
			cout << "" << endl;                                                         //For Spacing
			cout << "Please select one: ", cin >> PlayerC;                              //Player Choice 
		}

		if (PlayerC == 1)                                                    // Player Choice = 1 (Browse Platforms)
		{
			MenuR = true;                                                    //Menu Reset = true which breaks the loop
		}
		
		if (PlayerC == 2)                                                    //Player Choice = 2 (Browse Games)
		{
			cout << "" << endl;                                              //For Spacing
			cout << "[----[Games]----]" << endl;                             //Games Menu
			cout << "[Playstation 5]" << endl;                               //Playstation 5 Games
			cout << GamePS[0].getName() << " " << GamePS[0].getDev() << endl;
			cout << GamePS[1].getName() << " " << GamePS[1].getDev() << endl;
			cout << GamePS[2].getName() << " " << GamePS[2].getDev() << endl;
			cout << GamePS[3].getName() << " " << GamePS[3].getDev() << endl;
			cout << GamePS[4].getName() << " " << GamePS[4].getDev() << endl;
			cout << "" << endl;                                              //For Spacing
			cout << "[Xbox Series X]" << endl;                               //Xbox Series X Games
			cout << GameX[0].getName() << " " << GameX[0].getDev() << endl;
			cout << GameX[1].getName() << " " << GameX[1].getDev() << endl;
			cout << GameX[2].getName() << " " << GameX[2].getDev() << endl;
			cout << GameX[3].getName() << " " << GameX[3].getDev() << endl;
			cout << GameX[4].getName() << " " << GameX[4].getDev() << endl;
			cout << "" << endl;                                               //For Spacing
			cout << "[Nintendo Switch]" << endl;                              //Nintendo Switch Games
			cout << GameNS[0].getName() << " " << GameNS[0].getDev() << endl;                
			cout << GameNS[1].getName() << " " << GameNS[1].getDev() << endl;                
			cout << GameNS[2].getName() << " " << GameNS[2].getDev() << endl;                
			cout << GameNS[3].getName() << " " << GameNS[3].getDev() << endl;                
			cout << GameNS[4].getName() << " " << GameNS[4].getDev() << endl;                
			system("PAUSE");                                           //System command so the player can go back
			cout << "" << endl;                                               //For Spacing
		}

		if (PlayerC == 3)                                                     //Player choice = 2 (Create Achievements)
		{
			cout << "" << endl;                                               //For Spacing
			cout << "[----[Achievements]----]" << endl;                       //Achievement Main Menu
			cout << "Current Platforms" << endl;                               
			cout << "[1] - Playstation 5" << endl;                             
			cout << "[2] - Xbox Series X" << endl;
			cout << "[3] - Nintendo Switch" << endl;
			cout << "Please select a platform: ", cin >> PlayerC;                

			while (PlayerC != 1 && PlayerC != 2  && PlayerC != 3)             //Invalid Input
			{
				cout << "" << endl;
				cout << "[----[Achievements]----]" << endl;                   
				cout << "Invalid Input, please try again" << endl;            //Invalid Input Message
				cout << "[1] - Playstation 5" << endl;
				cout << "[2] - Xbox Series X" << endl;
				cout << "[3] - Nintendo Switch" << endl;
				cout << "Please select a platform: ", cin >> PlayerC;
			}

			if (PlayerC == 1)                                                 //Player Choice = 1 (Playstation 5)
			{
				cout << "" << endl;
				cout << "[----[Achievements]----]" << endl;
				cout << "You've selected Playstation 5!" << endl;
				cout << GamePS[0].getName() << " " << GamePS[0].getDev() << endl;
				cout << GamePS[1].getName() << " " << GamePS[1].getDev() << endl;
				cout << GamePS[2].getName() << " " << GamePS[2].getDev() << endl;
				cout << GamePS[3].getName() << " " << GamePS[3].getDev() << endl;
				cout << GamePS[4].getName() << " " << GamePS[4].getDev() << endl;
				cout << "Please select a game: ", cin >> PlayerC;

				while (PlayerC != 1 && PlayerC != 2 && PlayerC != 3 && PlayerC != 4 && PlayerC != 5)   //Invalid Input
				{
					cout << "" << endl;
					cout << "[----[Achievements]----]" << endl;
					cout << "Invalid Input, please try again" << endl;                                 //Invalid Input Message
					cout << GamePS[0].getName() << " " << GamePS[0].getDev() << endl;
					cout << GamePS[1].getName() << " " << GamePS[1].getDev() << endl;
					cout << GamePS[2].getName() << " " << GamePS[2].getDev() << endl;
					cout << GamePS[3].getName() << " " << GamePS[3].getDev() << endl;
					cout << GamePS[4].getName() << " " << GamePS[4].getDev() << endl;
					cout << "Please select a game: ", cin >> PlayerC;
				}

				if (PlayerC == 1)                                                         //Player choice = 1 (Spider-Man: Miles Morales)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Spider-Man: Miles Morales!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 2)                                                         //Player choice = 2 (Horizon Zero Dawn 2)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Horizon Zero Dawn 2!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 3)                                                         //Player choice = 3 (God of War Ragnarok)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected God of War Ragnarok!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 4)                                                         //Player choice = 4 (GhostWire: Tokyo)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected GhostWire: Tokyo!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 5)                                                         //Player choice = 5 (Ratchet & Clank: Rift Apart)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Ratchet & Clank: Rift Apart!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}
			}

			if (PlayerC == 2)                                                             //Player Choice = 2 (Xbox Series X)
			{
				cout << "" << endl;
				cout << "[----[Achievements]----]" << endl;
				cout << "You've selected Xbox Series X!" << endl;
				cout << GameX[0].getName() << " " << GameX[0].getDev() << endl;
				cout << GameX[1].getName() << " " << GameX[1].getDev() << endl;
				cout << GameX[2].getName() << " " << GameX[2].getDev() << endl;
				cout << GameX[3].getName() << " " << GameX[3].getDev() << endl;
				cout << GameX[4].getName() << " " << GameX[4].getDev() << endl;
				cout << "Please select a game: ", cin >> PlayerC;

				while (PlayerC != 1 && PlayerC != 2 && PlayerC != 3 && PlayerC != 4 && PlayerC != 5)  //Invalid Input
				{
					cout << "" << endl;
					cout << "[----[Achievements]----]" << endl;
					cout << "Invalid Input, please try again" << endl;                    //Invalid Input Message
					cout << GameX[0].getName() << " " << GameX[0].getDev() << endl;
					cout << GameX[1].getName() << " " << GameX[1].getDev() << endl;
					cout << GameX[2].getName() << " " << GameX[2].getDev() << endl;
					cout << GameX[3].getName() << " " << GameX[3].getDev() << endl;
					cout << GameX[4].getName() << " " << GameX[4].getDev() << endl;
					cout << "Please select a game: ", cin >> PlayerC;
				}

				if (PlayerC == 1)                                                         //Player choice = 1 (Minecraft)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Minecraft!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 2)                                                         //Player choice = 2 (Roblox)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Roblox!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 3)                                                         //Player choice = 3 (Among Us)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Among Us!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 4)                                                         //Player choice = 4 (Halo Infinite)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Halo Infinite!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 5)                                                         //Player choice = 5 (Microsoft Flight Simulator)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Microsoft Flight Simulator!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}
			}

			if (PlayerC == 3)                                                 //Player Choice = 3 (Nintendo Switch)
			{
				cout << "" << endl;
				cout << "[----[Achievements]----]" << endl;
				cout << "You've selected Nintendo Switch!" << endl;
				cout << GameNS[0].getName() << " " << GameNS[0].getDev() << endl;
				cout << GameNS[1].getName() << " " << GameNS[1].getDev() << endl;
				cout << GameNS[2].getName() << " " << GameNS[2].getDev() << endl;
				cout << GameNS[3].getName() << " " << GameNS[3].getDev() << endl;
				cout << GameNS[4].getName() << " " << GameNS[4].getDev() << endl;
				cout << "Please select a game: ", cin >> PlayerC;
				
				while (PlayerC != 1 && PlayerC != 2 && PlayerC != 3 && PlayerC != 4 && PlayerC != 5)   //Invalid Input
				{
					cout << "" << endl;
					cout << "[----[Achievements]----]" << endl;
					cout << "Invalid Input, please try again" << endl;                                 //Invalid Input Message
					cout << GameNS[0].getName() << " " << GameNS[0].getDev() << endl;
					cout << GameNS[1].getName() << " " << GameNS[1].getDev() << endl;
					cout << GameNS[2].getName() << " " << GameNS[2].getDev() << endl;
					cout << GameNS[3].getName() << " " << GameNS[3].getDev() << endl;
					cout << GameNS[4].getName() << " " << GameNS[4].getDev() << endl;
					cout << "Please select a game: ", cin >> PlayerC;
				}
				
				if (PlayerC == 1)                                                         //Player choice = 1 (The Legend of Zelda: Breath of the Wild)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected The Legend of Zelda: Breath of the Wild!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 2)                                                         //Player choice = 2 (Monster Hunter Rise)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Monster Hunter Rise!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 3)                                                         //Player choice = 3 (Animal Crossing: New Horizons)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Animal Crossing: New Horizons!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 4)                                                         //Player choice = 4 (Super Mario Maker 2)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Super Mario Maker 2!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}

				if (PlayerC == 5)                                                         //Player choice = 5 (Paper Mario)
				{
					cout << "" << endl;                                                   //For Spacing
					cout << "[----[Achievements]----]" << endl;
					cout << "You've selected Paper Mario!" << endl;
					cout << "Please enter achievement name: ", cin >> PlayerA;
					cout << "Achievement: " << PlayerA << " saved!" << endl;
				}
			}
		}
	} while (MenuR == false);                                             //Main/Games Menu Loop

	MenuR = false;                                                        //Resets Menu Return - Makes it false instead of true
	
	do
	{
		cout << "" << endl;                                                  //For Spacing
		cout << "[----[Platform]----]" << endl;                              //Platform Menu
		cout << "Current Platforms" << endl;                                 //Platform Intro Message
		cout << "" << endl;                                                  //For Spacing
		cout << "[1] - Playstation 5" << endl;                               //Option 1: Playstation 5
		cout << "[2] - Xbox Series X" << endl;                               //Option 2: Xbox Series X
		cout << "[3] - Nintendo Switch" << endl;                             //Option 3: Nintendo Switch
		cout << "[4] - Quit" << endl;                                        //Quit
		cout << "" << endl;                                                  //For Spacing
		cout << "Please Select One: ", cin >> PlayerC;

		
		while (PlayerC != 1 && PlayerC != 2 && PlayerC != 3 && PlayerC != 4) //Invalid Input
		{
			                                                                 
			cout << "[----[Platform]----]" << endl;                          //Platform Menu
			cout << "Invalid Input, please try again" << endl;               //Invalid Message
			cout << "" << endl;                                              //For Spacing
			cout << "[1] - Playstation 5" << endl;                           //Option 1: Playstation 5
			cout << "[2] - Xbox Series X" << endl;                           //Option 2: Xbox Series X
			cout << "[3] - Nintendo Switch " << endl;                        //Option 3: Nintendo Switch
			cout << "[4] - Quit" << endl;                                    //Quit
			cout << "" << endl;                                              //For Spacing
			cout << "Please Select One: ", cin >> PlayerC;                   //Player Choice 
			cout << "" << endl;                                              //For Spacing
		}
		
		if (PlayerC == 1)                                                    //Player Choice = 4 (Playstation 5)
		{
			cout << "Platform: Playstation 5" << endl;                       //Platform
			cout << "Manufacturer: Sony" << endl;                            //Manufacturer
			cout << "" << endl;                                              //For Spacing
			//cout << "Array of games" << endl;
			system("PAUSE");                                          //System command so the player can go back
		}
		
		if (PlayerC == 2)                                                    //Player Choice = 2 (Xbox Series X)
		{
			cout << "Platform: Xbox Series X" << endl;                       //Platform
			cout << "Manufacturer: Microsoft" << endl;                       //Manufacturer
			cout << "" << endl;                                              //For Spacing
			//cout << "Array of games" << endl;                 
			system("PAUSE");                                          //System command so the player can go back
		}
		
		if (PlayerC == 3)                                                    //Player Choice = 3 (Nintendo Switch)
		{
			cout << "Platform: Nintendo Switch" << endl;                     //Platform
			cout << "Manufacturer: Nintendo" << endl;                        //Manufacturer
			cout << "" << endl;                                              //For Spacing
			//cout << "Array of games" << endl;
			system("PAUSE");                                          //System command so the player can go back
		}
		
		if (PlayerC == 4)                                                    //Player Choice = 4 (Quit)
		{
			MenuR = true;                                                    //Menu Return = true which breaks loop
		}
		
	} while (MenuR == false);                                                //Platform Menu Loop
}