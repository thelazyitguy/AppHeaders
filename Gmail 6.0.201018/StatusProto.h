//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class MessageSet, NSString;

@interface StatusProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int canonicalCode; // @dynamic canonicalCode;
@property(nonatomic) int code; // @dynamic code;
@property(nonatomic) _Bool hasCanonicalCode; // @dynamic hasCanonicalCode;
@property(nonatomic) _Bool hasCode; // @dynamic hasCode;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasMessageSet; // @dynamic hasMessageSet;
@property(nonatomic) _Bool hasSpace; // @dynamic hasSpace;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) MessageSet *messageSet; // @dynamic messageSet;
@property(copy, nonatomic) NSString *space; // @dynamic space;

@end
