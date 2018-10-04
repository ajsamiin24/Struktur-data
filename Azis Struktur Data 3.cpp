#include <iostream.h>
#include <conio.h>
#include <string.h>
main()
{
  char kata;
    cout<<"program menghapus huruf pada kata\n";
    cout<<"Masukkan kata: "; cin>>kata;
    cout<<"_________________________\n";
    int i=kata-1;
    for (i=kata;i>=0;i--)
	{
        for(int a=0;a<=i;a++)
		{
            cout<<kata;
        }
        cout<<endl;
    }
  getch();
}
