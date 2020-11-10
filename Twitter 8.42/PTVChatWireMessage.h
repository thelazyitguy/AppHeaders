//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTVChatWireMessage : NSObject
{
    unsigned long long _kind;
    NSString *_payload;
    NSString *_json;
}

+ (id)wireMessageFromDict:(id)arg1;
+ (id)wireMessageFromPayload:(id)arg1;
+ (id)authWireMessageWithToken:(id)arg1;
+ (id)wireMessageFromControlMessage:(id)arg1;
+ (id)wireMessageFromChatMessage:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *json; // @synthesize json=_json;
@property(readonly, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) unsigned long long kind; // @synthesize kind=_kind;
- (id)parsePayload:(id *)arg1;
- (id)parsePayload;
- (id)dictionaryRepresentation;
- (id)initWithKind:(unsigned long long)arg1 dictionary:(id)arg2;
- (id)initWithKind:(unsigned long long)arg1 payload:(id)arg2 originalJson:(id)arg3;

@end

