//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCurrencyAmount, AIRHostReferralMilestone, NSString, NSURL;

@interface AIRHostReferral : AIRModel
{
    NSString *_hostReferralID;
    NSString *_status;
    NSString *_referrerUserID;
    NSString *_referredUserID;
    NSString *_referredUserName;
    NSString *_referredUserEmail;
    NSString *_referredUserPhone;
    NSURL *_referredUserPhotoURL;
    AIRHostReferralMilestone *_milestone;
    AIRCurrencyAmount *_localizedReferrerEarnings;
}

+ (id)idAttributeName;
+ (id)customKeyPathMapping;
+ (id)customTransformers;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRCurrencyAmount *localizedReferrerEarnings; // @synthesize localizedReferrerEarnings=_localizedReferrerEarnings;
@property(readonly, copy, nonatomic) AIRHostReferralMilestone *milestone; // @synthesize milestone=_milestone;
@property(readonly, copy, nonatomic) NSURL *referredUserPhotoURL; // @synthesize referredUserPhotoURL=_referredUserPhotoURL;
@property(readonly, copy, nonatomic) NSString *referredUserPhone; // @synthesize referredUserPhone=_referredUserPhone;
@property(readonly, copy, nonatomic) NSString *referredUserEmail; // @synthesize referredUserEmail=_referredUserEmail;
@property(readonly, copy, nonatomic) NSString *referredUserName; // @synthesize referredUserName=_referredUserName;
@property(readonly, copy, nonatomic) NSString *referredUserID; // @synthesize referredUserID=_referredUserID;
@property(readonly, copy, nonatomic) NSString *referrerUserID; // @synthesize referrerUserID=_referrerUserID;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *hostReferralID; // @synthesize hostReferralID=_hostReferralID;

@end
