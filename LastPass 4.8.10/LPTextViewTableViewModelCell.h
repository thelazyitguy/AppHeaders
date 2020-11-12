//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LPTableViewModelCell.h"

#import "MeasureableTableViewCell-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UITextView;

@interface LPTextViewTableViewModelCell : LPTableViewModelCell <UITextViewDelegate, MeasureableTableViewCell>
{
    double oldLeftMargin;
    double oldRightMargin;
    UITextView *_textView;
    NSString *_initialValue;
    UIButton *_koppyButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *koppyButton; // @synthesize koppyButton=_koppyButton;
@property(retain, nonatomic) NSString *initialValue; // @synthesize initialValue=_initialValue;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copy_clicked:(id)arg1;
- (void)store;
- (void)load;
- (void)loadLabel;
- (void)layoutMarginsDidChange;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (double)measureHeightForWidth:(double)arg1;
- (void)layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentififer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
