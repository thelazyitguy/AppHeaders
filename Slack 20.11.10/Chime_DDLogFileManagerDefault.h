//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AmazonChimeSDKMedia/DDLogFileManager-Protocol.h>

@class NSString;

@interface Chime_DDLogFileManagerDefault : NSObject <DDLogFileManager>
{
    unsigned long long maximumNumberOfLogFiles;
    unsigned long long logFilesDiskQuota;
    NSString *_logsDirectory;
    NSString *_defaultFileProtectionLevel;
}

@property unsigned long long logFilesDiskQuota; // @synthesize logFilesDiskQuota;
@property unsigned long long maximumNumberOfLogFiles; // @synthesize maximumNumberOfLogFiles;
- (void).cxx_destruct;
- (id)applicationName;
- (id)createNewLogFile;
- (id)newLogFileName;
- (id)sortedLogFileInfos;
- (id)sortedLogFileNames;
- (id)sortedLogFilePaths;
- (id)unsortedLogFileInfos;
- (id)unsortedLogFileNames;
- (id)unsortedLogFilePaths;
- (id)logFileDateFormatter;
- (_Bool)isLogFile:(id)arg1;
- (id)logsDirectory;
- (id)defaultLogsDirectory;
- (void)deleteOldLogFiles;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithLogsDirectory:(id)arg1 defaultFileProtectionLevel:(id)arg2;
- (id)initWithLogsDirectory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
