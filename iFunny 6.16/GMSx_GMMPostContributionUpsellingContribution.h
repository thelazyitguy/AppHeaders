//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class GMSx_GMMPostContributionAction_WriteReviewAction, NSMutableArray, NSString;

@interface GMSx_GMMPostContributionUpsellingContribution : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(nonatomic) _Bool hasVed; // @dynamic hasVed;
@property(retain, nonatomic) NSMutableArray *textItemArray; // @dynamic textItemArray;
@property(readonly, nonatomic) unsigned long long textItemArray_Count; // @dynamic textItemArray_Count;
@property(copy, nonatomic) NSString *ved; // @dynamic ved;
@property(retain, nonatomic) GMSx_GMMPostContributionAction_WriteReviewAction *writeReviewAction; // @dynamic writeReviewAction;

@end
