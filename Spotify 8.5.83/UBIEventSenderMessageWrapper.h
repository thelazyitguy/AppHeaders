//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "UBIEventSenderMessage-Protocol.h"

@class GPBMessage, NSData, NSString;

@interface UBIEventSenderMessageWrapper : NSObject <UBIEventSenderMessage, NSCopying>
{
    GPBMessage *_message;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GPBMessage *message; // @synthesize message=_message;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *protobufName;
@property(readonly, copy, nonatomic) NSData *protobufData;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

