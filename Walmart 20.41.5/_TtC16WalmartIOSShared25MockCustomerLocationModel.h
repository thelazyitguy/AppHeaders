//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class NSArray, NSString;
@protocol _TtP16WalmartIOSShared15DeliveryAddress_, _TtP16WalmartIOSShared5Store_, _TtP16WalmartIOSShared8Location_;

@interface _TtC16WalmartIOSShared25MockCustomerLocationModel : _TtCs12_SwiftObject
{
    // Error parsing type: , name: deliveryAddress
    // Error parsing type: , name: accessPointPreferenceId
    // Error parsing type: , name: storeNameAccessPointId
    // Error parsing type: , name: mockCustomerLocation
    // Error parsing type: , name: mockShouldPromptLocationEntry
    // Error parsing type: , name: mockShouldPromptLocationEntryIgnoringFrequency
    // Error parsing type: , name: mockRankedStores
    // Error parsing type: , name: mockPreferredStore
    // Error parsing type: , name: mockHubStore
    // Error parsing type: , name: mockIsDefaultData
    // Error parsing type: , name: mockIsZipLocated
    // Error parsing type: , name: isOGEnabled
}

@property(nonatomic, readonly) _Bool isDefaultData;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared5Store_> preferredStore;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared5Store_> hubStore;
@property(nonatomic, readonly) NSArray *pickUpLocations;
@property(nonatomic, readonly) NSArray *walmartStores;
@property(nonatomic, readonly) NSArray *stores;
@property(nonatomic, readonly) NSArray *rankedStores;
@property(nonatomic, readonly) _Bool shouldPromptLocationEntryIgnoringFrequency;
@property(nonatomic, readonly) _Bool shouldPromptLocationEntry;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared8Location_> customerLocation;
@property(nonatomic) _Bool isOGEnabled; // @synthesize isOGEnabled;
@property(nonatomic, copy) NSString *storeNameAccessPointId;
@property(nonatomic, copy) NSString *accessPointPreferenceId;
@property(nonatomic, retain) id <_TtP16WalmartIOSShared15DeliveryAddress_> deliveryAddress; // @synthesize deliveryAddress;

@end

