//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber, NSString, NSURL;

@interface AIRReferral : AIRModel
{
    NSString *_receiverFullName;
    NSString *_receiverDisplayName;
    NSURL *_receiverPhotoURL;
    NSString *_receiverEmail;
    NSString *_rawState;
    NSNumber *_localizedCreditEarned;
    NSNumber *_localizedCreditPending;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *localizedCreditPending; // @synthesize localizedCreditPending=_localizedCreditPending;
@property(readonly, copy, nonatomic) NSNumber *localizedCreditEarned; // @synthesize localizedCreditEarned=_localizedCreditEarned;
@property(readonly, copy, nonatomic) NSString *rawState; // @synthesize rawState=_rawState;
@property(readonly, copy, nonatomic) NSString *receiverEmail; // @synthesize receiverEmail=_receiverEmail;
@property(readonly, copy, nonatomic) NSURL *receiverPhotoURL; // @synthesize receiverPhotoURL=_receiverPhotoURL;
@property(readonly, copy, nonatomic) NSString *receiverDisplayName; // @synthesize receiverDisplayName=_receiverDisplayName;
@property(readonly, copy, nonatomic) NSString *receiverFullName; // @synthesize receiverFullName=_receiverFullName;
@property(readonly, copy, nonatomic) NSString *receiverDisplayIdentifier;
@property(readonly, copy, nonatomic) NSNumber *localizedCredit;
@property(readonly, nonatomic) _Bool isPending;
@property(readonly, nonatomic) _Bool isEarned;
@property(readonly, nonatomic) long long state;

@end
