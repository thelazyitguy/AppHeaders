//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGBubbleCell.h>

@class UIImageView;

@interface IBGOutboundCell : IBGBubbleCell
{
    UIImageView *_avatarImageView;
}

+ (id)chatSwoochForTheme:(long long)arg1;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)applyTheme;
- (void)updateConstraints;
- (void)setContent:(id)arg1 isSent:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

