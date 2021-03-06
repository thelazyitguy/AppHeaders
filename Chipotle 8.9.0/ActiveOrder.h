//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class Campaign, Impact, NSData, NSDate, NSString;

@interface ActiveOrder : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSDate *completionDate; // @dynamic completionDate;
@property(nonatomic, copy) NSString *deliveryStatus; // @dynamic deliveryStatus;
@property(nonatomic, copy) NSString *dropOffAddressId; // @dynamic dropOffAddressId;
@property(nonatomic, copy) NSString *dropOffCountryCode; // @dynamic dropOffCountryCode;
@property(nonatomic) double dropOffLatitude; // @dynamic dropOffLatitude;
@property(nonatomic) double dropOffLongitude; // @dynamic dropOffLongitude;
@property(nonatomic, copy) NSString *dropOffNickname; // @dynamic dropOffNickname;
@property(nonatomic, retain) Impact *impactDetails; // @dynamic impactDetails;
@property(nonatomic) _Bool isExpired; // @dynamic isExpired;
@property(nonatomic) _Bool isRated; // @dynamic isRated;
@property(nonatomic, copy) NSData *orderData; // @dynamic orderData;
@property(nonatomic, copy) NSString *orderDateTimeLocal; // @dynamic orderDateTimeLocal;
@property(nonatomic, copy) NSString *orderId; // @dynamic orderId;
@property(nonatomic, copy) NSString *quotedDeliveryTime; // @dynamic quotedDeliveryTime;
@property(nonatomic, retain) Campaign *selectedCampaign; // @dynamic selectedCampaign;

@end

