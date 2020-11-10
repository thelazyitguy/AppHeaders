//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTCompanionEventObserver-Protocol.h>
#import <Module_Framework/YTTriggerAdapter-Protocol.h>

@class GIMMe, NSMutableDictionary, NSString;
@protocol YTTriggerAdapterDelegate;

@interface YTLayoutSelfExitRequestedTriggerAdapter : NSObject <YTTriggerAdapter, YTCompanionEventObserver>
{
    id <YTTriggerAdapterDelegate> _delegate;
    NSMutableDictionary *_registeredTriggers;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)layoutExitReason:(unsigned long long)arg1 matchesTriggerCategory:(unsigned long long)arg2;
- (void)activeTriggersWithLayoutID:(id)arg1 exitReason:(unsigned long long)arg2;
- (void)companionDidClearWithLayoutID:(id)arg1;
- (void)unregisterTrigger:(id)arg1;
- (_Bool)registerTrigger:(id)arg1 withTriggerCategory:(unsigned long long)arg2 slot:(id)arg3 layout:(id)arg4;
- (void)layout:(id)arg1 didRequestExitItselfForReason:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

