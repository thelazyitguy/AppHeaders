//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JBTCBigTopApplicationInfo, NSString;
@protocol ComGoogleAppsBigtopDataSettingsInternalapiSettingsClientInternal, JBTLoggingCounterManager;

@interface ComGoogleAppsBigtopDataItemsVisibilityWorkflowAssistVisibilityHelper : NSObject
{
    JBTCBigTopApplicationInfo *applicationInfo_;
    NSString *deviceId_;
    id <ComGoogleAppsBigtopDataSettingsInternalapiSettingsClientInternal> settingsClient_;
    id <JBTLoggingCounterManager> counterManager_;
}

+ (void)initialize;
- (void)dealloc;
- (void)addInboxEntriesforWorkflowAssistItemsWithComGoogleAppsBigtopServicesGmailCommonComponentSummaryItemData:(id)arg1 withComGoogleAppsBigtopDataItemsVisibilityCalculationResultBuilder:(id)arg2 withComGoogleCommonBaseOptional:(id)arg3 withJavaUtilSet:(id)arg4;
- (_Bool)workflowAssistAppearsInViewWithComGoogleAppsBigtopServicesGmailCommonComponentSummaryMessageList:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg2 withComGoogleCommonBaseOptional:(id)arg3;

@end
