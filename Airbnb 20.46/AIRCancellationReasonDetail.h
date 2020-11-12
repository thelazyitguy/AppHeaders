//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCancellationReasonConfirmation, AIRCancellationReasonMessageHostContent, NSArray, NSString;

@interface AIRCancellationReasonDetail : AIRModel
{
    NSArray *_reasonPageContent;
    AIRCancellationReasonConfirmation *_confirmationPageContent;
    AIRCancellationReasonMessageHostContent *_messageHostPageContent;
    NSString *_sidebarAlreadyPaidTitle;
    NSString *_sidebarRefundAmountFormatted;
    NSString *_sidebarRefundTitle;
    NSString *_sidebarRefundSubtitle;
    NSString *_travelCouponExpiresText;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *travelCouponExpiresText; // @synthesize travelCouponExpiresText=_travelCouponExpiresText;
@property(readonly, copy, nonatomic) NSString *sidebarRefundSubtitle; // @synthesize sidebarRefundSubtitle=_sidebarRefundSubtitle;
@property(readonly, copy, nonatomic) NSString *sidebarRefundTitle; // @synthesize sidebarRefundTitle=_sidebarRefundTitle;
@property(readonly, copy, nonatomic) NSString *sidebarRefundAmountFormatted; // @synthesize sidebarRefundAmountFormatted=_sidebarRefundAmountFormatted;
@property(readonly, copy, nonatomic) NSString *sidebarAlreadyPaidTitle; // @synthesize sidebarAlreadyPaidTitle=_sidebarAlreadyPaidTitle;
@property(readonly, copy, nonatomic) AIRCancellationReasonMessageHostContent *messageHostPageContent; // @synthesize messageHostPageContent=_messageHostPageContent;
@property(readonly, copy, nonatomic) AIRCancellationReasonConfirmation *confirmationPageContent; // @synthesize confirmationPageContent=_confirmationPageContent;
@property(readonly, copy, nonatomic) NSArray *reasonPageContent; // @synthesize reasonPageContent=_reasonPageContent;

@end
