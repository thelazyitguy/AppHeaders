//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol AWSDDLogFileManager <NSObject>
@property(readonly, nonatomic) NSArray *sortedLogFileInfos;
@property(readonly, nonatomic) NSArray *sortedLogFileNames;
@property(readonly, nonatomic) NSArray *sortedLogFilePaths;
@property(readonly, nonatomic) NSArray *unsortedLogFileInfos;
@property(readonly, nonatomic) NSArray *unsortedLogFileNames;
@property(readonly, nonatomic) NSArray *unsortedLogFilePaths;
@property(readonly, copy, nonatomic) NSString *logsDirectory;
@property unsigned long long logFilesDiskQuota;
@property unsigned long long maximumNumberOfLogFiles;
- (NSString *)createNewLogFile;

@optional
- (void)didRollAndArchiveLogFile:(NSString *)arg1;
- (void)didArchiveLogFile:(NSString *)arg1;
@end
