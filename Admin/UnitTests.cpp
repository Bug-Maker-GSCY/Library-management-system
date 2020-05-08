#include "pch.h"
#include "CppUnitTest.h"
#include "../322Milestone/Admin.h"
#include "../322Milestone/User.h"
#include "../322Milestone/Admin.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestUserInit)
		{
			User *person = new User("Mark423", "ILoveMittens");
			Assert::AreEqual(string("Mark423"), person->getUserID());
		}
		TEST_METHOD(TestAdminInit)
		{
			Admin *person = new Admin("Mark423", "ILoveMittens");
			Assert::AreEqual(string("Mark423"), person->getUserID());
		}
		TEST_METHOD(TestAddUser)
		{
			Admin *person = new Admin("Mark423", "ILoveMittens");
			Assert::IsTrue(person->newUser("Lisa337", "ShuteFarms1"));
		}
		TEST_METHOD(TestRemoveUser)
		{
			Admin* person = new Admin("Mark423", "ILoveMittens");
			person->newUser("Lisa337", "ShuteFarms1");
			Assert::IsTrue(person->removeUserid("Lisa337"));
		}
		TEST_METHOD(TestFindUser)
		{
			Admin* person = new Admin("Mark423", "ILoveMittens");
			person->newUser("Lisa337", "ShuteFarms1");
			Assert::IsTrue(person->findUser("Lisa337"));
		}
	};
}
