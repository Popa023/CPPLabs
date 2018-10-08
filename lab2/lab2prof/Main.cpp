/**
 *  Main.cpp
 */

#include "ReadArray.h"
#include "Stats.h"
#include "WriteNumber.h"

int main()
{
    char ifstring[100], ofstring[100];
    cout << "Chose the input file";
    cin >> ifstring;
    cout << "Chose the output file";
    cin >> ofstring;
    ReadArray readArr(ifstring);
    readArr.readFile();

    /* temporary testing loop
    for (int i = 0; i<readArr.count; i++)
        cout << readArr.array[i] << endl;
    cout << "count is" << readArr.count << endl;
    */



    WriteNumber writer(ofstring);
    writer.writeString("Average: ");
    writer.writeDouble(Stats::average(readArr.array, readArr.count));
    writer.writeString("Largest: ");
    writer.writeInt(Stats::largest(readArr.array, readArr.count));
    writer.writeString("Sum: ");
    writer.writeInt(Stats::sum(readArr.array, readArr.count));
    writer.writeString("Deviation: ");
    writer.writeDouble(Stats::deviation(readArr.array, readArr.count));
    writer.writeString("Most: ");
    writer.writeInt(Stats::frequently(readArr.array,readArr.count));
    writer.close();
}
