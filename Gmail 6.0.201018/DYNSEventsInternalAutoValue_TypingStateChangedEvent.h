//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSEventsInternalTypingStateChangedEvent.h"

@class DYNSCommonEntityId, DYNSCommonUserId, DYNSDataModelsTypingState;

@interface DYNSEventsInternalAutoValue_TypingStateChangedEvent : DYNSEventsInternalTypingStateChangedEvent
{
    DYNSCommonUserId *userId_;
    DYNSDataModelsTypingState *typingState_;
    long long timestampMicros_;
    DYNSCommonEntityId *entityId_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getEntityId;
- (long long)getTimestampMicros;
- (id)getTypingState;
- (id)getUserId;

@end

