//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTEDataMutationsWriter, GTELegacyUserDefaults, GTEStorageVersionedReadersProvider, GTEStorageWritersProvider, GTETaskListsModelWriter, GTETasksModelWriter, GTEUserFileManager, GTEUserMetadataWriter, NSString, NSURL;
@protocol GTEDataMutationsReading, GTETaskListsModelReading, GTETasksModelReading, GTEUserMetadataReading, OS_dispatch_queue;

@interface GTEStorage : NSObject
{
    NSURL *_rootDirectoryURL;
    NSString *_userID;
    GTELegacyUserDefaults *_userDefaults;
    GTEStorageWritersProvider *_writersProvider;
    GTEStorageVersionedReadersProvider *_readersProvider;
    GTEUserFileManager *_fileManager;
    id <GTETaskListsModelReading> _taskListsModelReader;
    id <GTETasksModelReading> _tasksModelReader;
    id <GTEDataMutationsReading> _dataMutationsReader;
    id <GTEUserMetadataReading> _userMetadataReader;
    GTETaskListsModelWriter *_taskListsModelWriter;
    GTETasksModelWriter *_tasksModelWriter;
    GTEDataMutationsWriter *_dataMutationsWriter;
    GTEUserMetadataWriter *_userMetadataWriter;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    _Bool _drained;
    _Bool _closed;
}

- (void).cxx_destruct;
- (void)testing_deleteFilesAndRemovePreferences;
- (void)testing_reset;
- (void)deleteFilesAndRemovePreferences;
- (void)executeStorageWriteBlock:(CDUnknownBlockType)arg1;
- (void)executeStorageReadBlock:(CDUnknownBlockType)arg1;
- (void)writeUserMetadata:(id)arg1;
- (id)readUserMetadata;
- (void)writeDataMutationQueue:(id)arg1;
- (id)readDataMutationQueue;
- (void)writeTasksModel:(id)arg1;
- (id)readTasksModelForListID:(id)arg1;
- (void)writeTaskListsModel:(id)arg1;
- (id)readTaskListsModel;
- (void)close;
- (void)drain;
- (void)dealloc;
- (id)initWithUserID:(id)arg1 fileManager:(id)arg2 readersProvider:(id)arg3 writersProvider:(id)arg4 userDefaults:(id)arg5;

@end
