//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NSCopying-Protocol.h>
#import <Nbp/NfPlaydelayTimestamp-Protocol.h>

@class NSNumber, NSString;

@interface PlaydelayTimestamp : NSObject <NfPlaydelayTimestamp, NSCopying>
{
    NSString *_uniqueIdentifier;
    NSNumber *_beginPlayerPresentation;
    NSNumber *_endPlayerPresentation;
    NSNumber *_beginPINChallenge;
    NSNumber *_endPINChallenge;
    NSNumber *_beginPlatformFetch;
    NSNumber *_endPlatformFetch;
    NSNumber *_beginPlayback;
    NSNumber *_cancelPlayback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *cancelPlayback; // @synthesize cancelPlayback=_cancelPlayback;
@property(copy, nonatomic) NSNumber *beginPlayback; // @synthesize beginPlayback=_beginPlayback;
@property(copy, nonatomic) NSNumber *endPlatformFetch; // @synthesize endPlatformFetch=_endPlatformFetch;
@property(copy, nonatomic) NSNumber *beginPlatformFetch; // @synthesize beginPlatformFetch=_beginPlatformFetch;
@property(copy, nonatomic) NSNumber *endPINChallenge; // @synthesize endPINChallenge=_endPINChallenge;
@property(copy, nonatomic) NSNumber *beginPINChallenge; // @synthesize beginPINChallenge=_beginPINChallenge;
@property(copy, nonatomic) NSNumber *endPlayerPresentation; // @synthesize endPlayerPresentation=_endPlayerPresentation;
@property(copy, nonatomic) NSNumber *beginPlayerPresentation; // @synthesize beginPlayerPresentation=_beginPlayerPresentation;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
