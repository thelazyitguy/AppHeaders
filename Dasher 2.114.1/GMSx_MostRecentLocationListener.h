//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/LocationListener-Protocol.h>
#import <NavigationFramework/LocationProvider-Protocol.h>

@class GMSDLocation, NSString;

@interface GMSx_MostRecentLocationListener : NSObject <LocationListener, LocationProvider>
{
    _Bool _isProvider;
    GMSDLocation *_mostRecentLocation;
}

+ (id)locationProviderID;
- (void).cxx_destruct;
@property(nonatomic) _Bool isProvider; // @synthesize isProvider=_isProvider;
@property(readonly) GMSDLocation *mostRecentLocation; // @synthesize mostRecentLocation=_mostRecentLocation;
- (void)updateLocation:(id)arg1 dispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
