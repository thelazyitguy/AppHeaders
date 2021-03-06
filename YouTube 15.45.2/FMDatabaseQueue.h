//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabase, NSString;
@protocol OS_dispatch_queue;

@interface FMDatabaseQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    FMDatabase *_db;
    int _openFlags;
    NSString *_path;
    NSString *_vfsName;
}

+ (Class)databaseClass;
+ (id)databaseQueueWithURL:(id)arg1 flags:(int)arg2;
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;
+ (id)databaseQueueWithURL:(id)arg1;
+ (id)databaseQueueWithPath:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;
- (void)beginTransaction:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)database;
- (void)interrupt;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 flags:(int)arg2;
- (id)initWithPath:(id)arg1 flags:(int)arg2;
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;

@end

