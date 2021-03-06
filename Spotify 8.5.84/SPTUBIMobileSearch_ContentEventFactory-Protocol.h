//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIImpressionEvent, SPTUBIMobileSearch_Content_ErrorEventFactory, SPTUBIMobileSearch_Content_InitialViewEventFactory, SPTUBIMobileSearch_Content_OfflineResultsEventFactory, SPTUBIMobileSearch_Content_OnlineResultsEventFactory;

@protocol SPTUBIMobileSearch_ContentEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileSearch_Content_ErrorEventFactory>)errorFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIMobileSearch_Content_OfflineResultsEventFactory>)offlineResultsFactory;
- (id <SPTUBIMobileSearch_Content_OnlineResultsEventFactory>)onlineResultsFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIMobileSearch_Content_InitialViewEventFactory>)initialViewFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

