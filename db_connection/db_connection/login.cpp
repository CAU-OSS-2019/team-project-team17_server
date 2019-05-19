#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <winsock2.h>
#include <mysql.h>

#pragma comment(lib, "libmysql.lib")

using namespace std;

#define HOST "gamehaeduo-db.c8xdbny5rkis.ap-northeast-2.rds.amazonaws.com"
#define USERNAME "gamehaeduo"
#define PASSWORD "caugamehaeduo"
#define DBNAME "gamehaeduo"
#define PORTNUM 3306

struct UserInfo {

	char nickname[30];
	char id[30];
	char pwd[30];

};

void main()
{
	UserInfo user;

	MYSQL conn;
	MYSQL *connection = NULL;
	MYSQL_RES *sql_result;
	MYSQL_ROW sql_row;
	int query_state;

	char query[255];

	cout << "Sign In" << endl;

	cout << "id : ";
	cin >> user.id;

	mysql_init(&conn);

	connection = mysql_real_connect(&conn, HOST, USERNAME, PASSWORD, DBNAME, PORTNUM, NULL, 0);

	if (connection == NULL) {
		cout << "DB Not Connected : " << mysql_error(&conn) << endl;
		return;
	}

	sprintf(query, "SELECT * FROM login WHERE id='%s'", user.id);

	query_state = mysql_query(connection, query);

	if (query_state != 0) {
		cout << "Login failed : " << mysql_error(&conn) << endl;
		mysql_close(&conn);
		return;
	}

	sql_result = mysql_store_result(connection);

	while ((sql_row = mysql_fetch_row(sql_result)) != NULL) {
		strcpy(user.nickname, sql_row[0]);
		strcpy(user.id, sql_row[1]);
		strcpy(user.pwd, sql_row[2]);
	}

	cout << "nickname\tid\tpassword" << endl;
	cout << user.nickname << "\t" << user.id << "\t" << user.pwd << endl;


	mysql_close(&conn);

}