//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "INSMessageEntityProtocol-Protocol.h"

@class NSData, NSDate, NSString;

@interface INSMessageEntity : NSManagedObject <INSMessageEntityProtocol>
{
}


// Remaining properties
@property(nonatomic) _Bool authenticated; // @dynamic authenticated;
@property(copy, nonatomic) NSDate *createdDate; // @dynamic createdDate;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool delivered; // @dynamic delivered;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSData *fragments; // @dynamic fragments;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *messageId; // @dynamic messageId;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *owner; // @dynamic owner;
@property(nonatomic) long long recordId; // @dynamic recordId;
@property(nonatomic) int retryCount; // @dynamic retryCount;
@property(copy, nonatomic) NSDate *retryDate; // @dynamic retryDate;
@property(retain, nonatomic) NSData *sequenceId; // @dynamic sequenceId;
@property(nonatomic) long long sequenceNumber; // @dynamic sequenceNumber;
@property(readonly) Class superclass;
@end
