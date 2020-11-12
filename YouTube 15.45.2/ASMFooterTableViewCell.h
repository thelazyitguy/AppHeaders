//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASMTableViewCell.h>

#import <Module_Framework/ASMNavigationInitiator-Protocol.h>

@class ASMFooter, UIStackView;

@interface ASMFooterTableViewCell : ASMTableViewCell <ASMNavigationInitiator>
{
    CDUnknownBlockType _navigateTo;
    ASMFooter *_footer;
    UIStackView *_contentVerticalStackView;
}

+ (id)horizontalStackViewForButtons;
- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *contentVerticalStackView; // @synthesize contentVerticalStackView=_contentVerticalStackView;
@property(retain, nonatomic) ASMFooter *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) CDUnknownBlockType navigateTo; // @synthesize navigateTo=_navigateTo;
- (void)removeAllNotReusableSubviews;
- (void)didTapFooterItem:(id)arg1;
- (id)buttonForFooterItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
