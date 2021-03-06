//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Apptentive/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface ApptentiveMessageStore : NSObject <NSSecureCoding>
{
    NSMutableArray *_messages;
    NSString *_lastMessageIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastMessageIdentifier; // @synthesize lastMessageIdentifier=_lastMessageIdentifier;
@property(readonly, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

