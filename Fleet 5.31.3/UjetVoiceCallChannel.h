//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UJET/UjetChannel.h>

#import <UJET/NSCoding-Protocol.h>

@class NSNumber, NSString;

@interface UjetVoiceCallChannel : UjetChannel <NSCoding>
{
    NSNumber *_scheduledEnabled;
    NSNumber *_instantEnabled;
    NSString *_phoneNumber;
    NSString *_voicemailReason;
    NSNumber *_deflected;
    NSString *_deflectedReason;
}

+ (id)objectMapping;
@property(copy, nonatomic) NSString *deflectedReason; // @synthesize deflectedReason=_deflectedReason;
@property(copy, nonatomic) NSNumber *deflected; // @synthesize deflected=_deflected;
@property(copy, nonatomic) NSString *voicemailReason; // @synthesize voicemailReason=_voicemailReason;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSNumber *instantEnabled; // @synthesize instantEnabled=_instantEnabled;
@property(copy, nonatomic) NSNumber *scheduledEnabled; // @synthesize scheduledEnabled=_scheduledEnabled;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

