#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<fstream.h>
#include<ctype.h>
class emp{
public:
  char name[20];
  char f_name[20];
  char m_name[20];
  int age;
  char qual[10];
  int y_pass;
  char pass_no[10];
  char pan[10];
  char email[25];
  char u_name[15];
  char pass[20];
  char ph[15];
  void view_as_administrator (){
    fstream fin;
      fin.open ("prosan1.txt", ios::in | ios::out);
      fin.seekg (0);
    while (!fin.eof ()){
	fin.read ((char *) &e, sizeof (e));
	if (fin.eof ())
	  break;
	cout << "Name: " << e.name << endl;
	cout << "Father's Name: " << e.f_name << endl;
	cout << "Mother's Name: " << e.m_name << endl;
	cout << "Age: " << e.age << endl;
	cout << "Phone Number: " << e.ph << endl;
	cout << "Qualification: " << e.qual << endl;
	cout << "Year of passing: " << e.qual << ": " << e.y_pass << endl;
	cout << "Passport Number: " << e.pass_no << endl;
	cout << "PAN Number: " << e.pan << endl;
	cout << "E-Mail ID: " << e.email << endl;
	cout << "Username: " << e.u_name << endl;
	cout << "Password: " << e.pass << endl << endl;
	cout << "\n \n";
	getch ();
    }
    fin.close ();
  }
  int view_as_employee (){
    cout << "Name: " << name << endl;
    cout << "Father's Name: " << f_name << endl;
    cout << "Mother's Name: " << m_name << endl;
    cout << "Age: " << age << endl;
    cout << "Phone Number: " << ph << endl;
    cout << "Qualification: " << qual << endl;
    cout << "Year of passing: " << qual << ": " << y_pass << endl;
    cout << "Passport Number: " << pass_no << endl;
    cout << "PAN Number: " << pan << endl;
    cout << "E-Mail ID: " << email << endl;
    cout << "Username: " << u_name << endl;
    cout << "Password: " << pass << endl << endl;
    return 1;
  }
  void view_as_manager(){
    fstream fin;
    fin.open ("prosan1.txt", ios::in);
    fin.seekg (0);
    while (!fin.eof ()){
	fin.read ((char *) &e, sizeof (e));
	if (fin.eof ())
	  break;
	cout << "Name: " << e.name << endl;
	cout << "Age: " << e.age << endl;
	cout << "Qualification: " << e.qual << endl;
	cout << "Year of passing: " << e.qual << ": " << e.y_pass << endl;
	cout << "Passport Number: " << e.pass_no << endl;
	cout << "PAN Number: " << e.pan << endl;
	cout << "\n \n";
	getch ();
    }
    fin.close ();
  }
  char *get_pass (){
    char emp_pass[30];
    for (int i = 0; i <= 15; i++){
	emp_pass[i] = getch ();
	if ((emp_pass[i] == '\b') && (emp_pass[i] != '\r')){
	    if (i == 0)
	      cout << "\b" << " " << "\b";
	    else if (i >= 1){
		emp_pass[i - 1] = '\0';
		i = i - 2;
		cout << "\b" << " " << "\b";
	    }
	}
	else if (emp_pass[i] != '\r')
	  cout << "*";
	else if (emp_pass[i] == '\r'){
	    emp_pass[i] = '\0';
	    break;
	}
  }
    return emp_pass;
 }
}e;

void main(){
  clrscr();
  int ch1, s_or_m, m = 0, y, num, cc = 0, a = 0, e_a, op, ch5, ch6, ch9;
  char ch2, s_or_man[10], emp_pass[20], ch, ch4, c, emp_name[20], ch7, u_id[15], ch8, n;
  unsigned long int k, s, emp_no;
  long int sal;
  unsigned int seedval;
  fstream fin;
  cout << "*       * ****** *******     ******* ******  ***** *   * " << endl;
  cout << "* *     * *         *           *    *       *     *   * " << endl;
  cout << "*   *   * *****     *           *    *****   *     ***** " << endl;
  cout << "*     * * *         *           *    *       *     *   * " << endl;
  cout << "*       * ******    *           *    ******  ***** *   * " << endl;
  do{
      m = 0;
    cur:cout << "WELCOME TO NET TECH SOLUTIONS PRIVATE LIMITED" << endl <<
	endl;
      cout << "1.EMPLOYEE" << endl;
      cout << "2.ADMINISTRATOR" << endl;
      cout << endl;
      cout << "Enter your choice(1/2): ";
      cin >> e_a;
      switch (e_a){
	case 1:
	  {
	    cout <<
	      "-------------------------------EMPLOYEE------------------------------------"
	      << endl;
	    cout << endl;
	    cout << "Are you a staff or manager?(staff/manager): ";
	    cin >> s_or_man;
	    if ((strcmp (s_or_man, "staff") == 0)
		|| (strcmp (s_or_man, "s") == 0)
		|| (strcmp (s_or_man, "STAFF") == 0)
		|| (strcmp (s_or_man, "S") == 0))
	      s_or_m = 1;
	    else if ((strcmp (s_or_man, "manager") == 0)
		     || (strcmp (s_or_man, "MANAGER") == 0)
		     || (strcmp (s_or_man, "M") == 0)
		     || (strcmp (s_or_man, "m") == 0))
	      s_or_m = 2;
	    else
	      s_or_m = 3;
	    switch (s_or_m)
	      {
	      case 1:
		{
		  cout <<
		    "----------------------------------STAFF-------------------------------------"
		    << endl;
		  cout << endl;
		  cout << endl;
		  fin.open ("prosan1.txt",
			    ios::app | ios::ate | ios::in | ios::out);
		  cout << "Are you an existing employee?(y/n): ";
		  cin >> ch2;
		  if ((ch2 == 'n') || (ch2 == 'N'))
		    {
		      cout <<
			"----------------------WELCOME TO THE REGISTRATION PAGE-----------------------"
			<< endl;
		      cout << endl;
		      cout << endl;
		    name:cout << "Enter your name: ";
		      gets (e.name);
		      for (int y = 0; e.name[y] != '\0'; y++)
			{
			  if (!isalpha (e.name[y]))
			    {
			      cerr << "INVALID NAME" << endl;
			      cout << "Do you want to re-enter?(y/n): ";
			      cin >> n;
			      if ((n == 'y') || (n == 'Y'))
				goto name;
			      else
				{
				  cout << "REGISTRATION FAILED" << endl;
				  exit (0);
				}
			    }
			  if ((e.name[0] >= 97) && (e.name[0] <= 122))
			    {
			      ch = e.name[0];
			      e.name[y] = toupper (ch);
			    }
			  if (e.name[y] == ' ')
			    {
			      int a = ++y;
			      ch = e.name[a];
			      e.name[y] = toupper (ch);
			    }
			}
		    f_n:cout <<
			"Enter your father's name: ";
		      gets (e.f_name);
		      for (y = 0; e.f_name[y] != '\0'; y++)
			{
			  if (!isalpha (e.f_name[y]))
			    {
			      cerr << "INVALID NAME" << endl;
			      cout << "Do you want to re-enter?(y/n): ";
			      cin >> n;
			      if ((n == 'y') || (n == 'Y'))
				goto f_n;
			      else
				{
				  cout << "REGISTRATION FAILED" << endl;
				  exit (0);
				}
			    }
			  if ((e.f_name[0] >= 97) && (e.f_name[0] <= 122))
			    {
			      ch = e.f_name[0];
			      e.f_name[y] = toupper (ch);
			    }
			  if (e.f_name[y] == ' ')
			    {
			      int a = ++y;
			      ch = e.f_name[a];
			      e.f_name[y] = toupper (ch);
			    }
			}
		    m_n:cout <<
			"Enter your mother's name: ";
		      gets (e.m_name);
		      for (y = 0; e.m_name[y] != '\0'; y++)
			{
			  if (!isalpha (e.m_name[y]))
			    {
			      cerr << "INVALID NAME" << endl;
			      cout << "Do you want to re-enter?(y/n): ";
			      cin >> n;
			      if ((n == 'y') || (n == 'Y'))
				goto m_n;
			      else
				{
				  cout << "REGISTRATION FAILED" << endl;
				  exit (0);
				}
			    }
			  if ((e.m_name[0] >= 97) && (e.m_name[0] <= 122))
			    {
			      ch = e.m_name[0];
			      e.m_name[y] = toupper (ch);
			    }
			  if (e.m_name[y] == ' ')
			    {
			      int a = ++y;
			      ch = e.m_name[a];
			      e.m_name[y] = toupper (ch);
			    }
			}
		    s:cout << "Enter your age: ";
		      cin >> e.age;
		      if ((e.age < 22) || (e.age > 60))
			{
			  cerr << "INVALID AGE" << endl;
			  cout << "Do you want to re-enter?(y/n): ";
			  cin >> ch4;
			  if ((ch4 == 'y') || (ch4 == 'y'))
			    goto s;
			  else
			    {
			      cerr << "REGISTRATION FAILED" << endl;
			      if (getch ())
				exit (0);
			    }
			}
		    qual:cout <<
			"Enter your qualification: ";
		      gets (e.qual);
		      for (y = 0; e.qual[y] != '\0'; y++)
			{
			  if ((!isalpha (e.qual[y])) && (e.qual[y] != '.')
			      && (e.qual[y] != '(') && (e.qual[y] != ')'))
			    {
			      cerr << "INVALID QUALIFICATION" << endl;
			      cout << "Do you want to re-enter?(y/n): ";
			      cin >> n;
			      if ((n == 'y') || (n == 'Y'))
				goto qual;
			      else
				{
				  cout << "REGISTRATION FAILED" << endl;
				  exit (0);
				}
			    }
			}
		    yr:cout << "Enter your year of passing " << e.
			qual << ": ";
		      cin >> e.y_pass;
		      if ((e.y_pass <= 2015 - e.age + 42)
			  && (e.y_pass >= e.y_pass < 2015 - e.age + 22)
			  && (e.y_pass > 2014))
			{
			  cerr << "You entered an invalid year" << endl;
			  cout << "Do you want to re-enter?(y/n): ";
			  cin >> ch8;
			  if ((ch8 == 'y') || (ch8 == 'Y'))
			    goto yr;
			  else
			    exit (0);
			}
		      cout << "Enter your passport number: ";
		      gets (e.pass_no);
		      cout << "Enter your PAN number: ";
		      gets (e.pan);
		    q:cout << "Enter your E-Mail ID: ";
		      gets (e.email);
		      for (int r = 0; e.email[r] != '\0'; r++)
			{
			  if (e.email[r] == '@')
			    cc++;
			}
		      for (r = 0; e.email[r] != '\0'; r++)
			{
			  if (e.email[r] == '.')
			    a++;
			}
		      if ((cc == 0) || (a == 0))
			{
			  cerr << "INVALID E-Mail ID " << endl;
			  cout << "Do you want to re-enter?(y/n): ";
			  cin >> ch4;
			  if ((ch4 == 'y') || (ch4 == 'Y'))
			    goto q;
			  else
			    {
			      cerr << "REGISTRATION FAILED" << endl;
			      if (getch ())
				exit (0);
			    }
			}
		    phone:cout <<
			"Enter your mobile number: ";
		      gets (e.ph);
		      for (int i = 0; e.ph[i] != '\0'; i++)
			if (!isdigit (e.ph[i]))
			  {
			    cerr << "You entered an invalid number" << endl;
			    cout << "Do you want to continue?(y/n): ";
			    cin >> ch8;
			    if ((ch8 == 'y') || (ch8 == 'Y'))
			      goto phone;
			    else
			      exit (0);
			  }
		      for (i = 0; e.ph[i] != '\0'; i++);
		      if (i != 10)
			{
			  cerr << "You entered an invalid number" << endl;
			  cout << "Do you want to continue?(y/n): ";
			  cin >> ch8;
			  if ((ch8 == 'y') || (ch8 == 'Y'))
			    goto phone;
			  else
			    exit (0);
			}
		      cout << "Enter your user name: ";
		      gets (e.u_name);
		    lb:cout << "Enter your password: ";
		      strcpy (e.pass, e.get_pass ());
		      cout << endl;
		      cout << "Enter your password to confirm: ";
		      strcpy (emp_pass, e.get_pass ());
		      cout << endl;
		      if (strcmp (e.pass, emp_pass) == 0)
			{
			  cout << "Password match" << endl;
			  cout << "Your user name is: " << e.u_name << endl;
			qqw:time_t t;
			  seedval = (unsigned) time (&t);
			  srand (seedval);
			  for (int i = 0; i < 5; i++)
			    {
			      k = rand ();
			    }
			  cout << "Type the characters below: ";
			  cout << k;
			  cout << endl;
			  cout << "Type the code: ";
			  cin >> s;
			  if (s == k)
			    {
			      cout << "REGISTRATION SUCCESSFUL" << endl;
			      cout << "A mail will be sent to your ID";
			      fin.seekg (0, ios::end);
			      fin.write ((char *) &e, sizeof (e));
			    }
			  else
			    {
			      cerr << "TRY ANOTHER CODE";
			      cout << endl;
			      goto qqw;
			    }
			}
		      else
			{
			  cerr << "Password doesnot match" << endl;
			  cout << "Do you want to re-enter?(y/n): " << endl;
			  cin >> ch4;
			  if ((ch8 == 'y') || (ch4 == 'Y'))
			    goto lb;
			  else
			    exit (0);
			}
		    }
		  fin.close ();
		  if ((ch2 == 'y') || (ch2 == 'Y'))
		    {
		      cout << "Enter your user-name: ";
		      gets (u_id);
		      cout << "Enter the password: ";
		      strcpy (emp_pass, e.get_pass ());
		      cout << endl << endl << endl;
		      fin.open ("prosan1.txt", ios::in | ios::out);
		      fin.seekg (0);
		      while (!fin.eof ())
			{
			  fin.read ((char *) &e, sizeof (e));
			  if ((strcmp (e.u_name, u_id) == 0)
			      && (strcmp (e.pass, emp_pass) == 0))
			    {
			      m = e.view_as_employee ();
			      break;
			    }
			}
		      if (m == 0)
			cerr << "EMPLOYEE DETAILS NOT FOUND" << endl;
		      fin.close ();
		    }
		}
		break;
	      case 2:
		{
		  cout <<
		    "---------------------------------MANAGER----------------------------------"
		    << endl;
		  cout << endl;
		  e.view_as_manager ();
		}
		break;
	      default:
		cerr << "INVALID CHOICE";
	      }			//staff or manager(switch)
	  }
	  break;
	case 2:
	  {
	    int op;
	    cout <<
	      "----------------------------ADMINISTRATOR----------------------------------"
	      << endl;
	    cout << endl;
	    cout << "1.CHECK THE EMPLOYEE DETAILS" << endl;
	    cout << "2.UPDATE THE EMPLOYEE DETAILS" << endl;
	    cout << "Enter your choice: ";
	    cin >> op;
	    cout << endl;
	    switch (op)
	      {
	      case 1:
		{
		  fin.open ("prosan1.txt", ios::in);
		  cout <<
		    "--------------------------------CHECK EMPLOYEE DETAILS------------------------------"
		    << endl;
		  cout << endl;
		  cout << endl;
		  cout << "Enter the name of the employee: ";
		  gets (emp_name);
		  for (y = 0; emp_name[y] != '\0'; y++)
		    {
		      if ((emp_name[0] >= 97) && (emp_name[0] <= 122))
			{
			  ch = emp_name[0];
			  emp_name[y] = toupper (ch);
			}
		      if (emp_name[y] == ' ')
			{
			  int a = ++y;
			  ch = emp_name[a];
			  emp_name[y] = toupper (ch);
			}
		    }
		  fin.seekg (0);
		  while (!fin.eof ())
		    {
		      fin.read ((char *) &e, sizeof (e));
		      if (fin.eof ())
			break;
		      if (strcmp (emp_name, e.name) == 0)
			{
			  cout << "Name: " << e.name << endl;
			  cout << "Father's Name: " << e.f_name << endl;
			  cout << "Mother's Name: " << e.m_name << endl;
			  cout << "Age: " << e.age << endl;
			  cout << "Phone Number: " << e.ph << endl;
			  cout << "Qualification: " << e.qual << endl;
			  cout << "Year of passing: " << e.qual << ": " << e.
			    y_pass << endl;
			  cout << "Passport Number: " << e.pass_no << endl;
			  cout << "PAN Number: " << e.pan << endl;
			  cout << "E-Mail ID: " << e.email << endl;
			  cout << "Username: " << e.u_name << endl;
			  cout << "Password: " << e.pass << endl << endl;
			  ch5 = 1;
			}
		    }
		  if (ch5 != 1)
		    cerr << "EMPLOYEE DETAILS NOT FOUND" << endl;
		}
		fin.close ();
		break;
	      case 2:
		{
		  cout <<
		    "------------------------------UPDATE EMPLOYEE DETAILS-----------------------"
		    << endl << endl;
		  e.view_as_administrator ();
		  fin.open ("prosan1.txt", ios::in | ios::out);
		  fin.seekg (0);
		  cout <<
		    "Enter the name of the employee whose details are to be modified: ";
		  gets (emp_name);
		  for (y = 0; emp_name[y] != '\0'; y++)
		    {
		      if ((emp_name[0] >= 97) && (emp_name[0] <= 122))
			{
			  ch = emp_name[0];
			  emp_name[y] = toupper (ch);
			}
		      if (emp_name[y] == ' ')
			{
			  int a = ++y;
			  ch = emp_name[a];
			  emp_name[y] = toupper (ch);
			}
		    }
		  ch5 = 0;
		  while (!fin.eof ())
		    {
		      fin.read ((char *) &e, sizeof (e));
		      if (strcmp (emp_name, e.name) == 0)
			{
			  if (ch5 == 1)
			    break;
			  ch5 = 1;
			  cout << "You can edit only: " << endl;
			  cout << "1.Phone Number: " << endl;
			  cout << "2.Passport Number: " << endl;
			  cout << "3.E-Mail ID: " << endl;
			  cout << "4.Username: " << endl;
			  cout << "5.Password: " << endl << endl;
			  cout << "Enter your choice: ";
			  cin >> ch9;
			  switch (ch9)
			    {
			    case 1:
			      {
				cout <<
				  "--------------------------CHANGE OF PHONE NUMBER------------------------------"
				  << endl;
				cout << endl;
				cout << "Enter the password: ";
				strcpy (emp_pass, e.get_pass ());
				cout << endl;
				if (strcmp (e.pass, emp_pass) == 0)
				  {
				  mob:cout <<
				      "Enter the new Phone Number: ";
				    gets (e.ph);
				    for (int i = 0; e.ph[i] != '\0'; i++)
				      if (!isdigit (e.ph[i]))
					{
					  cerr <<
					    "You entered an invalid number" <<
					    endl;
					  cout <<
					    "Do you want to continue?(y/n): ";
					  cin >> ch8;
					  if ((ch8 == 'y') || (ch8 == 'Y'))
					    goto mob;
					  else
					    exit (0);
					}
				    for (i = 1; e.ph[i] != '\0'; i++);
				    if (i != 10)
				      {
					cerr <<
					  "You entered an invalid number" <<
					  endl;
					cout <<
					  "Do you want to re-enter?(y/n): ";
					cin >> ch8;
					if ((ch8 == 'y') || (ch8 == 'Y'))
					  goto mob;
					else
					  {
					    cout <<
					      "Sorry. You cannot change your phone number"
					      << endl;
					    if (getch ())
					      exit (0);
					  }
				      }
				    fin.seekp (fin.tellg () - sizeof (e));
				    fin.write ((char *) &e, sizeof (e));
				  }
				else
				  cerr << "Password doesnot match" << endl;
			      }
			      break;
			    case 2:
			      {
				cout <<
				  "------------------------------CHANGE OF PASSPORT NUMBER--------------------------"
				  << endl;
				cout << endl;
				cout << "Enter the password: ";
				strcpy (emp_pass, e.get_pass ());
				cout << endl;
				if (strcmp (e.pass, emp_pass) == 0)
				  {
				    cout << "Enter the new Passport Number: ";
				    cin >> e.pass_no;
				    fin.seekp (fin.tellg () - sizeof (e));
				    fin.write ((char *) &e, sizeof (e));
				  }
				else
				  cerr << "Password doesnot match" << endl;
				break;
			      }
			    case 3:
			      {
				cout <<
				  "--------------------------CHANGE OF E-MAIL ID------------------------------"
				  << endl;
				cout << endl;
				cout << "Enter the password: ";
				strcpy (emp_pass, e.get_pass ());
				cout << endl;
				if (strcmp (e.pass, emp_pass) == 0)
				  {
				  mail:cout <<
				      "Enter the new E-Mail ID: ";
				    gets (e.email);
				    for (int r = 0; e.email[r] != '\0'; r++)
				      {
					if (e.email[r] == '@')
					  cc++;
				      }
				    for (r = 0; e.email[r] != '\0'; r++)
				      {
					if (e.email[r] == '.')
					  a++;
				      }
				    if ((cc == 0) || (a == 0))
				      {
					cerr << "INVALID E-Mail ID " << endl;
					cout <<
					  "Do you want to re-enter?(y/n): ";
					cin >> ch4;
					if ((ch4 == 'y') || (ch4 == 'Y'))
					  goto mail;
					else
					  {
					    cerr <<
					      "E-mail ID cannot be changed "
					      << endl;
					    if (getch ())
					      exit (0);
					  }
				      }
				    fin.seekp (fin.tellg () - sizeof (e));
				    fin.write ((char *) &e, sizeof (e));
				  }
				else
				  cerr << "Password doesnot match" << endl;
				break;
			      }
			    case 4:
			      {
				cout <<
				  "------------------------------CHANGE OF USERNAME---------------------------"
				  << endl;
				cout << endl;
				cout << "Enter the password: ";
				strcpy (emp_pass, e.get_pass ());
				cout << endl;
				if (strcmp (e.pass, emp_pass) == 0)
				  {
				    cout << "Enter the new Username: ";
				    cin >> e.u_name;
				    fin.seekp (fin.tellg () - sizeof (e));
				    fin.write ((char *) &e, sizeof (e));
				  }
				else
				  cerr << "Password doesnot match" << endl;
				break;
			      }
			    case 5:
			      {
				cout <<
				  "-----------------------------CHANGE OF PASSWORD-----------------------------"
				  << endl;
				cout << endl;
				cout << "Enter the current password: ";
				strcpy (emp_pass, e.get_pass ());
				cout << endl;
				if (strcmp (e.pass, emp_pass) == 0)
				  {
				    cout << "Enter the new Password: ";
				    for (int i = 0; i <= 15; i++)
				      {
					e.pass[i] = getch ();
					if ((e.pass[i] == '\b')
					    && (e.pass[i] != '\r'))
					  {
					    if (i == 0)
					      cout << "\b" << " " << "\b";
					    else if (i >= 1)
					      {
						emp_pass[i - 1] = '\0';
						i = i - 2;
						cout << "\b" << " " << "\b";
					      }
					  }
					else if (e.pass[i] != '\r')
					  cout << "*";
					else if (e.pass[i] == '\r')
					  {
					    e.pass[i] = '\0';
					    break;
					  }
				      }
				    fin.seekp (fin.tellg () - sizeof (e));
				    fin.write ((char *) &e, sizeof (e));
				  }
				else
				  cerr << "Password doesnot match" << endl;
			      }
			      break;
			    default:
			      cerr << "INVALID CHOICE" << endl;
			    }	//editing switch
			}
		    }
		  if (ch5 != 1)
		    cerr << "EMPLOYEE DETAILS NOT FOUND" << endl;
		  fin.close ();
		}		//UPDATE
		break;
	      default:
		cerr << "INVALID CHOICE" << endl;
	      }			//option
	  }			//case 2
	  break;
	default:
	  {
	    cerr << "INVALID CHOICE" << endl;
	  }
	}			//switch administrator
    h:cout << "\nDo you want to continue?(y/n): ";
      cin >> ch7;
      clrscr ();
    }
  while ((ch7 == 'Y') || (ch7 == 'y'));
  if ((ch7 == 'n') || (ch7 == 'N'))
    exit (0);
  getch ();
}				//main
