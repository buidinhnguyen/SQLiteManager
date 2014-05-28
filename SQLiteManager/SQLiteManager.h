//
//  SQLiteManager.h
//
//  Created by Anthony Ly on 11/03/12.
//  Copyright (c) 2012 AnthonyLy.com. All rights reserved.
//
// Contribution: Nguyen Bui, Left Mobile


/***** Define your database file here  *****/
#define databaseName    @"database.sqlite"



#import <Foundation/Foundation.h>
#import <sqlite3.h>
@interface SQLiteManager : NSObject{
    NSString *databasePath;
}

+(SQLiteManager *)singleton;
-(void) checkAndCreateDatabaseWithOverwrite:(BOOL)overwriteDB;

#pragma SQL : SQL METHOD
-(NSArray *)findAllFrom:(NSString *)table;
-(NSArray *)find:(NSString *)field from:(NSString *)table where:(NSString *)condition;
-(NSArray *)find:(NSString *)field from:(NSString *)table where:(NSString *)condition order:(NSString *)order limit:(NSString *)limit;
-(NSDictionary*)findById:(int)idRow from:(NSString *)table;
-(BOOL)save:(NSMutableDictionary *)data into:(NSString *)table forceInsert:(BOOL) forceInsert;
-(BOOL)deleteRowWithId:(int)idRow from:(NSString *)table;
-(id)executeSql:(NSString *)sql;

@property(nonatomic, retain) NSString *databasePath;

@end
