//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSTimeZone, NSURL;
@protocol _TtP16WalmartIOSShared12StoreAddress_, _TtP16WalmartIOSShared25SupportedAccessPointTypes_, _TtP16WalmartIOSShared9StoreType_;

@interface _TtC16WalmartIOSShared18StoreResponseModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: accessPoints
    // Error parsing type: , name: storeID
    // Error parsing type: , name: distanceValue
    // Error parsing type: , name: displayName
    // Error parsing type: , name: address
    // Error parsing type: , name: type
    // Error parsing type: , name: types
    // Error parsing type: , name: isHubStore
    // Error parsing type: , name: isPreferredStore
    // Error parsing type: , name: isPickupStore
    // Error parsing type: , name: isSemStore
    // Error parsing type: , name: isCurrentStore
    // Error parsing type: , name: buID
    // Error parsing type: , name: phoneNumber
    // Error parsing type: , name: timezone
    // Error parsing type: , name: openDate
    // Error parsing type: , name: detailsPageURL
    // Error parsing type: , name: isKiosk
    // Error parsing type: , name: isDeleted
    // Error parsing type: , name: gecOrgID
    // Error parsing type: , name: geoLocation
    // Error parsing type: , name: operationalHours
    // Error parsing type: , name: serviceTypes
    // Error parsing type: , name: supportedAccessPointTypes
    // Error parsing type: , name: $__lazy_storage_$_isPickupLocation
    // Error parsing type: , name: $__lazy_storage_$_isWalmartStore
}

@property(nonatomic, readonly) NSNumber *distance;
@property(nonatomic) _Bool isWalmartStore;
@property(nonatomic) _Bool isPickupLocation;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared25SupportedAccessPointTypes_> supportedAccessPointTypes; // @synthesize supportedAccessPointTypes;
@property(nonatomic, readonly) NSDictionary *serviceTypes;
@property(nonatomic, readonly) NSDictionary *operationalHours;
@property(nonatomic, readonly) struct CLLocationCoordinate2D geoLocation; // @synthesize geoLocation;
@property(nonatomic, readonly) NSString *gecOrgID;
@property(nonatomic, readonly) _Bool isDeleted; // @synthesize isDeleted;
@property(nonatomic, readonly) _Bool isKiosk; // @synthesize isKiosk;
@property(nonatomic, readonly) NSURL *detailsPageURL;
@property(nonatomic, readonly) NSString *openDate;
@property(nonatomic, readonly) NSTimeZone *timezone;
@property(nonatomic, readonly) NSString *phoneNumber;
@property(nonatomic, readonly) NSString *buID;
@property(nonatomic, readonly) _Bool isCurrentStore; // @synthesize isCurrentStore;
@property(nonatomic, readonly) _Bool isSemStore; // @synthesize isSemStore;
@property(nonatomic, readonly) _Bool isPickupStore; // @synthesize isPickupStore;
@property(nonatomic, readonly) _Bool isPreferredStore; // @synthesize isPreferredStore;
@property(nonatomic, readonly) _Bool isHubStore; // @synthesize isHubStore;
@property(nonatomic, readonly) NSArray *types;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared9StoreType_> type; // @synthesize type;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared12StoreAddress_> address; // @synthesize address;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSString *storeID;
@property(nonatomic, copy) NSArray *accessPoints;
- (id)toData;

@end
