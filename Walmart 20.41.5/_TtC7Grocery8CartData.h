//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSSet, NSString, _TtC7Grocery13OrderInfoData, _TtC7Grocery15ReservationData, _TtC7Grocery22FulfillmentDetailsData;

@interface _TtC7Grocery8CartData : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, retain) _TtC7Grocery22FulfillmentDetailsData *fulfillmentDetails; // @dynamic fulfillmentDetails;
@property(nonatomic, retain) NSNumber *intId; // @dynamic intId;
@property(nonatomic, retain) NSNumber *itemCount; // @dynamic itemCount;
@property(nonatomic, copy) NSSet *items; // @dynamic items;
@property(nonatomic, retain) NSNumber *maxAmountForCheckout; // @dynamic maxAmountForCheckout;
@property(nonatomic, retain) NSNumber *minAmountForCheckout; // @dynamic minAmountForCheckout;
@property(nonatomic, retain) _TtC7Grocery13OrderInfoData *orderInfo; // @dynamic orderInfo;
@property(nonatomic, retain) _TtC7Grocery15ReservationData *reservation; // @dynamic reservation;
@property(nonatomic, retain) NSNumber *storeId; // @dynamic storeId;
@property(nonatomic, copy) NSString *stringId; // @dynamic stringId;
@property(nonatomic, retain) NSNumber *version; // @dynamic version;

@end

