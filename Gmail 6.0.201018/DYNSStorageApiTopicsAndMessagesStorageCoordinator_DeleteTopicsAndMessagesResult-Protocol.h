//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonCollectImmutableList, ComGoogleCommonCollectImmutableSet;

@protocol DYNSStorageApiTopicsAndMessagesStorageCoordinator_DeleteTopicsAndMessagesResult <JavaObject>
- (ComGoogleCommonCollectImmutableList *)snippetDeletedGroupIds;
- (ComGoogleCommonCollectImmutableList *)rangeInvalidatedGroupIds;
- (ComGoogleCommonCollectImmutableList *)deletedMessageIds;
- (ComGoogleCommonCollectImmutableList *)deletedTopicIds;
- (ComGoogleCommonCollectImmutableSet *)updatedGroupIds;
@end
