//add include statements
#include "func.h"

using std::cout;

//add function code here
double get_gc_content(const std::string& dna)
{
    
    int i=0, count=0;
    for(i=0;i<dna.size();i++)
    {
       if(dna[i] == 'G' || dna[i] == 'C')
        {
            count++;
        }


        

    }
        return 0;
    
}

void string_get_dna_complement(std::string dna)
{

}

void string_get_reverse_string(std::string dna)
{
    
}