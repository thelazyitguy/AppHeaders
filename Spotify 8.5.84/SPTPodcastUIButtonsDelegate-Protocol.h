//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIControl;

@protocol SPTPodcastUIButtonsDelegate <NSObject>

@optional
- (void)saveButtonTapped:(UIControl *)arg1;
- (void)cellContextMenuTapped:(UIControl *)arg1;
- (void)playButtonTapped:(UIControl *)arg1;
- (void)shareButtonTapped:(UIControl *)arg1;
- (void)removeButtonTapped:(UIControl *)arg1;
- (void)offlineAccessoryButtonTapped:(UIControl *)arg1;
@end
