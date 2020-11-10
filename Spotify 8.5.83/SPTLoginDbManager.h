//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString, SPTLoginTestManager;

@interface SPTLoginDbManager : NSObject
{
    _Bool _isReady;
    NSString *_documentsDirectoryPath;
    NSString *_databaseDirectoryPath;
    NSString *_databaseFilename;
    NSString *_databaseFileFullPath;
    SPTLoginTestManager *_testManager;
    NSDateFormatter *_formatter;
}

+ (id)methodFromSourceScreen:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(readonly, nonatomic) SPTLoginTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) NSString *databaseFileFullPath; // @synthesize databaseFileFullPath=_databaseFileFullPath;
@property(readonly, nonatomic) NSString *databaseFilename; // @synthesize databaseFilename=_databaseFilename;
@property(readonly, nonatomic) NSString *databaseDirectoryPath; // @synthesize databaseDirectoryPath=_databaseDirectoryPath;
@property(readonly, nonatomic) NSString *documentsDirectoryPath; // @synthesize documentsDirectoryPath=_documentsDirectoryPath;
@property(readonly, nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (_Bool)shouldRun;
- (void)cleanOldRecords;
- (id)readUserFromRecord:(struct sqlite3_stmt *)arg1;
- (void)updateUserInfo:(id)arg1 displayName:(id)arg2 loginMethod:(id)arg3 imgurl:(id)arg4 logoutDate:(id)arg5;
- (void)saveUserInfo:(id)arg1 displayName:(id)arg2 loginMethod:(id)arg3 imgurl:(id)arg4 logoutDate:(id)arg5;
- (void)updateOrCreateUserInfo:(id)arg1 displayName:(id)arg2 loginMethod:(id)arg3 imageURL:(id)arg4 logoutDate:(id)arg5;
- (id)findAllUsers;
- (id)findUserByUsername:(id)arg1;
- (_Bool)ensureDb;
- (void)bootstrapDb;
- (_Bool)initializeDatabase:(id)arg1;
- (id)initWithTestManager:(id)arg1;

@end
