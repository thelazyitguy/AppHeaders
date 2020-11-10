//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, UIViewController, YTIFormattedString;
@protocol YTQueuePanelObserver, YTQueuePanelResponderProtocol, YTQueuePanelTabObserver;

@protocol YTQueuePanelControllerProtocol <NSObject>
- (void)removeQueuePanelTabObserver:(id <YTQueuePanelTabObserver>)arg1 tabToken:(NSObject *)arg2;
- (void)addQueuePanelTabObserver:(id <YTQueuePanelTabObserver>)arg1 tabToken:(NSObject *)arg2;
- (void)removeQueuePanelObserver:(id <YTQueuePanelObserver>)arg1;
- (void)addQueuePanelObserver:(id <YTQueuePanelObserver>)arg1;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)queuePanelState;
- (void)removeHeaderViewController:(NSObject *)arg1;
- (NSObject *)setHeaderViewController:(UIViewController<YTQueuePanelResponderProtocol> *)arg1;
- (_Bool)isQueueTabSelected;
- (void)selectQueueTab;
- (_Bool)isTabSelected:(NSObject *)arg1;
- (void)selectTabToken:(NSObject *)arg1;
- (void)removeTabWithToken:(NSObject *)arg1;
- (void)updateTabWithToken:(NSObject *)arg1 tabHeaderText:(YTIFormattedString *)arg2 tabAccessibilityText:(NSString *)arg3;
- (NSObject *)addTabWithTabContentViewController:(UIViewController<YTQueuePanelResponderProtocol> *)arg1 tabHeaderText:(YTIFormattedString *)arg2 tabAccessibilityText:(NSString *)arg3 tabPriority:(long long)arg4;
@end

