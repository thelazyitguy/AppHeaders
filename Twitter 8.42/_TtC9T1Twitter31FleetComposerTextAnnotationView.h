//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/NSTextStorageDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter31FleetComposerTextAnnotationView : UIView <NSTextStorageDelegate>
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: textEditingView
    // Error parsing type: , name: autocompleteViewController
    // Error parsing type: , name: $__lazy_storage_$_textViewWrapper
    // Error parsing type: , name: $__lazy_storage_$_textView
    // Error parsing type: , name: $__lazy_storage_$_textBackgroundView
    // Error parsing type: , name: $__lazy_storage_$_autocompleteController
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)accessibilityActivate;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

