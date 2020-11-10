//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingButton.h"

@class UIColor;

@interface SPTNowPlayingPlaylistSteeringButton : SPTNowPlayingButton
{
    long long _icon;
    UIColor *_iconColor;
    unsigned long long _steeringDirection;
    UIColor *_iconColorSelected;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *iconColorSelected; // @synthesize iconColorSelected=_iconColorSelected;
@property(nonatomic) unsigned long long steeringDirection; // @synthesize steeringDirection=_steeringDirection;
- (void)setIconSize:(struct CGSize)arg1;
- (struct CGSize)iconSize;
- (void)setIconColor:(id)arg1;
- (id)iconColor;
- (void)setIcon:(long long)arg1;
- (long long)icon;
- (void)applyIcon;
- (id)initWithDirection:(unsigned long long)arg1;

@end

