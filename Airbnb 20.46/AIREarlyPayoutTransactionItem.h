//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString;

@interface AIREarlyPayoutTransactionItem : AIRModel
{
    _Bool _isSent;
    NSString *_displayAmount;
    NSString *_sendDate;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sendDate; // @synthesize sendDate=_sendDate;
@property(readonly, copy, nonatomic) NSString *displayAmount; // @synthesize displayAmount=_displayAmount;
@property(readonly, nonatomic) _Bool isSent; // @synthesize isSent=_isSent;

@end
