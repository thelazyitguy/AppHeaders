//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <BetterTextView/UITextViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UIFont;
@protocol UITextViewDelegate;

@interface _TtC14BetterTextView14BetterTextView : UITextView <UITextViewDelegate>
{
    // Error parsing type: , name: $__lazy_storage_$_placeholderLabel
    // Error parsing type: , name: listeners
    // Error parsing type: , name: customTextContainer
    // Error parsing type: , name: customLayoutManager
    // Error parsing type: , name: customTextStorage
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic, copy) NSString *text;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) NSAttributedString *attributedText;
@property(nonatomic, retain) UIFont *font;
@property(nonatomic, retain) id <UITextViewDelegate> delegate;

@end
