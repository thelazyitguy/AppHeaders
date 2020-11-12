//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTETaskListsModelReading-Protocol.h"

@class GTELegacyUserDefaults, GTEStorageFileReader, NSString;

@interface GTETaskListsModelReaderVersion24To26 : NSObject <GTETaskListsModelReading>
{
    GTEStorageFileReader *_fileReader;
    GTELegacyUserDefaults *_userDefaults;
    NSString *_userID;
}

- (void).cxx_destruct;
- (id)taskListsFileURLWithDirectoryURL:(id)arg1;
- (id)readTaskListsModelFromDirectoryURL:(id)arg1;
- (id)initWithFileReader:(id)arg1 userDefaults:(id)arg2 userID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
