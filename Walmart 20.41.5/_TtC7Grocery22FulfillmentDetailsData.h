//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, _TtC7Grocery11AddressData, _TtC7Grocery8CartData;

@interface _TtC7Grocery22FulfillmentDetailsData : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *accessPointAssortmentStoreId; // @dynamic accessPointAssortmentStoreId;
@property(nonatomic, copy) NSString *accessPointId; // @dynamic accessPointId;
@property(nonatomic, copy) NSDate *accessPointPangaeaStartDate; // @dynamic accessPointPangaeaStartDate;
@property(nonatomic, retain) _TtC7Grocery11AddressData *address; // @dynamic address;
@property(nonatomic, retain) _TtC7Grocery8CartData *cart; // @dynamic cart;
@property(nonatomic, copy) NSString *deliveryInstructions; // @dynamic deliveryInstructions;
@property(nonatomic, retain) NSNumber *isCrowdSourced; // @dynamic isCrowdSourced;
@property(nonatomic, retain) NSNumber *isMembership; // @dynamic isMembership;
@property(nonatomic, retain) NSNumber *isStoreEBTEligible; // @dynamic isStoreEBTEligible;
@property(nonatomic, copy) NSDate *membershipStartDate; // @dynamic membershipStartDate;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, copy) NSString *pickupInstructions; // @dynamic pickupInstructions;
@property(nonatomic, copy) NSString *typeName; // @dynamic typeName;

@end
