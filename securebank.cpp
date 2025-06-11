#include <iostream>
#include <string>

class Bank
{
private:
	int balance;

public:
	Bank()
	{
		balance = 0;
	}

	void setBalance(int b)
	{
		balance = b;
	}

	int getBalance()
	{
		return balance;
	}
};

class Player
{
private:
	int wallet;

public:
	Player()
	{
		wallet = 5000;
	}

	void setWallet(int w)
	{
		wallet = w;
	}

	int getWallet()
	{
		return wallet;
	}
};

void veryVeryRich()
{
	system("cat flag.txt");
}

int main()
{
	Player player;
	Bank bank;

	while (true)
	{
		int option;
		int amount;

		std::cout << "[===SKI CTF Secure Bank Application===]\n";
		std::cout << "1. Check Wallet\n";
		std::cout << "2. Check Bank Balance\n";
		std::cout << "3. Deposit\n";
		std::cout << "4. Withdraw\n";
		std::cout << "5. Print Flag\n";
		std::cout << "6. Exit\n";
		std::cout << "[=====================================]\n";
		std::cout << "Option: ";

		std::cin >> option;

		switch (option)
		{
		case 1:
			std::cout << "Player's wallet: " << player.getWallet() << "\n\n";
			break;
		case 2:
			std::cout << "Bank balance: " << bank.getBalance() << "\n\n";
			break;
		case 3:
			std::cout << "Amount to deposit: ";
			std::cin >> amount;

			if (amount > player.getWallet())
			{
				std::cout << "The amount you're trying to deposit is larger than the money you currently have." << "\n\n";
				break;
			}

			bank.setBalance(bank.getBalance() + amount);
			player.setWallet(player.getWallet() - amount);

			std::cout << "Transaction successful!" << "\n\n";
			break;
		case 4:
			std::cout << "Amount to withdraw: ";
			std::cin >> amount;

			if (amount > bank.getBalance())
			{
				std::cout << "The amount you're trying to withdraw is larger than the money you currently have in the Bank." << "\n\n";
				break;
			}

			player.setWallet(player.getWallet() + amount);
			bank.setBalance(bank.getBalance() - amount);

			std::cout << "Transaction successful!" << "\n\n";
			break;
		case 5:
			if (bank.getBalance() >= 9999)
			{
				veryVeryRich();
			}
			else
			{
				std::cout << "You're not rich enough (*≧︶≦))(￣▽￣* )ゞ\n\n";
			}
			break;
		default:
			exit(0);
			break;
		}
	}

	return 0;
}
