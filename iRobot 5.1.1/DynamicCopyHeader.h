//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class Label, NSLayoutConstraint, UIButton;
@protocol DynamicCopyHeaderDelegate;

@interface DynamicCopyHeader : UITableViewHeaderFooterView
{
    id <DynamicCopyHeaderDelegate> _delegate;
    Label *_label;
    UIButton *_infoButton;
    NSLayoutConstraint *_leadingSpaceToSuperviewH;
    NSLayoutConstraint *_trailingSpaceToSuperviewH;
    NSLayoutConstraint *_trailingSpageFromInfoButtonToSuperview;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *trailingSpageFromInfoButtonToSuperview; // @synthesize trailingSpageFromInfoButtonToSuperview=_trailingSpageFromInfoButtonToSuperview;
@property(retain, nonatomic) NSLayoutConstraint *trailingSpaceToSuperviewH; // @synthesize trailingSpaceToSuperviewH=_trailingSpaceToSuperviewH;
@property(retain, nonatomic) NSLayoutConstraint *leadingSpaceToSuperviewH; // @synthesize leadingSpaceToSuperviewH=_leadingSpaceToSuperviewH;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) Label *label; // @synthesize label=_label;
@property(nonatomic) __weak id <DynamicCopyHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConstraints;
- (double)height;
- (void)infoButtonPressed:(id)arg1;

@end

