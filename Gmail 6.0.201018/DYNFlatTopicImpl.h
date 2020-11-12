//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNTopic-Protocol.h"

@class NSString;
@protocol DYNGroupBase, DYNTopicId;

@interface DYNFlatTopicImpl : NSObject <DYNTopic>
{
    id <DYNTopicId> _topicId;
    long long _sortTimeMicros;
    long long _lastReadTimeMicros;
    _Bool _isLocked;
    _Bool _isOffTheRecord;
    _Bool _isMuted;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(readonly, nonatomic) _Bool isOffTheRecord; // @synthesize isOffTheRecord=_isOffTheRecord;
@property(readonly, nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(readonly, nonatomic) long long lastReadTimeMicros; // @synthesize lastReadTimeMicros=_lastReadTimeMicros;
@property(readonly, nonatomic) long long sortTimeMicros; // @synthesize sortTimeMicros=_sortTimeMicros;
@property(readonly, nonatomic) id <DYNTopicId> topicId; // @synthesize topicId=_topicId;
@property(readonly, nonatomic) id <DYNGroupBase> searchResultGroup;
@property(readonly, nonatomic) NSString *groupName;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
