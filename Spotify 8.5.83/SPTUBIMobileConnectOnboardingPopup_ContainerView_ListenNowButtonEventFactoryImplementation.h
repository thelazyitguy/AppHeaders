//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileConnectOnboardingPopup_ContainerView_ListenNowButtonEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileConnectOnboardingPopup_ContainerView_ListenNowButtonEventFactoryImplementation : NSObject <SPTUBIMobileConnectOnboardingPopup_ContainerView_ListenNowButtonEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithComponents:(id)arg1 parentAbsoluteLocation:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitConnectToRemoteDeviceWithRemoteDeviceId:(id)arg1;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithComponents:(id)arg1 parentAbsoluteLocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

