//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WalmartCore/SDLocationManagerDelegate-Protocol.h>

@class CLLocation, NSDate, NSString, _TtC11FeatureAPIs17StoreLocatorStore;
@protocol WMInstoreSearchManagerDelegate;

@interface WMInstoreSearchManager : NSObject <SDLocationManagerDelegate>
{
    _Bool _fetchingNearestStore;
    _Bool _locationManagerDelegateAssigned;
    _Bool _isObservingStoreMode;
    id <WMInstoreSearchManagerDelegate> _delegate;
    _TtC11FeatureAPIs17StoreLocatorStore *_storeToSearch;
    CLLocation *_previousLocation;
    NSDate *_previousLocationUpdatedAt;
    _TtC11FeatureAPIs17StoreLocatorStore *_nearestStore;
    struct CLLocationCoordinate2D _coordinates;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isObservingStoreMode; // @synthesize isObservingStoreMode=_isObservingStoreMode;
@property(nonatomic) struct CLLocationCoordinate2D coordinates; // @synthesize coordinates=_coordinates;
@property(nonatomic) _Bool locationManagerDelegateAssigned; // @synthesize locationManagerDelegateAssigned=_locationManagerDelegateAssigned;
@property(retain, nonatomic) _TtC11FeatureAPIs17StoreLocatorStore *nearestStore; // @synthesize nearestStore=_nearestStore;
@property(retain, nonatomic) NSDate *previousLocationUpdatedAt; // @synthesize previousLocationUpdatedAt=_previousLocationUpdatedAt;
@property(retain, nonatomic) CLLocation *previousLocation; // @synthesize previousLocation=_previousLocation;
@property(retain, nonatomic) _TtC11FeatureAPIs17StoreLocatorStore *storeToSearch; // @synthesize storeToSearch=_storeToSearch;
@property(nonatomic) _Bool fetchingNearestStore; // @synthesize fetchingNearestStore=_fetchingNearestStore;
@property(nonatomic) __weak id <WMInstoreSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startMonitoringLocation;
- (void)stopMonitoringLocation;
- (void)locationManagerFailure:(id)arg1 error:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setStoreForLocation:(id)arg1;
- (void)stopMonitoringStoreMode;
- (void)startMonitoringStoreMode;
- (void)storeModeChanged:(id)arg1;
- (long long)validLocationTimeInterval;
- (void)doGPSFixOnNearestStore;
- (void)mockNearestStore;
- (_Bool)hasMyStore;
- (_Bool)isInStoreMode;
- (id)storeSearchModeAsString;
- (void)updateStoreToSearch;
- (id)storeSearchFullFormattedAddress;
- (id)storeSearchAbbreviatedAddress;
- (id)storeSearchAddressCopy;
- (id)nearestStoreId;
- (id)storeSearchStoreId;
- (id)getPreviousLocation;
- (_Bool)isPreviousLocationWithin:(long long)arg1;
- (long long)searchMode;
- (void)setSearchMode:(long long)arg1;
- (void)setSearchModeInStore;
- (void)setSearchModeOnline;
- (_Bool)isStoreSearchActive;
- (_Bool)switchToUsingNearestStore;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
