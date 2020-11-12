//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, GTLRIDrive_Approval_Capabilities, GTLRIDrive_User, NSArray, NSNumber, NSString;

@interface GTLRIDrive_Approval : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *approvalId; // @dynamic approvalId;
@property(retain, nonatomic) NSNumber *cancelOnItemUnlock; // @dynamic cancelOnItemUnlock;
@property(retain, nonatomic) GTLRIDrive_Approval_Capabilities *capabilities; // @dynamic capabilities;
@property(copy, nonatomic) NSString *commentText; // @dynamic commentText;
@property(retain, nonatomic) GTLRDateTime *completedDate; // @dynamic completedDate;
@property(copy, nonatomic) NSString *completionRevisionId; // @dynamic completionRevisionId;
@property(retain, nonatomic) GTLRDateTime *createdDate; // @dynamic createdDate;
@property(retain, nonatomic) GTLRDateTime *dueDate; // @dynamic dueDate;
@property(retain, nonatomic) GTLRIDrive_User *initiator; // @dynamic initiator;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) NSNumber *latest; // @dynamic latest;
@property(retain, nonatomic) GTLRDateTime *modifiedDate; // @dynamic modifiedDate;
@property(retain, nonatomic) NSArray *reviewerDecisions; // @dynamic reviewerDecisions;
@property(retain, nonatomic) NSArray *reviewerEmailAddresses; // @dynamic reviewerEmailAddresses;
@property(retain, nonatomic) NSArray *reviewerPersonNames; // @dynamic reviewerPersonNames;
@property(copy, nonatomic) NSString *revisionId; // @dynamic revisionId;
@property(copy, nonatomic) NSString *status; // @dynamic status;

@end
