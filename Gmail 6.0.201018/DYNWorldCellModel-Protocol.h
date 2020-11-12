//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNCollectionViewCellModel-Protocol.h"
#import "DYNGroupSummaryRepresentable-Protocol.h"

@class NSString, UIColor;
@protocol DYNWorldCellContentViewDelegate, GIPAccountID;

@protocol DYNWorldCellModel <DYNCollectionViewCellModel, DYNGroupSummaryRepresentable>
@property(readonly, nonatomic) _Bool isMuteIconHidden;
@property(readonly, nonatomic) UIColor *badgeColor;
@property(readonly, nonatomic) _Bool isBadgeHidden;
@property(readonly, nonatomic) _Bool showBotTag;
@property(readonly, nonatomic) _Bool useEmailFallback;
@property(readonly, nonatomic) NSString *emphasizedText;
@property(readonly, nonatomic) _Bool hideUnreadUnmentionedBadge;
@property(readonly, nonatomic) _Bool isUnseen;
@property(readonly, nonatomic) _Bool muteIconEnabled;
@property(readonly, nonatomic) id <GIPAccountID> accountID;
@property(readonly, nonatomic) __weak id <DYNWorldCellContentViewDelegate> contentViewDelegate;
@end
