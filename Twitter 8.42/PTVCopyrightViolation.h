//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface PTVCopyrightViolation : NSObject <NSCopying>
{
    _Bool _broadcasterAllowListed;
    _Bool _matchAccepted;
    _Bool _matchDisputed;
    long long _violationType;
    NSString *_copyrightHolderName;
    NSString *_copyrightContentName;
    NSURL *_learnMoreURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(readonly, nonatomic) _Bool matchDisputed; // @synthesize matchDisputed=_matchDisputed;
@property(readonly, nonatomic) _Bool matchAccepted; // @synthesize matchAccepted=_matchAccepted;
@property(readonly, nonatomic) _Bool broadcasterAllowListed; // @synthesize broadcasterAllowListed=_broadcasterAllowListed;
@property(readonly, nonatomic) NSString *copyrightContentName; // @synthesize copyrightContentName=_copyrightContentName;
@property(readonly, nonatomic) NSString *copyrightHolderName; // @synthesize copyrightHolderName=_copyrightHolderName;
@property(readonly, nonatomic) long long violationType; // @synthesize violationType=_violationType;
@property(readonly, nonatomic) long long violationState;
- (id)violationWithMatchDisputed:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToCopyrightViolation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithViolationType:(long long)arg1 copyrightHolderName:(id)arg2 copyrightContentName:(id)arg3 broadcasterAllowListed:(_Bool)arg4 matchAccepted:(_Bool)arg5 matchDisputed:(_Bool)arg6 learnMoreURL:(id)arg7;

@end

