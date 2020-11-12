//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/UITextViewDelegate-Protocol.h>

@class NSString, UITextRange, UITextView;
@protocol RCTBackedTextInputViewProtocol;

@interface RCTBackedTextViewDelegateAdapter : NSObject <UITextViewDelegate>
{
    UITextView<RCTBackedTextInputViewProtocol> *_backedTextInputView;
    _Bool _textDidChangeIsComing;
    UITextRange *_previousSelectedTextRange;
}

- (void).cxx_destruct;
- (void)textViewProbablyDidChangeSelection;
- (void)skipNextTextInputDidChangeSelectionEventWithTextRange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (id)initWithTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
