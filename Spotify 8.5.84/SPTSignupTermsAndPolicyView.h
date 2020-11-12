//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSString, UITextView;
@protocol SPTSignupTermsAndPolicyViewOpenLinkDelegate;

@interface SPTSignupTermsAndPolicyView : UIView <UITextViewDelegate, GLUEStyleable>
{
    id <SPTSignupTermsAndPolicyViewOpenLinkDelegate> _delegate;
    UITextView *_textView;
    NSArray *_termsViewHorizontalMargin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *termsViewHorizontalMargin; // @synthesize termsViewHorizontalMargin=_termsViewHorizontalMargin;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <SPTSignupTermsAndPolicyViewOpenLinkDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (void)setAttributedText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
