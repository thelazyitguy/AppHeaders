//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSDataModelsCustomStatus, DYNSDataModelsDndStatus_State, DYNSModelsCommonPresenceState, JavaUtilOptional;

@interface DYNSStatusImplUserStatusMemory_UserStatusSnapshot : NSObject
{
    DYNSDataModelsDndStatus_State *dndState_;
    DYNSModelsCommonPresenceState *presence_;
    JavaUtilOptional *expiryTimeMicros_;
    long long updateTimestampMillis_;
    DYNSDataModelsCustomStatus *customStatus_;
}

- (void)dealloc;

@end

