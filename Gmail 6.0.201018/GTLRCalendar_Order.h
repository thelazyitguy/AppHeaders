//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCalendar_AssignedId, GTLRCalendar_Organization, GTLRCalendar_Time, NSArray, NSString;

@interface GTLRCalendar_Order : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRCalendar_AssignedId *assignedId; // @dynamic assignedId;
@property(retain, nonatomic) GTLRCalendar_Time *expectedArrivalDate; // @dynamic expectedArrivalDate;
@property(retain, nonatomic) NSArray *products; // @dynamic products;
@property(retain, nonatomic) GTLRCalendar_Time *purchaseDate; // @dynamic purchaseDate;
@property(retain, nonatomic) GTLRCalendar_Organization *seller; // @dynamic seller;
@property(copy, nonatomic) NSString *totalPrice; // @dynamic totalPrice;

@end
