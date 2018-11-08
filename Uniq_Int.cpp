#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;//Although bad Practice, it is for brevity

void FileInput(ifstream &dataf, int &count, int numread[]);
void UniqInt(int numset[], int checkArr[], int &count, int &newsub);// The function that stores the integers in a array
void FileOutput(ofstream &outf, int outset[], int &subscript);

int main()
{
        int counter, newcount(0);//The highest subscript
        int matrix[500];
        int matrix2[500];
        ifstream inputf;
        ofstream outputf;
        inputf.open("D:\\C++\\ints.txt");//Opening the input file
        outputf.open("D:\\C++\\Outfile.txt");
        if (inputf.fail())//File Trap
        {
                cout << "File is not Found \n";
                exit(1);
        }
        FileInput(inputf, counter, matrix);
        UniqInt(matrix, matrix2, counter, newcount);
        FileOutput(outputf, matrix2, newcount);
        inputf.close();
        outputf.close();
        return 0;
}

void FileInput(ifstream &dataf, int &count, int numread[])
{
        count = 0;
        dataf >> numread[count];
        while (!dataf.eof())
        {
                cout << numread[count];
                count++;//Increasing the subscript before another value is stored
                dataf >> numread[count];//Putting the value of the int inside the array and putting the subscript inside.
        }

        return;
}

void UniqInt(int numset[], int checkArr[], int &subscript, int &newsub)
{
        bool a = false;
        checkArr[0] = numset[subscript];// Putting the last value of the array to the first subscript
        int i, j, store(0);
        for (i = subscript - 1; i >= 0; i--)
        {
                newsub++;
                store = numset[i];
                for (j = 0; j < newsub; j++)//for checking if the file double
                {
                        if (checkArr[j] = store)
                        
                                bool a = true;
                }

                        if (a = false)
                                checkArr[newsub] = numset[i];
                        a = false;
                }
        }
        return;


void FileOutput(ofstream &outf, int outset[], int &subscript)
{
        int b = 1, x(0);
        while (x < subscript)
        {
                if (b == 12)
                {
                        outf << '\n';
                        b = 1;
                    }
                else
                        outf << setw(3) << outset[x];
                b++;
                x++;
        }
        return;
}

