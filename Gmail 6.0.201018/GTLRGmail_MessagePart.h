//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRGmail_MessagePartBody, NSArray, NSString;

@interface GTLRGmail_MessagePart : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRGmail_MessagePartBody *body; // @dynamic body;
@property(copy, nonatomic) NSString *filename; // @dynamic filename;
@property(retain, nonatomic) NSArray *headers; // @dynamic headers;
@property(copy, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(copy, nonatomic) NSString *partId; // @dynamic partId;
@property(retain, nonatomic) NSArray *parts; // @dynamic parts;

@end
