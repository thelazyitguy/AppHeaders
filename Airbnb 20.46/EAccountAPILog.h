//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EAccountAPILog : NSObject
{
}

+ (float)getFreeDiskspace;
+ (_Bool)hasFreeSpece;
+ (id)readContentsFromErrorFileByString;
+ (void)addOneLogToErrorFileByArray:(id)arg1;
+ (id)contentsOfDirectory:(id)arg1;
+ (void)writeTofile:(id)arg1 path:(id)arg2 content:(id)arg3;
+ (_Bool)fileExist:(id)arg1;
+ (void)deleteErrorFile;
+ (_Bool)errorFileExist;
+ (id)errorFilePath;
+ (id)getDocumentsPath;
+ (id)dicValueFormatter:(id)arg1;
+ (id)dictionaryToJson:(id)arg1;
+ (void)startOneSDKLog;

@end

