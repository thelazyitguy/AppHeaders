//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIImpressionEvent, SPTUBIMobileConnectAttachPopup_ContainerView_CloseEventFactory, SPTUBIMobileConnectAttachPopup_ContainerView_ContinueButtonEventFactory, SPTUBIMobileConnectAttachPopup_ContainerView_ListenOnThisDeviceButtonEventFactory;

@protocol SPTUBIMobileConnectAttachPopup_ContainerViewEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileConnectAttachPopup_ContainerView_CloseEventFactory>)closeFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIMobileConnectAttachPopup_ContainerView_ListenOnThisDeviceButtonEventFactory>)listenOnThisDeviceButtonFactory;
- (id <SPTUBIMobileConnectAttachPopup_ContainerView_ContinueButtonEventFactory>)continueButtonFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

