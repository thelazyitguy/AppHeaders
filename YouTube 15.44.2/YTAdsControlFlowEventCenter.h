//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTLayoutEnteredEventListener-Protocol.h>
#import <Module_Framework/YTLayoutExitedEventListener-Protocol.h>
#import <Module_Framework/YTLayoutScheduledEventListener-Protocol.h>
#import <Module_Framework/YTLayoutUnscheduledEventListener-Protocol.h>
#import <Module_Framework/YTSlotEnteredEventListener-Protocol.h>
#import <Module_Framework/YTSlotExitedEventListener-Protocol.h>
#import <Module_Framework/YTSlotScheduledEventListener-Protocol.h>
#import <Module_Framework/YTSlotUnscheduledEventListener-Protocol.h>

@class NSHashTable, NSString;

@interface YTAdsControlFlowEventCenter : NSObject <YTSlotScheduledEventListener, YTSlotUnscheduledEventListener, YTSlotEnteredEventListener, YTSlotExitedEventListener, YTLayoutScheduledEventListener, YTLayoutUnscheduledEventListener, YTLayoutEnteredEventListener, YTLayoutExitedEventListener>
{
    NSHashTable *_slotScheduledEventListeners;
    NSHashTable *_slotUnscheduledEventListeners;
    NSHashTable *_slotEnteredEventListeners;
    NSHashTable *_slotExitedEventListeners;
    NSHashTable *_layoutScheduledEventListeners;
    NSHashTable *_layoutUnscheduledEventListeners;
    NSHashTable *_layoutEnteredEventListeners;
    NSHashTable *_layoutExitedEventListeners;
}

- (void).cxx_destruct;
- (void)logControlFlowEventWithSlot:(id)arg1 layout:(id)arg2 eventMessage:(id)arg3;
- (void)didUnscheduleSlot:(id)arg1;
- (void)didUnscheduleLayout:(id)arg1 forSlot:(id)arg2;
- (void)didScheduleSlot:(id)arg1;
- (void)didScheduleLayout:(id)arg1 forSlot:(id)arg2;
- (void)didExitSlot:(id)arg1;
- (void)didExitLayout:(id)arg1 forSlot:(id)arg2 exitReason:(unsigned long long)arg3;
- (void)didEnterSlot:(id)arg1;
- (void)didEnterLayout:(id)arg1 forSlot:(id)arg2;
- (void)removeLayoutExitedEventListener:(id)arg1;
- (void)addLayoutExitedEventListener:(id)arg1;
- (void)removeLayoutEnteredEventListener:(id)arg1;
- (void)addLayoutEnteredEventListener:(id)arg1;
- (void)removeLayoutUnscheduledEventListener:(id)arg1;
- (void)addLayoutUnscheduledEventListener:(id)arg1;
- (void)removeLayoutScheduledEventListener:(id)arg1;
- (void)addLayoutScheduledEventListener:(id)arg1;
- (void)removeSlotExitedEventListener:(id)arg1;
- (void)addSlotExiteddEventListener:(id)arg1;
- (void)removeSlotEnteredEventListener:(id)arg1;
- (void)addSlotEnteredEventListener:(id)arg1;
- (void)removeSlotUnscheduledEventListener:(id)arg1;
- (void)addSlotUnscheduledEventListener:(id)arg1;
- (void)removeSlotScheduledEventListener:(id)arg1;
- (void)addSlotScheduledEventListener:(id)arg1;
- (void)removeEventListenerFromAllEvents:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
