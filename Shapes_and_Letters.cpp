#include <iostream>
#include <thread>
#include <chrono>
#include <cmath>
using namespace std;

                                // triangle
void triangle()
{
	int rows = 0;
	cout << "Enter The Number Of Rows: ";
	cin >> rows;
	int spaces = rows - 1;
	int stars = 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < spaces; j++)
		{
			cout << " ";
		}
		spaces--;
		for (int k = 0; k < stars; k++)
		{
			cout << "*";
		}
		cout << "\n";
		stars += 2;
	}
	
	
}

                            // emtyTriangle

void emptyTriangle()
{
    int height = 0;
    cout << "Enter number of rows: ";
    cin >> height;
    int spaces = height - 1;
    int stars = 1;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < stars; k++)
        {
            if (k == 0 || i == height - 1 || k == stars - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        spaces--;
        stars += 2;
        cout << "\n";
    }
    
}

                                 // invertedTriangle


void invertedTriangle()
{
    int height;
    cout << "Enter Height: ";
    cin >> height;
    int stars = 2 * height - 1;
    int spaces = 0;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
       
        for (int k = 0; k < stars; k++)
        {
            cout << "*";
        }
        cout << "\n";
        stars -= 2;
        spaces++;
    }
 
}


                          //  square
void square()
{
    int height = 0;
    cout << "Enter Height: ";
    cin >> height;
    int stars =  height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
 
}

                  // rectangular
void rectangular()
{
    int height = 0;
    int width = 0;
    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;
    int stars = width;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
  
}

                // Two Triangles At The Same Base
void Two_Triangles_At_The_Same_Base()
{
    int height;
    cout << "Enter Height: ";
    cin >> height;
    int spaces = ((height + 1) / 2) - 1;
    int stars = 1;
    for (int i = 0; i < ((height + 1) / 2); i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < stars; k++)
        {
            cout << "*";
        }

        cout << "\n";
        if (i != ((height + 1) / 2) - 1)
        {
            spaces--;
            stars += 2;
        }

    }
    spaces++;
    stars -= 2;
    for (int u = 0; u < (height - ((height + 1) / 2)); u++)
    {

        for (int l = 0; l < spaces; l++)
        {
            cout << " ";
        }
        for (int p = 0; p < stars; p++)
        {
            cout << "*";
        }
        spaces++;
        stars -= 2;
        cout << "\n";
    }
}


                // Two Empty Triangles At The Same Base
void Two_Empty_Triangles_At_The_Same_Base()
{
    int height;
    cout << "Enter Height: ";
    cin >> height;
    int spaces = ((height + 1) / 2) - 1;
    int stars = 1;
    int H = (height + 1) / 2;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < stars; k++)
        {
            if (k == 0 || k == stars - 1 || i == H - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
        if (i != ((height + 1) / 2) - 1)
        {
            spaces--;
            stars += 2;
        }

    }
    spaces++;
    stars -= 2;
    for (int u = 0; u < (height - ((height + 1) / 2)); u++)
    {

        for (int l = 0; l < spaces; l++)
        {
            cout << " ";
        }
        for (int p = 0; p < stars; p++)
        {
            if (p == 0 || p == stars - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        spaces++;
        stars -= 2;
        cout << "\n";
    }
}


void drawCircle()
{
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    int scale = 2;
    for (int y = -radius; y <= radius; y++)
    {
        for (int x = -radius * scale; x <= radius * scale; x++)
        {
            if ((x * x) / (scale * scale) + (y * y) <= (radius * radius))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}




              // Letter A
void Letter_A()
{
    int height = 0;
    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter Load Time: ";
    int LoadTime;
    cin >> LoadTime;
    int stars = 1;
    int spaces = height - 1;
    for (int i = 0; i < height; i++)
    {
        this_thread::sleep_for(chrono::milliseconds(LoadTime));
        for (int j = 0; j < spaces; j++)
        {
            this_thread::sleep_for(chrono::milliseconds(LoadTime));
            cout << " ";
        }

        for (int j = 0; j < stars; j++)
        {
            this_thread::sleep_for(chrono::milliseconds(LoadTime));
            if (j == 0 || j == stars - 1 || i == height / 2)
            {
            cout << "*";

            }
            else
            {
                cout << " ";
            }
         
        }
        cout << "\n";
        spaces --;
        stars += 2; 
        
    }
  
}


               // Letter X
void Letter_X()
{
    int rows = 0;
    cout << "Enter Number Of Rows: ";
    cin >> rows;
   for(int i = 1;i <= rows; i++)
   {
       for (int j = 1; j <= rows; j++)
       {
           if (i == j || j == (rows + 1) - i)
           {
               cout << "*";
           }
           else
           {
               cout << " ";
           }
       }
       cout << "\n";
   }
}
 
                   // Letter Z
void Letter_Z()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == (5 + 1) - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

                   // Letter H
void Letter_H()
{
    cout << "Enter Height: ";
    int Height;
    cin >> Height;
    for (int i = 0; i < Height; ++i)
    {
        for (int j = 0; j < Height; ++j)
        {
            if (j == 0 || j == Height - 1 || i == Height / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}



void ChooseAndDraw()
{
    int choose1 = 0;
    int choose2 = 0;
    cout << "Do You Want To Draw Shape Or Letter\n";
    cout << "Press 1 To Choose Between Shapes\n";
    cout << "Press 2 To Choose Between Letters\n";
    cin >> choose1;
    switch (choose1)
    {
    case 1:
        cout << "Which Shape You Want To Draw\n";
        cout << "Press 1 ==> Tringle\n";
        cout << "Press 2 ==> Empty Triangle\n";
        cout << "Press 3 ==> inverted Triangle\n";
        cout << "Press 4 ==> square\n";
        cout << "Press 5 ==> rectangular\n";
        cout << "Press 6 ==> Two Triangles At The Same Base\n";
        cout << "Press 7 ==> Two Empty Triangles At The Same Base\n";
        cout << "Press 8 ==> Circle\n";
        cin >> choose2;
        switch (choose2)
        {
        case 1: triangle();
            break;
        case 2: emptyTriangle();
            break;
        case 3: invertedTriangle();
            break;
        case 4: square();
            break;
        case 5: rectangular();
            break;
        case 6:Two_Triangles_At_The_Same_Base();
            break;
        case 7:Two_Empty_Triangles_At_The_Same_Base();
            break;
        case 8:drawCircle();
            break;
        default:
            cout << "Invalid Choosing\n";
            cout << "Try Again\n";
            ChooseAndDraw();
            break;
        }
        break;

    case 2:
        cout << "Which Letter Do You Want To Draw\n";
        cout << "Press 1 To Draw Letter A\n";
        cout << "Press 2 To Draw Letter X\n";
        cout << "Press 3 To Draw Letter Z\n";
        cout << "Press 4 To Draw Letter H\n";
        cin >> choose2;
        switch (choose2)
        {
        case 1:Letter_A();
            break;
        case 2:Letter_X();
            break;
        case 3:Letter_Z();
            break;
        case 4:Letter_H();
            break;

        default: 
            cout << "Invalid Choosing\n";
            cout << "Try Again\n";
            ChooseAndDraw();
            break;
        }
        break;
    default:
        cout << "Invalid Choosing\n";
        cout << "Try Again\n";
        ChooseAndDraw();
        break;
    }
}


  void main()
  {
      ChooseAndDraw();
        
  }