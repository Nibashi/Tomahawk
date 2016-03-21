#include <stdio.h>
#include <stdlib.h>

#include "http_node.h"
#include "http_parser.h"

int main ( int argc, char * argv [] ) {
	int cursor = 0;
	HTTP_Node * http_message = malloc ( sizeof ( HTTP_Node ) ); 

	/*ok*///char request [] = "GET / HTTP/1.1\n\rHost:www.cvedetails.com\n\rUser-Agent:Mozilla/5.0 (X11; Linux x86_64; rv:44.0) Gecko/20100101 Firefox/44.0 (\"comment\")\n\rAccept:		 text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\n\rAccept-Language:	fr,fr-FR;q=0.8,en-US;q=0.5,en;q=0.3\n\rAccept-Encoding :	fr,fr-FR;q=0.8,en-US;q=0.5,en;q=0.3\n\rConnection: tryit\n\r\n\r";
	/*ok*///char request [] = "GET / HTTP/1.1\n\rHost: www.cvedetails.com\n\rUser-Agent: Mozilla/5.0 (X11; Linux x86_64; rv:44.0) Gecko/20100101 Firefox/44.0 (\"comment\") \n\rAccept:		 text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\n\rAccept-Language:	fr,fr-FR;q=0.8,en-US;q=0.5,en;q=0.3	\n\rAccept-Encoding: *   ; q=0.876\n\rConnection: tryit\n\r\n\r";
	/*ok*///char request [] = "NINJATURTLE / HTTP/A.1\n\rUser-Agent: Wget/1.16 (linux-gnu)\n\rAccept: */*\n\rHost: www.google.com\n\rConnection: Keep-Alive\n\r\n\r";
	/*ok*///char request [] = "NINJATURTLE /niNjA/chuck/maurice/ HTTP/9.1\n\rPrenom: Chuck\n\rNom: Maurice\n\r\n\rOne ring to rule them all\n\r";
	/*ok*/char request [] = "NINJATURTLE /niNjA/chuck/maurice/ HTTP/9.1\n\rPrenom: Chuck\n\rNom: Maurice\n\r\n\rOne ring to rule them all";

	if ( parse_HTTP_message ( request, &cursor, http_message ) ) { 
		printf ( "La requete est valide \n" );

		print_HTTP_Tree ( request, http_message, 0 );

	}
	
	free_HTTP_Tree ( http_message );

	return 0;
}