#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void FileInput(ifstream &dataf, int &count, int numread[]);
void UniqInt(int numset[], int checkArr[], int &count, int &newsub);
void FileOutput(ofstream &outf, int outset[], int &subscript);

int main()
{
        int counter, newcount(0);//The highest subscript
        int matrix[500];//The first array
        int matrix2[500];//The second array
        ifstream inputf;//Declaring the input file
        ofstream outputf;//Declaring the outputfile
        inputf.open("D:\\C++\\ints.txt");//Opening the input file
        outputf.open("D:\\C++\\Outfile.txt");//Opening the output file
        if (inputf.fail())//File Trap
        {
                cout << "File is not Found \n";
                exit(1);
        }
        FileInput(inputf, counter, matrix);// The function that stores the integers in a array
        UniqInt(matrix, matrix2, counter, newcount);//Function that finds and reverses the uniq integers
        FileOutput(outputf, matrix2, newcount);//Function that utputs the ints to an output file
        inputf.close();//Closes everything
        outputf.close();//Closes everything
        return 0;
}

void FileInput(ifstream &dataf, int &count, int numread[])
{
        count = 0;//Count will give the value of the subscript
        dataf >> numread[count];//Since it is 0, it will store only one value
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
        bool a = false;//Default value for the boolean
        checkArr[0] = numset[subscript];// Putting the last value of the array to the first subscript
        int i, j, store(0);//Declaring variables. i and j are counters. Store is a temp value
        for (i = subscript - 1; i >= 0; i--)//Doing a for loop for reading an array backwards
        {
                newsub++;//This is the counter for the new array subscript
                store = numset[i];//Storing the first value to the array
                for (j = 0; j < newsub; j++)//for checking if the file double
                {
                        if (checkArr[j] = store)//If the file is indeed equal to another value, then
                        
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
        int b = 1, x(0);//Creating the counters for the lines
        while (x < subscript)//While the outputting subscripts is less than the newsubscript
        {
                if (b == 12)//In the case that b is equal to 12
                {
                        outf << '\n';// End the line
                        b = 1;//reset b
                    }
                else
                        outf << setw(3) << outset[x];//Otherwise, output the files
                b++;//Add b
                x++;// add x 
        }
        return;
}

