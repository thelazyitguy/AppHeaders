//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSEventsConnectionChangedEvent.h"

@class DYNSCommonConnectionState, JavaUtilOptional;

@interface DYNSEventsAutoValue_ConnectionChangedEvent : DYNSEventsConnectionChangedEvent
{
    DYNSCommonConnectionState *connectionState_;
    JavaUtilOptional *previousConnectionState_;
    JavaUtilOptional *offlineReason_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getOfflineReason;
- (id)getPreviousConnectionState;
- (id)getConnectionState;

@end
