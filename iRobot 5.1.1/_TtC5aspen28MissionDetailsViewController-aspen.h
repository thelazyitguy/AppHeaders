//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC5aspen28MissionDetailsViewController.h"

#import "CMRHistoryUIServiceDataCallback-Protocol.h"
#import "CMRMapsUIServiceDataCallback-Protocol.h"

@interface _TtC5aspen28MissionDetailsViewController (aspen) <CMRHistoryUIServiceDataCallback, CMRMapsUIServiceDataCallback>
- (void)onSettingsUIServiceDataChanged:(id)arg1;
- (void)cancelNewSpaceItemPressed;
- (void)onMapsUIServiceDataChanged:(id)arg1;
- (void)onHistoryUIServiceDataChanged:(id)arg1;
- (void)unsubscribe;
- (void)subscribe;
- (_Bool)shouldManageSubscription;
@end
