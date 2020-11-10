//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentView.h>

#import <Module_Framework/GOOTokenFieldContentViewObjectDelegate-Protocol.h>
#import <Module_Framework/GOOTokenFieldDelegate-Protocol.h>

@class GOOTokenField, NSString;

@interface GOOTokenFieldContentView : GOOBaseContentView <GOOTokenFieldContentViewObjectDelegate, GOOTokenFieldDelegate>
{
    GOOTokenField *_tokenField;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)tokenFieldShouldBecomeFirstResponder:(id)arg1;
- (_Bool)tokenFieldShouldReturn:(id)arg1;
- (void)tokenField:(id)arg1 didTapToken:(id)arg2;
- (void)tokenField:(id)arg1 didChangeInput:(id)arg2;
- (void)tokenFieldHeightDidChange:(id)arg1;
- (void)tokenField:(id)arg1 didRemoveToken:(id)arg2;
- (_Bool)tokenField:(id)arg1 shouldAddToken:(id)arg2;
- (void)tokenField:(id)arg1 didAddToken:(id)arg2;
- (void)tokenFieldDidEndEditing:(id)arg1;
- (void)tokenFieldDidBeginEditing:(id)arg1;
- (void)tokenFieldContentViewObjectDidClearTextFieldInput;
- (void)tokenFieldContentViewObjectDidChangeShowDeleteButton:(_Bool)arg1;
- (void)tokenFieldContentViewObjectDidChangeTokens:(id)arg1;
- (void)tokenFieldContentViewObjectDidAddToken:(id)arg1;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

