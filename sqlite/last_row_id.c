#include<stdio.h>
#include<sqlite3.h>

int main(void)
{
    sqlite3 *db;
    char *err_msg = 0;

    char *sql = "drop table if exists books;"
                "create table books(name text,publication text,price int);"
                "insert into books values('Operating System Concepts','Wiley',599);"
                "insert into books values('Computer Graphics C Version','Pearson',899);"
                "insert into books values('Artificial Intelegence Using C','McGraw-Hill',2079);"
                "insert into books values('Wren & Martin','Blackie',310);"
                "insert into books values('UGC NET/SET','TRUEMAN',450);";
    
    if(sqlite3_open(":memory:",&db) == SQLITE_OK)
    {
        if(sqlite3_exec(db,sql,0,0,&err_msg) == SQLITE_OK)
        {
            printf("SQL insertion successful\n");

            // Get last row id and print it
            int last_id = sqlite3_last_insert_rowid(db);
            printf("The last Id of the inserted row is %d\n", last_id);
        }
        else
            printf("SQL error: %s\n", err_msg);

        // Clear pointer db and err_msg
        sqlite3_free(err_msg);
        sqlite3_close(db);
    }
    
    return 0;
}
