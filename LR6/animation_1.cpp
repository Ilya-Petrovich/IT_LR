#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
	string an[29] = { "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n  -\\. /-  \n / |. | \\ \n/  |. |  \\\n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n --\\. /-- \n/  |. |  \\\n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n  -\\. /---\n / |. |   \n/  |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_  /\n --\\. /-- \n/  |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/  /\n   _><_ / \n  -\\. /-  \n / |. |  \n/  |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/  *\n   _><_ / \n --\\. /-  \n/  |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/  /\n   _><_ / \n---\\. /-  \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/  *\n\\  _><_ / \n --\\. /-  \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n\\  \\--/  /\n \\ _><_ / \n  -\\. /-  \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n*  \\--/  *\n \\ _><_ / \n  -\\. /-  \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n*  _><_  *\n --\\. /-- \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n*--\\. /--*\n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
		              "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n --\\. /-- \n*  |. |  *\n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n  -\\. /-  \n / |. | \\ \n*  |. |  *\n   |__|   \n    ||    \n    ||    \n   _||_   \n",
		              "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n  -\\. /-  \n / |. | \\ \n/  |. |  \\\n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n --\\. /-- \n/  |. |  \\\n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n  -\\. /---\n / |. |   \n/  |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_  /\n --\\. /-- \n/  |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/  /\n   _><_ / \n  -\\. /-  \n / |. |  \n/  |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/  *\n   _><_ / \n --\\. /-  \n/  |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/  /\n   _><_ / \n---\\. /-  \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/  *\n\\  _><_ / \n --\\. /-  \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n\\  \\--/  /\n \\ _><_ / \n  -\\. /-  \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n*  \\--/  *\n \\ _><_ / \n  -\\. /-  \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n*  _><_  *\n --\\. /-- \n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n*--\\. /--*\n   |. |  \n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n --\\. /-- \n*  |. |  *\n   |. |    \n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n  -\\. /-  \n / |. | \\ \n*  |. |  *\n   |__|   \n    ||    \n    ||    \n   _||_   \n",
					  "   _[]_   \n   |~~|   \n   |oq|   \n  (|<>|)  \n   \\--/   \n   _><_   \n  -\\. /-  \n / |. | \\ \n/  |. |  \\\n   |__|   \n    ||    \n    ||    \n   _||_   \n"};
	for (int i = 0; i < 29; i++)
	{
		usleep(�*1000);
		system("cls");
		cout << an[i];
	}
	cin.get();
}