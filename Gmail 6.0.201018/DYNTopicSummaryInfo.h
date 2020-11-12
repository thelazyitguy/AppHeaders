//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;
@protocol DYNGroupBase, DYNTopicId;

@interface DYNTopicSummaryInfo : NSObject <NSCopying>
{
    _Bool _locked;
    _Bool _offTheRecord;
    id <DYNTopicId> _topicId;
    NSString *_groupName;
    long long _eventualSortTime;
    long long _currentSortTime;
    long long _lastReadTime;
    long long _initialLastReadTime;
    NSString *_continuationToken;
    id <DYNGroupBase> _groupModel;
    NSMutableArray *_topicSummaryItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *topicSummaryItems; // @synthesize topicSummaryItems=_topicSummaryItems;
@property(readonly, nonatomic) id <DYNGroupBase> groupModel; // @synthesize groupModel=_groupModel;
@property(readonly, nonatomic, getter=isOffTheRecord) _Bool offTheRecord; // @synthesize offTheRecord=_offTheRecord;
@property(readonly, nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(readonly, nonatomic) long long initialLastReadTime; // @synthesize initialLastReadTime=_initialLastReadTime;
@property(readonly, nonatomic) long long lastReadTime; // @synthesize lastReadTime=_lastReadTime;
@property(nonatomic) long long currentSortTime; // @synthesize currentSortTime=_currentSortTime;
@property(readonly, nonatomic) long long eventualSortTime; // @synthesize eventualSortTime=_eventualSortTime;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) id <DYNTopicId> topicId; // @synthesize topicId=_topicId;
- (unsigned long long)indexOfCollapsedSectionWithRange:(id)arg1;
- (long long)lastSentMessageCreatedAtMicros;
- (id)lastMessage;
- (_Bool)isSortedAfterWatermarkTimestamp:(long long)arg1;
- (id)firstUnreadMessage;
- (unsigned long long)numberOfMessagesSince:(long long)arg1;
- (unsigned long long)numberOfUnreadMessagesSince:(long long)arg1 optimisticLastReadTime:(long long)arg2 currentUserID:(id)arg3;
- (_Bool)hasUnreadMessagesSince:(long long)arg1 optimisticLastReadTime:(long long)arg2 currentUserID:(id)arg3;
- (void)markAsReadThroughTime:(long long)arg1;
- (void)updateForBump;
- (void)updateWithExpandedItems:(id)arg1 inRange:(id)arg2;
- (void)updateWithMoreSearchResults:(id)arg1 fetchedUsingContinuationToken:(id)arg2;
- (void)replaceOldMessageWithNewMessage:(id)arg1;
- (unsigned long long)insertionIndexForMessage:(id)arg1;
- (void)removeMessageWithID:(id)arg1;
- (unsigned long long)indexOfMessageWithID:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (id)allItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTopicSummary:(id)arg1;
- (id)initWithTopic:(id)arg1 items:(id)arg2 continuationToken:(id)arg3;
- (id)initWithTopicID:(id)arg1 groupName:(id)arg2 currentSortTime:(long long)arg3 eventualSortTime:(long long)arg4 initialLastReadTime:(long long)arg5 lastReadTime:(long long)arg6 locked:(_Bool)arg7 offTheRecord:(_Bool)arg8 groupModel:(id)arg9 items:(id)arg10 continuationToken:(id)arg11;

@end
