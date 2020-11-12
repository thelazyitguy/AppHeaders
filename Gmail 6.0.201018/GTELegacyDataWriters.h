//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTEDataWriter-Protocol.h"

@class GTEDataBox, GTELegacyTaskListsWriter, GTELegacyUserMetadataWriter, NSMutableDictionary, NSString;
@protocol GTEIDGeneratorProvider><GTETimeServiceProvider;

@interface GTELegacyDataWriters : NSObject <GTEDataWriter>
{
    NSObject<GTEIDGeneratorProvider><GTETimeServiceProvider> *_appContext;
    GTEDataBox *_dataBox;
    GTELegacyTaskListsWriter *_taskListsWriter;
    GTELegacyUserMetadataWriter *_userMetadataWriter;
    NSMutableDictionary *_taskWriters;
}

- (void).cxx_destruct;
- (void)updateInstanceLifecycleStageOfRecurringTasksForListsModel:(id)arg1;
- (void)drain;
- (id)tasksWriterForListWithID:(id)arg1;
- (id)userMetadataWriter;
- (id)taskListsWriter;
- (id)initWithAppContext:(id)arg1 dataBox:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
