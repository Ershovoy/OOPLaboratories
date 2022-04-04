#include "ProgramDemo.h"

void WritePersonDemoToConsole()
{
	try
	{
		Person* person1 = new Student("Ilya", "Ershov", "Alexeevich", 2020);
		Person* person2 = new Teacher("Goryainov", "Aleksandr", "Evgenevich", "Programmer");
		Person* person3 = new Teacher("Kalentev", "Aleksej", "Anatolevich", "Programmer");

		WriteNamesToConsole(person1);
		WriteNamesToConsole(person2);
		WriteNamesToConsole(person3);

		delete person1;
		delete person2;
		delete person3;
	}
	catch (const char* error)
	{
		std::cerr << error << '\n';
	}
}

void WriteUserDemoToConsole()
{
	int userCount = 4;
	User** users = new User * []
	{
		new User("morkovka1995", "1995morkovka"),
			new User("ilonMask", "XA12"),
			new User("megazver", "password"),
			new User("yogurt", "ksTPQzSu"),
	};
	int paidUserCount = 4;
	User** paidUsers = new User * []
	{
		new PaidUser("TheKnyazz", "JHPzPGFG"),
			new PaidUser("systemEXE", "UgfkDGmU"),
			new PaidUser("RazorQ", "TBgRnbCP"),
			new PaidUser("schdub", "CetyQVID"),
	};

	std::string login = "megazver";
	std::string password = "password";
	User* loginedUser = Login(users, userCount, login, password);

	std::cout << "Signed in as: " << loginedUser->GetLogin() << '\n';

	login = "systemEXE";
	password = "UgfkDGmU";
	User* loginedPaidUser = Login(paidUsers, paidUserCount, login, password);

	std::cout << "Signed in as: " << loginedPaidUser->GetLogin() << '\n';

	for (int i = 0; i < userCount; i++)
	{
		delete users[i];
	}
	delete[] users;

	for (int i = 0; i < paidUserCount; i++)
	{
		delete paidUsers[i];
	}
	delete[] paidUsers;
}

void WriteDiscountDemoToConsole()
{
	Product* product1 = new Product("LG49N000", 40'000, ProductCategory::TV);
	Product* product2 = new Product("Q1", 2'000, ProductCategory::Micromax);
	Product* product3 = new Product("M650", 8'000, ProductCategory::Pantum);
	Product* product4 = new Product("LasetJet", 11'000, ProductCategory::HP);

	DiscountBase* discount1 = new PercentDiscount(ProductCategory::TV, 25.0f);
	DiscountBase* discount2 = new PercentDiscount(ProductCategory::Micromax, 25.0f);

	WriteDiscountDifferenceToConsole(discount1, product1);
	WriteDiscountDifferenceToConsole(discount2, product2);
	WriteDiscountDifferenceToConsole(discount2, product3);
	WriteDiscountDifferenceToConsole(discount2, product4);
}