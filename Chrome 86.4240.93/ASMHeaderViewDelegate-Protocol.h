//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class ASMHeaderView, UIButton;

@protocol ASMHeaderViewDelegate <NSObject>

@optional
- (void)headerView:(ASMHeaderView *)arg1 didTapAccountIndicatorButton:(UIButton *)arg2;
- (void)headerView:(ASMHeaderView *)arg1 didTapHelpButton:(UIButton *)arg2;
- (void)headerView:(ASMHeaderView *)arg1 didTapCancelButton:(UIButton *)arg2;
- (void)headerView:(ASMHeaderView *)arg1 didTapBackButton:(UIButton *)arg2;
@end
