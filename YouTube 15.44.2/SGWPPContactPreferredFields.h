//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface SGWPPContactPreferredFields : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *contactId; // @dynamic contactId;
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(nonatomic) _Bool hasContactId; // @dynamic hasContactId;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

