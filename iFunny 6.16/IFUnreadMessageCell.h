//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NOCChatItemCell.h>

@class UILabel, UIView;

@interface IFUnreadMessageCell : NOCChatItemCell
{
    UILabel *_unreadLabel;
    UIView *_leftSeparatorView;
    UIView *_rightSeparatorView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightSeparatorView; // @synthesize rightSeparatorView=_rightSeparatorView;
@property(retain, nonatomic) UIView *leftSeparatorView; // @synthesize leftSeparatorView=_leftSeparatorView;
@property(retain, nonatomic) UILabel *unreadLabel; // @synthesize unreadLabel=_unreadLabel;
- (void)setLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
