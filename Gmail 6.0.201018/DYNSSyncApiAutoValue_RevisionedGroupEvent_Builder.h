//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncApiRevisionedGroupEvent_Builder.h"

@class ComGoogleCommonCollectImmutableList, DYNSCommonGroupId, DYNSSyncApiWriteRevision;

@interface DYNSSyncApiAutoValue_RevisionedGroupEvent_Builder : DYNSSyncApiRevisionedGroupEvent_Builder
{
    DYNSCommonGroupId *groupId_;
    DYNSSyncApiWriteRevision *writeRevision_;
    ComGoogleCommonCollectImmutableList *eventBodies_;
}

- (void)dealloc;
- (id)build;
- (id)setEventBodiesWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setWriteRevisionWithDYNSSyncApiWriteRevision:(id)arg1;
- (id)setGroupIdWithDYNSCommonGroupId:(id)arg1;

@end
