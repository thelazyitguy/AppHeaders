//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLShanYanDatabaseQueue;

@interface CLShanYanSQLManager : NSObject
{
    CLShanYanDatabaseQueue *_clShanYanSDK_db_queue;
}

+ (id)shareInstance;
@property(retain, nonatomic) CLShanYanDatabaseQueue *clShanYanSDK_db_queue; // @synthesize clShanYanSDK_db_queue=_clShanYanSDK_db_queue;
- (void).cxx_destruct;
- (void)deleteDeviceByCount:(long long)arg1;
- (void)deleteContentlogByCount:(long long)arg1;
- (void)deleteDevice:(id)arg1;
- (void)deleteContentlog:(id)arg1;
- (void)queryShanYanContentLog:(long long)arg1 pageIndex:(long long)arg2 completehandler:(CDUnknownBlockType)arg3;
- (long long)countForTable:(id)arg1;
- (long long)countOfDeviceTable;
- (long long)countOfShanYanContentLogTable;
- (void)updateShanYanContentLog:(id)arg1 sid:(id)arg2;
- (id)queryShanYanContentLogIfExit:(id)arg1;
- (id)queryShanYanMaigration;
- (_Bool)queryDeviceIfExit:(id)arg1;
- (void)insertOrUpdateDeviceInfoData:(id)arg1;
- (void)insertFullLogData:(id)arg1;
- (void)insertSqliteMaigrationInfo;
- (_Bool)createTables;
- (_Bool)createDB;

@end
