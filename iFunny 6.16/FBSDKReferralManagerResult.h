//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FBSDKReferralManagerResult : NSObject
{
    _Bool _isCancelled;
    NSArray *_referralCodes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *referralCodes; // @synthesize referralCodes=_referralCodes;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (id)initWithReferralCodes:(id)arg1 isCancelled:(_Bool)arg2;

@end
