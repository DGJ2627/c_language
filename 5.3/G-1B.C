#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
     int chocie,language,account,
     pin,password,amount,
     balance,withdraw,
     deposite,transfer;
     clrscr();     
	 p("Enter 1 for English:\n");
	 p("Enter 2 for Hindi:\n");
	 p("Enter 3 for Gujarati:\n");
	 p("Which language you choice:");
	 s("%d",&language);
	 
	 switch (language)
	 {
	 	case 1:
			{
			p("Creat your account:");
			s("%d",&amount);
			p("Creat your bank_account password:");
			s("%d",&password);
			p("Enter 1 for check your account balance\t:\n");
			p("Enter 2 for withdraw your account\t:\n");
			p("Enter 3 for deposite in your account\t:\n");
			p("Enter 4 for transfer your account\t:\n");
			p("Enter your chocie:");
			s("%d",&chocie);
			p("Enter you creat your password:");
			s("%d",&pin);
			if(password==pin)
			    {
				      switch (chocie)
					   {


							case 1:
							    {
								p("you chocie check balance service:\n");
								p("Your current balance:%d\n",amount);
								p("------------------------------\n");
								p("|       Hello Sir&Medam      |\n");
								p("|       ---------------      |\n");
								p("|             %d          |\n",amount);
								p("|          Thank you         |\n");
								p("|            coming.         |\n");
								p("|                            |\n");
								p("------------------------------\n");
								break;
		                                            }
		                                        case 2:
		                                            {
		                                                p("you chocie withdraw service:\n");
		                                                p("how much amount you withdraw:\n");
		                                                s("%d",&withdraw);
		                                                balance=amount-withdraw;
		                                                p("Your current balance:%d\n",balance);
		                                                p("------------------------------\n");
		                                                p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|            %d           |\n",balance);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
		                                        case 3:
		                                            {
		                                                p("you chocie deposite service:\n");
		                                                p("how much amount you depostie:\n");
		                                                s("%d",&deposite);
		                                                balance=amount+deposite;
		                                                p("Your current balance:%d\n",balance);
		                                                p("------------------------------\n");
		                                                p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|            %d           |\n",balance);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
		                                        case 4:
		                                            {
		                                                p("you chocie transfer service:\n");
		                                                p("how much amount you dwithdraw:\n");
		                                                s("%d",&transfer);
		                                                balance=amount-transfer;
		                                                p("Your current balance:%d\n",balance);
		                                                p("------------------------------\n");
	                                                    p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|            %d           |\n",balance);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
	                                            default :
		                                                p("You enter invalid chocie:\n");


                                           }
                            }
                            else
	                            {
	                                p("you enter wrong pin number:\n");
	                            }


               break;
           }
		   
		   	 	case 2:
	 		{
	 		            p("Creat your account:");
                        s("%d",&amount);
                        p("Creat your bank_account password:");
                        s("%d",&password);
                        p("Enter 1 for check your account balance\t:\n");
                        p("Enter 2 for withdraw your account\t:\n");
                        p("Enter 3 for deposite in your account\t:\n");
                        p("Enter 4 for transfer your account\t:\n");
                        p("Enter your chocie:");
                        s("%d",&chocie);
                        p("Enter you creat your password:");
                        s("%d",&pin);
                        if(password==pin)
                            {
                                      switch (chocie)
                                           {


		                                        case 1:
		                                            {
		                                                p("you chocie check balance service:\n");
		                                                p("Your current balance:%d\n",amount);
		                                                p("------------------------------\n");
		                                                p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|             %d          |\n",amount);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
		                                        case 2:
		                                            {
		                                                p("you chocie withdraw service:\n");
		                                                p("how much amount you withdraw:\n");
		                                                s("%d",&withdraw);
		                                                balance=amount-withdraw;
		                                                p("Your current balance:%d\n",balance);
		                                                p("------------------------------\n");
		                                                p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|            %d           |\n",balance);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
		                                        case 3:
		                                            {
		                                                p("you chocie deposite service:\n");
		                                                p("how much amount you depostie:\n");
		                                                s("%d",&deposite);
		                                                balance=amount+deposite;
		                                                p("Your current balance:%d\n",balance);
		                                                p("------------------------------\n");
		                                                p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|            %d           |\n",balance);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
		                                        case 4:
		                                            {
		                                                p("you chocie transfer service:\n");
		                                                p("how much amount you dwithdraw:\n");
		                                                s("%d",&transfer);
		                                                balance=amount-transfer;
		                                                p("Your current balance:%d\n",balance);
		                                                p("------------------------------\n");
	                                                    p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|            %d           |\n",balance);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
	                                            default :
		                                                p("You enter invalid chocie:\n");


                                           }
                            }
                            else
	                            {
	                                p("you enter wrong pin number:\n");
	                            }


                break;
           }
           
           	 	case 3:
	 		{
	 		            p("Creat your account:");
                        s("%d",&amount);
                        p("Creat your bank_account password:");
                        s("%d",&password);
                        p("Enter 1 for check your account balance\t:\n");
                        p("Enter 2 for withdraw your account\t:\n");
                        p("Enter 3 for deposite in your account\t:\n");
                        p("Enter 4 for transfer your account\t:\n");
                        p("Enter your chocie:");
                        s("%d",&chocie);
                        p("Enter you creat your password:");
                        s("%d",&pin);
                        if(password==pin)
                            {
                                      switch (chocie)
                                           {


		                                        case 1:
		                                            {
		                                                p("you chocie check balance service:\n");
		                                                p("Your current balance:%d\n",amount);
		                                                p("------------------------------\n");
		                                                p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|             %d           |\n",amount);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
		                                        case 2:
		                                            {
		                                                p("you chocie withdraw service:\n");
		                                                p("how much amount you withdraw:\n");
		                                                s("%d",&withdraw);
		                                                balance=amount-withdraw;
		                                                p("Your current balance:%d\n",balance);
		                                                p("------------------------------\n");
		                                                p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|            %d           |\n",balance);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
		                                        case 3:
		                                            {
		                                                p("you chocie deposite service:\n");
		                                                p("how much amount you depostie:\n");
		                                                s("%d",&deposite);
		                                                balance=amount+deposite;
		                                                p("Your current balance:%d\n",balance);
		                                                p("------------------------------\n");
		                                                p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|            %d           |\n",balance);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
		                                        case 4:
		                                            {
		                                                p("you chocie transfer service:\n");
		                                                p("how much amount you dwithdraw:\n");
		                                                s("%d",&transfer);
		                                                balance=amount-transfer;
		                                                p("Your current balance:%d\n",balance);
		                                                p("------------------------------\n");
	                                                    p("|       Hello Sir&Medam      |\n");
		                                                p("|       ---------------      |\n");
		                                                p("|            %d           |\n",balance);
		                                                p("|          Thank you         |\n");
		                                                p("|            coming.         |\n");
		                                                p("|                            |\n");
		                                                p("------------------------------\n");
		                                                break;
		                                            }
	                                            default :
		                                                p("You enter invalid chocie:\n");


                                           }
                            }
                            else
	                            {
	                                p("you enter wrong pin number:\n");
	                            }


                  break;
           }
		   
		default :
		       p("You Enter invalid choice:");	   	
	}

      getch();
 }
