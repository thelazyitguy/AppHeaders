//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;
@protocol _TtP16WalmartIOSShared15DeliveryAddress_, _TtP16WalmartIOSShared5Store_, _TtP16WalmartIOSShared8Location_;

@protocol _TtP16WalmartIOSShared21CustomerLocationModel_
@property(nonatomic, readonly) _Bool isOGEnabled;
@property(nonatomic, readonly) _Bool isDefaultData;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared5Store_> preferredStore;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared5Store_> hubStore;
@property(nonatomic, readonly) NSArray *pickUpLocations;
@property(nonatomic, readonly) NSArray *walmartStores;
@property(nonatomic, readonly) NSString *accessPointPreferenceId;
@property(nonatomic, readonly) NSString *storeNameAccessPointId;
@property(nonatomic, readonly) NSArray *stores;
@property(nonatomic, readonly) NSArray *rankedStores;
@property(nonatomic, readonly) _Bool shouldPromptLocationEntryIgnoringFrequency;
@property(nonatomic, readonly) _Bool shouldPromptLocationEntry;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared15DeliveryAddress_> deliveryAddress;
@property(nonatomic, readonly) id <_TtP16WalmartIOSShared8Location_> customerLocation;
@end
