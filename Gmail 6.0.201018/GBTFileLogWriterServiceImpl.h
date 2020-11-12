//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTFileLogWriterService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GBTFileLogWriterServiceImpl : NSObject <GBTFileLogWriterService>
{
    NSMutableDictionary *_logWriters;
    unsigned long long _totalLogSize;
    _Bool _initialCleanupCompleted;
    _Bool _logCleanupEnabled;
}

- (void).cxx_destruct;
- (void)cleanupIfNeeded;
- (void)calculateLogSize;
- (void)setupLogDirectory;
- (void)appDidEnterBackground;
- (void)increaseTotalLogSizeBy:(unsigned long long)arg1;
- (id)allLogFilesWithPrefix:(id)arg1;
- (void)enableLogCleanup;
- (void)closeAllLogWriters;
- (id)logWriterWithName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *logDirectory;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
