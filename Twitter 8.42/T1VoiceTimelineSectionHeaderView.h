//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class NSString, UIButton, UILabel, UIViewController;

@interface T1VoiceTimelineSectionHeaderView : TFNTableViewCell
{
    UIViewController *_representedModule;
    CDUnknownBlockType _onTapAction;
    UILabel *_titleLabel;
    UIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onTapAction; // @synthesize onTapAction=_onTapAction;
@property(nonatomic) __weak UIViewController *representedModule; // @synthesize representedModule=_representedModule;
- (void)_t1_handleOnTapAction;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) NSString *actionText;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)init;

@end

