//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterTimelineFactory-Protocol.h>

@class NSDictionary, NSString, T1TimelineFactoryPerformanceMonitor;

@interface T1TimelineFactory : NSObject <TFNTwitterTimelineFactory>
{
    NSDictionary *_entries;
    T1TimelineFactoryPerformanceMonitor *_performanceMonitor;
}

+ (id)sharedTimelineFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic) T1TimelineFactoryPerformanceMonitor *performanceMonitor; // @synthesize performanceMonitor=_performanceMonitor;
- (id)urtNotificationsTimelineForAccount:(id)arg1;
- (id)timelineForAccount:(id)arg1 identifier:(id)arg2;
- (id)inUseTimelineIdentifiersForAccount:(id)arg1;
- (id)timelineIdentifiers;
- (id)homeTimelineVariantCoordinatorForAccount:(id)arg1;
- (id)rootViewControllerForTimeline:(id)arg1 account:(id)arg2;
- (id)timelineIdentifierForPanelID:(long long)arg1;
- (long long)panelIDForTimelineWithIdentifier:(id)arg1;
- (id)_t1_homeSegmentedControllerTimelineEntryViewControllerCreatorWithTimeline:(id)arg1 andAccount:(id)arg2;
- (id)_t1_homeSegmentedControllerTimelineEntryTimelineCreatorWithAccount:(id)arg1;
- (id)_t1_homeTimelineEntry;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

