//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTETasksModelReading-Protocol.h"

@class GTELegacyUserDefaults, GTEStorageFileReader, NSString;

@interface GTETasksModelReaderVersion24To26 : NSObject <GTETasksModelReading>
{
    GTEStorageFileReader *_fileReader;
    GTELegacyUserDefaults *_userDefaults;
    NSString *_userID;
}

- (void).cxx_destruct;
- (id)absoluteDoneCountFileURLWithDirectoryURL:(id)arg1 taskListID:(id)arg2;
- (id)indentsByIDFileURLWithDirectoryURL:(id)arg1 taskListID:(id)arg2;
- (id)tasksFileURLWithDirectoryURL:(id)arg1 taskListID:(id)arg2;
- (id)doneIDsFileURLWithDirectoryURL:(id)arg1 taskListID:(id)arg2;
- (id)activeTaskIDsFileURLWithDirectoryURL:(id)arg1 taskListID:(id)arg2;
- (id)readinessForUseFileURLWithDirectoryURL:(id)arg1 taskListID:(id)arg2;
- (id)readTasksModelForListID:(id)arg1 fromDirectoryURL:(id)arg2;
- (id)initWithFileReader:(id)arg1 userDefaults:(id)arg2 userID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
