#ifndef HTTP_PARSER_H
#define HTTP_PARSER_H

/*!
 * \file http_parser.h
 * \brief Parseur HTTP 1.0
 * \author R. Vidal / A. Lorber / T. Jacumin
 * \version 1.0
 */

#include <stdio.h>
#include <stdlib.h>

#include "http_node.h"

/**
 * \fn int parse_HTTP_message ( char * request, int * cursor, HTTP_Node * node )
 * \brief Fonction de création d'une nouvelle instance d'un objet HTTP_Node.
 *
 * \param request Chaine contenant la requête.
 * \param cursor Pointeur vers la position de la lecture de la requête.
 * \param node Pointeur vers le noeud utilisé pour sauvegarder la valeur de l'élément correspondant au noeud.
 * 
 * \return Retourne 1 si la requête est correcte, 0 sinon.
 */
int parse_HTTP_message ( char * request, int * cursor, HTTP_Node * node );

/**
 * \fn int parse_start_line ( char * request, int * cursor, HTTP_Node * node )
 * \brief Fonction de création d'une nouvelle instance d'un objet HTTP_Node.
 *
 * \param request Chaine contenant la requête.
 * \param cursor Pointeur vers la position de la lecture de la requête.
 * \param node Pointeur vers le noeud utilisé pour sauvegarder la valeur de l'élément correspondant au noeud.
 * 
 * \return Retourne 1 si la requête est correcte, 0 sinon.
 */
int parse_start_line ( char * request, int * cursor, HTTP_Node * node );

/**
 * \fn int parse_status_line ( char * request, int * cursor, HTTP_Node * node )
 * \brief Fonction de création d'une nouvelle instance d'un objet HTTP_Node.
 *
 * \param request Chaine contenant la requête.
 * \param cursor Pointeur vers la position de la lecture de la requête.
 * \param node Pointeur vers le noeud utilisé pour sauvegarder la valeur de l'élément correspondant au noeud.
 * 
 * \return Retourne 1 si la requête est correcte, 0 sinon.
 */
int parse_status_line ( char * request, int * cursor, HTTP_Node * node );

/**
 * \fn int parse_header_field ( char * request, int * cursor, HTTP_Node * node )
 * \brief Fonction de création d'une nouvelle instance d'un objet HTTP_Node.
 *
 * \param request Chaine contenant la requête.
 * \param cursor Pointeur vers la position de la lecture de la requête.
 * \param node Pointeur vers le noeud utilisé pour sauvegarder la valeur de l'élément correspondant au noeud.
 * 
 * \return Retourne 1 si la requête est correcte, 0 sinon.
 */
int parse_header_field ( char * request, int * cursor, HTTP_Node * node );

/**
 * \fn int parse_message_body ( char * request, int * cursor, HTTP_Node * node )
 * \brief Fonction de création d'une nouvelle instance d'un objet HTTP_Node.
 *
 * \param request Chaine contenant la requête.
 * \param cursor Pointeur vers la position de la lecture de la requête.
 * \param node Pointeur vers le noeud utilisé pour sauvegarder la valeur de l'élément correspondant au noeud.
 * 
 * \return Retourne 1 si la requête est correcte, 0 sinon.
 */
int parse_message_body ( char * request, int * cursor, HTTP_Node * node );

#endif